

# Set default app name, can override with `make name=other_app`
app_name ?= hello_world

compile_device_app: test_rom otp_img
	@echo "Compiling device app: $(app_name)"
	./bazelisk.sh build --subcommands --sandbox_debug --verbose_failures //sw/device/applications/$(app_name):$(app_name) --define USE_INTEGRATED_EARLGRAY=1 --explain=bazel_app_explain.txt --show_result=10000 2>&1 | tee bazel_app_build.log

.PHONY: compile_verilator
compile_verilator:
	./bazelisk.sh build --subcommands --sandbox_debug --verbose_failures //hw:verilator_real --define USE_INTEGRATED_EARLGRAY=1  --explain=bazel_explain.txt --show_result=10000 2>&1 | tee bazel_build.log


run_verilator:
	VERILATOR_BINARY=$$(./bazelisk.sh cquery --output=files //hw:verilator_real --define USE_INTEGRATED_EARLGRAY=1 | grep 'Vchip_sim_tb'$$); \
	echo "Verilator binary is $$VERILATOR_BINARY"; \
	APP_BINARY=$$(./bazelisk.sh cquery --output=files //sw/device/applications/$(app_name)| grep 'sim_verilator\.64\.vmem$$'); \
	echo "App is $$APP_BINARY"; \
	ROM_BINARY=$$(./bazelisk.sh cquery --output=files //sw/device/lib/testing/test_rom | grep 'sim_verilator\.39\.scr\.vmem$$'); \
	echo "Test ROM is $$ROM_BINARY"; \
	OTP_IMG=$$(./bazelisk.sh cquery --output=files //hw/top_integrated_earlgrey/data/otp:img_rma | grep '\.24\.vmem$$'); \
	echo "OTP image is $$OTP_IMG"; \
	echo "Running simulation..."; \
	./$$VERILATOR_BINARY --meminit=flash0,$$APP_BINARY --meminit=rom,$$ROM_BINARY --meminit=otp,$$OTP_IMG --trace=/tmp/sim.fst

test_rom:
	./bazelisk.sh build --subcommands --sandbox_debug --verbose_failures //sw/device/lib/testing/test_rom

otp_img:
	./bazelisk.sh build --subcommands --sandbox_debug --verbose_failures //hw/top_integrated_earlgrey/data/otp:img_rma

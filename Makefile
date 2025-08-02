

compile_device_app: test_rom otp_img
	@if [ -z "$(name)" ]; then \
		echo "Usage: make compile_device_app name=your_app"; \
		exit 1; \
	fi
	./bazelisk.sh build --subcommands --sandbox_debug --verbose_failures //sw/device/applications/$(name):$(name)

.PHONY: compile_verilator
compile_verilator:
	./bazelisk.sh build --subcommands --sandbox_debug --verbose_failures //hw:verilator_real


run_verilator:
	@if [ -z "$(name)" ]; then \
		echo "Usage: make run_verilator name=your_app"; \
		exit 1; \
	fi; \
	VERILATOR_BINARY=$$(./bazelisk.sh cquery --output=files //hw:verilator_real | grep 'Vchip_sim_tb'$$); \
	echo "Verilator binary is $$VERILATOR_BINARY"; \
	APP_BINARY=$$(./bazelisk.sh cquery --output=files //sw/device/applications/$(name) | grep 'sim_verilator\.64\.vmem$$'); \
	echo "App is $$APP_BINARY"; \
	ROM_BINARY=$$(./bazelisk.sh cquery --output=files //sw/device/lib/testing/test_rom | grep 'sim_verilator\.39\.scr\.vmem$$'); \
	echo "Test ROM is $$ROM_BINARY"; \
	OTP_IMG=$$(./bazelisk.sh cquery --output=files //hw/top_earlgrey/data/otp:img_rma | grep '\.24\.vmem$$'); \
	echo "OTP image is $$OTP_IMG"; \
	echo "Running simulation..."; \
	./$$VERILATOR_BINARY --meminit=flash0,$$APP_BINARY --meminit=rom,$$ROM_BINARY --meminit=otp,$$OTP_IMG --trace=/tmp/sim.fst

test_rom:
	./bazelisk.sh build --subcommands --sandbox_debug --verbose_failures //sw/device/lib/testing/test_rom

otp_img:
	./bazelisk.sh build --subcommands --sandbox_debug --verbose_failures //hw/top_earlgrey/data/otp:img_rma

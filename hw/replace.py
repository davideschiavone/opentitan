import os
import sys

def search_files_without_autogen(directory, word, replacement_word):
    matches = []
    renamed_files = []
    for root, dirs, files in os.walk(directory):
        # Esclude directory che contengono 'autogen' nel percorso
        if 'autogen' in root:
            continue
        for file in files:
            filepath = os.path.join(root, file)
            # Esclude file il cui percorso assoluto contiene 'autogen'
            if 'autogen' in os.path.abspath(filepath):
                continue
            try:
                found = False
                with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
                    content = f.read()
                    if word in content:
                        matches.append(filepath)
                        new_content = content.replace(word, replacement_word)
                        found = True
                if found:
                    with open(filepath, 'w', encoding='utf-8') as f:
                        f.write(new_content)

                #check filename
                if word in file:
                    new_filename = file.replace(word, replacement_word)
                    new_filepath = os.path.join(root, new_filename)
                    os.rename(filepath, new_filepath)
                    renamed_files.append(new_filepath)

            except Exception as e:
                # Ignora errori di lettura/scrittura
                pass
            except:
                # Ignora file non leggibili
                pass

    return matches, renamed_files


if __name__ == '__main__':
    if len(sys.argv) < 4:
        print("Usage: python replace.py <directory> <target_word> <replacement_word>")
        sys.exit(1)

    directory = sys.argv[1]
    word = sys.argv[2]
    replacement_word = sys.argv[3]
    results, renamed_files = search_files_without_autogen(directory, word, replacement_word)
    for filepath in results:
        print(filepath)
    for filepath in renamed_files:
        print(f"Renamed file: {filepath}")

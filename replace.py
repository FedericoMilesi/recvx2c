import os
import re
import argparse
from typing import Callable


# 1. Single Responsibility: This function handles file reading and writing
def process_file(file_path: str, process_content: Callable[[str], str]) -> None:
    """Reads a file, processes its content, and writes it back if changed."""
    try:
        with open(file_path, 'r') as file:
            file_data = file.read()

        # Process the file's content (using dependency injection)
        new_data = process_content(file_data)

        # Write back to the file only if changes were made
        if new_data != file_data:
            with open(file_path, 'w') as file:
                file.write(new_data)
            print(f"Updated file: {file_path}")
        else:
            print(f"No changes in file: {file_path}")

    except FileNotFoundError:
        print(f"File not found: {file_path}")
    except Exception as e:
        print(f"Error processing {file_path}: {e}")


# 2. Single Responsibility: This function processes the content of a file and replaces struct names
def replace_struct_name(file_content: str, structure_regex: str, replacement: str) -> str:
    """Replaces all occurrences of a captured struct name in the file content using word boundaries."""
    # Compile the regex to find the struct name and capture it
    pattern = re.compile(structure_regex, re.MULTILINE)

    # Find the struct definition and capture the struct name
    match = pattern.search(file_content)
    if match:
        old_struct_name = match.group(1)  # Capture the struct name (group 1)

        # Replace all occurrences of the old struct name as a whole word using word boundaries (\b)
        word_boundary_pattern = re.compile(rf'\b{re.escape(old_struct_name)}\b')

        # Replace all whole-word occurrences of the struct name
        new_content = word_boundary_pattern.sub(replacement, file_content)
        return new_content
    return file_content


# 3. Open/Closed Principle: Folder traversal logic is separated from file processing
def scan_folder_and_process_files(folder_path: str, file_processor: Callable[[str], None]) -> None:
    """Scans a folder and processes each file using the provided file_processor function."""
    for root, dirs, files in os.walk(folder_path):
        for file_name in files:
            file_path = os.path.join(root, file_name)
            file_processor(file_path)


# 4. Dependency Injection: Higher-level logic passes in the behavior
def replace_structs_in_folder(folder_path: str, structure_regex: str, replacement: str) -> None:
    """Scans a folder and replaces struct names in each file based on the provided regex and replacement."""
    # Define a function for processing each file's content (injecting replace_struct_name)
    def process_single_file(file_path: str) -> None:
        process_file(file_path, lambda content: replace_struct_name(content, structure_regex, replacement))

    # Scan folder and process each file
    scan_folder_and_process_files(folder_path, process_single_file)


if __name__ == "__main__":
    # Define command line arguments
    parser = argparse.ArgumentParser(description="Search and replace struct names in source files.")
    parser.add_argument("folder_path", help="The folder path where the source files are located.")
    parser.add_argument("structure_regex", help="The regex pattern to search for the struct definition.")
    parser.add_argument("replacement", help="The replacement string for the struct name.")

    # Parse command-line arguments
    args = parser.parse_args()

    # Execute the struct replacement operation
    replace_structs_in_folder(args.folder_path, args.structure_regex, args.replacement)

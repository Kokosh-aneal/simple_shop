# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1

# Include any dependencies generated for this target.
include CMakeFiles/program.out.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/program.out.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/program.out.dir/flags.make

# Object files for target program.out
program_out_OBJECTS =

# External object files for target program.out
program_out_EXTERNAL_OBJECTS = \
"/home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1/CMakeFiles/obj.dir/src/main.cpp.o" \
"/home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1/CMakeFiles/obj.dir/src/menu.cpp.o"

program.out: CMakeFiles/obj.dir/src/main.cpp.o
program.out: CMakeFiles/obj.dir/src/menu.cpp.o
program.out: CMakeFiles/program.out.dir/build.make
program.out: CMakeFiles/program.out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking CXX executable program.out"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/program.out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/program.out.dir/build: program.out

.PHONY : CMakeFiles/program.out.dir/build

CMakeFiles/program.out.dir/requires:

.PHONY : CMakeFiles/program.out.dir/requires

CMakeFiles/program.out.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/program.out.dir/cmake_clean.cmake
.PHONY : CMakeFiles/program.out.dir/clean

CMakeFiles/program.out.dir/depend:
	cd /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1 /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1 /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1 /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1 /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1/CMakeFiles/program.out.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/program.out.dir/depend


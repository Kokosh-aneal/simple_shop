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
include CMakeFiles/obj.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/obj.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/obj.dir/flags.make

CMakeFiles/obj.dir/src/main.cpp.o: CMakeFiles/obj.dir/flags.make
CMakeFiles/obj.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/obj.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.dir/src/main.cpp.o -c /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1/src/main.cpp

CMakeFiles/obj.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1/src/main.cpp > CMakeFiles/obj.dir/src/main.cpp.i

CMakeFiles/obj.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1/src/main.cpp -o CMakeFiles/obj.dir/src/main.cpp.s

CMakeFiles/obj.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/obj.dir/src/main.cpp.o.requires

CMakeFiles/obj.dir/src/main.cpp.o.provides: CMakeFiles/obj.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/obj.dir/build.make CMakeFiles/obj.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/obj.dir/src/main.cpp.o.provides

CMakeFiles/obj.dir/src/main.cpp.o.provides.build: CMakeFiles/obj.dir/src/main.cpp.o


CMakeFiles/obj.dir/src/menu.cpp.o: CMakeFiles/obj.dir/flags.make
CMakeFiles/obj.dir/src/menu.cpp.o: src/menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/obj.dir/src/menu.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.dir/src/menu.cpp.o -c /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1/src/menu.cpp

CMakeFiles/obj.dir/src/menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.dir/src/menu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1/src/menu.cpp > CMakeFiles/obj.dir/src/menu.cpp.i

CMakeFiles/obj.dir/src/menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.dir/src/menu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1/src/menu.cpp -o CMakeFiles/obj.dir/src/menu.cpp.s

CMakeFiles/obj.dir/src/menu.cpp.o.requires:

.PHONY : CMakeFiles/obj.dir/src/menu.cpp.o.requires

CMakeFiles/obj.dir/src/menu.cpp.o.provides: CMakeFiles/obj.dir/src/menu.cpp.o.requires
	$(MAKE) -f CMakeFiles/obj.dir/build.make CMakeFiles/obj.dir/src/menu.cpp.o.provides.build
.PHONY : CMakeFiles/obj.dir/src/menu.cpp.o.provides

CMakeFiles/obj.dir/src/menu.cpp.o.provides.build: CMakeFiles/obj.dir/src/menu.cpp.o


obj: CMakeFiles/obj.dir/src/main.cpp.o
obj: CMakeFiles/obj.dir/src/menu.cpp.o
obj: CMakeFiles/obj.dir/build.make

.PHONY : obj

# Rule to build all files generated by this target.
CMakeFiles/obj.dir/build: obj

.PHONY : CMakeFiles/obj.dir/build

CMakeFiles/obj.dir/requires: CMakeFiles/obj.dir/src/main.cpp.o.requires
CMakeFiles/obj.dir/requires: CMakeFiles/obj.dir/src/menu.cpp.o.requires

.PHONY : CMakeFiles/obj.dir/requires

CMakeFiles/obj.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/obj.dir/cmake_clean.cmake
.PHONY : CMakeFiles/obj.dir/clean

CMakeFiles/obj.dir/depend:
	cd /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1 /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1 /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1 /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1 /home/mion/s/243/jkokoszk/c++/proe_zadanie_programistyczne_nr_1/CMakeFiles/obj.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/obj.dir/depend

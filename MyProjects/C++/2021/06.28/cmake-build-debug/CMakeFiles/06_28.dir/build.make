# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /mnt/f/docs/MyCode/MyProjects/C++/2021/06.28

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/f/docs/MyCode/MyProjects/C++/2021/06.28/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/06_28.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/06_28.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/06_28.dir/flags.make

CMakeFiles/06_28.dir/main.cpp.o: CMakeFiles/06_28.dir/flags.make
CMakeFiles/06_28.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/f/docs/MyCode/MyProjects/C++/2021/06.28/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/06_28.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/06_28.dir/main.cpp.o -c /mnt/f/docs/MyCode/MyProjects/C++/2021/06.28/main.cpp

CMakeFiles/06_28.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/06_28.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/f/docs/MyCode/MyProjects/C++/2021/06.28/main.cpp > CMakeFiles/06_28.dir/main.cpp.i

CMakeFiles/06_28.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/06_28.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/f/docs/MyCode/MyProjects/C++/2021/06.28/main.cpp -o CMakeFiles/06_28.dir/main.cpp.s

# Object files for target 06_28
06_28_OBJECTS = \
"CMakeFiles/06_28.dir/main.cpp.o"

# External object files for target 06_28
06_28_EXTERNAL_OBJECTS =

06_28: CMakeFiles/06_28.dir/main.cpp.o
06_28: CMakeFiles/06_28.dir/build.make
06_28: CMakeFiles/06_28.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/f/docs/MyCode/MyProjects/C++/2021/06.28/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 06_28"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/06_28.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/06_28.dir/build: 06_28

.PHONY : CMakeFiles/06_28.dir/build

CMakeFiles/06_28.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/06_28.dir/cmake_clean.cmake
.PHONY : CMakeFiles/06_28.dir/clean

CMakeFiles/06_28.dir/depend:
	cd /mnt/f/docs/MyCode/MyProjects/C++/2021/06.28/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/f/docs/MyCode/MyProjects/C++/2021/06.28 /mnt/f/docs/MyCode/MyProjects/C++/2021/06.28 /mnt/f/docs/MyCode/MyProjects/C++/2021/06.28/cmake-build-debug /mnt/f/docs/MyCode/MyProjects/C++/2021/06.28/cmake-build-debug /mnt/f/docs/MyCode/MyProjects/C++/2021/06.28/cmake-build-debug/CMakeFiles/06_28.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/06_28.dir/depend


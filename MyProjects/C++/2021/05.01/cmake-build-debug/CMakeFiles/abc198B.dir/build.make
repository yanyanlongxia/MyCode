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
CMAKE_SOURCE_DIR = /mnt/f/docs/MyCode/MyProjects/C++/2021/05.01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/f/docs/MyCode/MyProjects/C++/2021/05.01/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/abc198B.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/abc198B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/abc198B.dir/flags.make

CMakeFiles/abc198B.dir/abc198B.cpp.o: CMakeFiles/abc198B.dir/flags.make
CMakeFiles/abc198B.dir/abc198B.cpp.o: ../abc198B.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/f/docs/MyCode/MyProjects/C++/2021/05.01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/abc198B.dir/abc198B.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/abc198B.dir/abc198B.cpp.o -c /mnt/f/docs/MyCode/MyProjects/C++/2021/05.01/abc198B.cpp

CMakeFiles/abc198B.dir/abc198B.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/abc198B.dir/abc198B.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/f/docs/MyCode/MyProjects/C++/2021/05.01/abc198B.cpp > CMakeFiles/abc198B.dir/abc198B.cpp.i

CMakeFiles/abc198B.dir/abc198B.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/abc198B.dir/abc198B.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/f/docs/MyCode/MyProjects/C++/2021/05.01/abc198B.cpp -o CMakeFiles/abc198B.dir/abc198B.cpp.s

# Object files for target abc198B
abc198B_OBJECTS = \
"CMakeFiles/abc198B.dir/abc198B.cpp.o"

# External object files for target abc198B
abc198B_EXTERNAL_OBJECTS =

abc198B: CMakeFiles/abc198B.dir/abc198B.cpp.o
abc198B: CMakeFiles/abc198B.dir/build.make
abc198B: CMakeFiles/abc198B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/f/docs/MyCode/MyProjects/C++/2021/05.01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable abc198B"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/abc198B.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/abc198B.dir/build: abc198B

.PHONY : CMakeFiles/abc198B.dir/build

CMakeFiles/abc198B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/abc198B.dir/cmake_clean.cmake
.PHONY : CMakeFiles/abc198B.dir/clean

CMakeFiles/abc198B.dir/depend:
	cd /mnt/f/docs/MyCode/MyProjects/C++/2021/05.01/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/f/docs/MyCode/MyProjects/C++/2021/05.01 /mnt/f/docs/MyCode/MyProjects/C++/2021/05.01 /mnt/f/docs/MyCode/MyProjects/C++/2021/05.01/cmake-build-debug /mnt/f/docs/MyCode/MyProjects/C++/2021/05.01/cmake-build-debug /mnt/f/docs/MyCode/MyProjects/C++/2021/05.01/cmake-build-debug/CMakeFiles/abc198B.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/abc198B.dir/depend


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
CMAKE_SOURCE_DIR = /mnt/f/docs/MyCode/MyProjects/C++/2021/01.17

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/f/docs/MyCode/MyProjects/C++/2021/01.17/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ZR1712.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ZR1712.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ZR1712.dir/flags.make

CMakeFiles/ZR1712.dir/ZR1712.cpp.o: CMakeFiles/ZR1712.dir/flags.make
CMakeFiles/ZR1712.dir/ZR1712.cpp.o: ../ZR1712.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/f/docs/MyCode/MyProjects/C++/2021/01.17/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ZR1712.dir/ZR1712.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ZR1712.dir/ZR1712.cpp.o -c /mnt/f/docs/MyCode/MyProjects/C++/2021/01.17/ZR1712.cpp

CMakeFiles/ZR1712.dir/ZR1712.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZR1712.dir/ZR1712.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/f/docs/MyCode/MyProjects/C++/2021/01.17/ZR1712.cpp > CMakeFiles/ZR1712.dir/ZR1712.cpp.i

CMakeFiles/ZR1712.dir/ZR1712.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZR1712.dir/ZR1712.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/f/docs/MyCode/MyProjects/C++/2021/01.17/ZR1712.cpp -o CMakeFiles/ZR1712.dir/ZR1712.cpp.s

# Object files for target ZR1712
ZR1712_OBJECTS = \
"CMakeFiles/ZR1712.dir/ZR1712.cpp.o"

# External object files for target ZR1712
ZR1712_EXTERNAL_OBJECTS =

ZR1712: CMakeFiles/ZR1712.dir/ZR1712.cpp.o
ZR1712: CMakeFiles/ZR1712.dir/build.make
ZR1712: CMakeFiles/ZR1712.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/f/docs/MyCode/MyProjects/C++/2021/01.17/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ZR1712"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ZR1712.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ZR1712.dir/build: ZR1712

.PHONY : CMakeFiles/ZR1712.dir/build

CMakeFiles/ZR1712.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ZR1712.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ZR1712.dir/clean

CMakeFiles/ZR1712.dir/depend:
	cd /mnt/f/docs/MyCode/MyProjects/C++/2021/01.17/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/f/docs/MyCode/MyProjects/C++/2021/01.17 /mnt/f/docs/MyCode/MyProjects/C++/2021/01.17 /mnt/f/docs/MyCode/MyProjects/C++/2021/01.17/cmake-build-debug /mnt/f/docs/MyCode/MyProjects/C++/2021/01.17/cmake-build-debug /mnt/f/docs/MyCode/MyProjects/C++/2021/01.17/cmake-build-debug/CMakeFiles/ZR1712.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ZR1712.dir/depend


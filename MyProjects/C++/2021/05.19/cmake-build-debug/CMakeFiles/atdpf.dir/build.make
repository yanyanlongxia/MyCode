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
CMAKE_SOURCE_DIR = /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/atdpf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/atdpf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/atdpf.dir/flags.make

CMakeFiles/atdpf.dir/atdpf.cpp.o: CMakeFiles/atdpf.dir/flags.make
CMakeFiles/atdpf.dir/atdpf.cpp.o: ../atdpf.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/atdpf.dir/atdpf.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/atdpf.dir/atdpf.cpp.o -c /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/atdpf.cpp

CMakeFiles/atdpf.dir/atdpf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/atdpf.dir/atdpf.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/atdpf.cpp > CMakeFiles/atdpf.dir/atdpf.cpp.i

CMakeFiles/atdpf.dir/atdpf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/atdpf.dir/atdpf.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/atdpf.cpp -o CMakeFiles/atdpf.dir/atdpf.cpp.s

# Object files for target atdpf
atdpf_OBJECTS = \
"CMakeFiles/atdpf.dir/atdpf.cpp.o"

# External object files for target atdpf
atdpf_EXTERNAL_OBJECTS =

atdpf: CMakeFiles/atdpf.dir/atdpf.cpp.o
atdpf: CMakeFiles/atdpf.dir/build.make
atdpf: CMakeFiles/atdpf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable atdpf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/atdpf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/atdpf.dir/build: atdpf

.PHONY : CMakeFiles/atdpf.dir/build

CMakeFiles/atdpf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/atdpf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/atdpf.dir/clean

CMakeFiles/atdpf.dir/depend:
	cd /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19 /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19 /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/cmake-build-debug /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/cmake-build-debug /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/cmake-build-debug/CMakeFiles/atdpf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/atdpf.dir/depend

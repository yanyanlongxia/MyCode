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
include CMakeFiles/tadpd.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tadpd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tadpd.dir/flags.make

CMakeFiles/tadpd.dir/tadpd.cpp.o: CMakeFiles/tadpd.dir/flags.make
CMakeFiles/tadpd.dir/tadpd.cpp.o: ../tadpd.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tadpd.dir/tadpd.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tadpd.dir/tadpd.cpp.o -c /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/tadpd.cpp

CMakeFiles/tadpd.dir/tadpd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tadpd.dir/tadpd.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/tadpd.cpp > CMakeFiles/tadpd.dir/tadpd.cpp.i

CMakeFiles/tadpd.dir/tadpd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tadpd.dir/tadpd.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/tadpd.cpp -o CMakeFiles/tadpd.dir/tadpd.cpp.s

# Object files for target tadpd
tadpd_OBJECTS = \
"CMakeFiles/tadpd.dir/tadpd.cpp.o"

# External object files for target tadpd
tadpd_EXTERNAL_OBJECTS =

tadpd: CMakeFiles/tadpd.dir/tadpd.cpp.o
tadpd: CMakeFiles/tadpd.dir/build.make
tadpd: CMakeFiles/tadpd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tadpd"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tadpd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tadpd.dir/build: tadpd

.PHONY : CMakeFiles/tadpd.dir/build

CMakeFiles/tadpd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tadpd.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tadpd.dir/clean

CMakeFiles/tadpd.dir/depend:
	cd /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19 /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19 /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/cmake-build-debug /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/cmake-build-debug /mnt/f/docs/MyCode/MyProjects/C++/2021/05.19/cmake-build-debug/CMakeFiles/tadpd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tadpd.dir/depend

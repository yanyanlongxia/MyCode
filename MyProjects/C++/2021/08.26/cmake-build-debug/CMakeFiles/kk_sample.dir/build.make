# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/noilinux/Apps/ideas/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/noilinux/Apps/ideas/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/noilinux/MyCode/MyProjects/C++/2021/08.26

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/noilinux/MyCode/MyProjects/C++/2021/08.26/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/kk_sample.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/kk_sample.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kk_sample.dir/flags.make

CMakeFiles/kk_sample.dir/kk_sample.cpp.o: CMakeFiles/kk_sample.dir/flags.make
CMakeFiles/kk_sample.dir/kk_sample.cpp.o: ../kk_sample.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/noilinux/MyCode/MyProjects/C++/2021/08.26/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kk_sample.dir/kk_sample.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kk_sample.dir/kk_sample.cpp.o -c /home/noilinux/MyCode/MyProjects/C++/2021/08.26/kk_sample.cpp

CMakeFiles/kk_sample.dir/kk_sample.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kk_sample.dir/kk_sample.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/noilinux/MyCode/MyProjects/C++/2021/08.26/kk_sample.cpp > CMakeFiles/kk_sample.dir/kk_sample.cpp.i

CMakeFiles/kk_sample.dir/kk_sample.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kk_sample.dir/kk_sample.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/noilinux/MyCode/MyProjects/C++/2021/08.26/kk_sample.cpp -o CMakeFiles/kk_sample.dir/kk_sample.cpp.s

# Object files for target kk_sample
kk_sample_OBJECTS = \
"CMakeFiles/kk_sample.dir/kk_sample.cpp.o"

# External object files for target kk_sample
kk_sample_EXTERNAL_OBJECTS =

kk_sample: CMakeFiles/kk_sample.dir/kk_sample.cpp.o
kk_sample: CMakeFiles/kk_sample.dir/build.make
kk_sample: CMakeFiles/kk_sample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/noilinux/MyCode/MyProjects/C++/2021/08.26/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable kk_sample"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kk_sample.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kk_sample.dir/build: kk_sample
.PHONY : CMakeFiles/kk_sample.dir/build

CMakeFiles/kk_sample.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/kk_sample.dir/cmake_clean.cmake
.PHONY : CMakeFiles/kk_sample.dir/clean

CMakeFiles/kk_sample.dir/depend:
	cd /home/noilinux/MyCode/MyProjects/C++/2021/08.26/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/noilinux/MyCode/MyProjects/C++/2021/08.26 /home/noilinux/MyCode/MyProjects/C++/2021/08.26 /home/noilinux/MyCode/MyProjects/C++/2021/08.26/cmake-build-debug /home/noilinux/MyCode/MyProjects/C++/2021/08.26/cmake-build-debug /home/noilinux/MyCode/MyProjects/C++/2021/08.26/cmake-build-debug/CMakeFiles/kk_sample.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/kk_sample.dir/depend

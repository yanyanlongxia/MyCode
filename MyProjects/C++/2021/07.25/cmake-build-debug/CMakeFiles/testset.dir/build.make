# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /home/noilinux/Apps/ideas/apps/CLion/ch-0/211.7628.27/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/noilinux/Apps/ideas/apps/CLion/ch-0/211.7628.27/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/noilinux/MyCode/MyProjects/C++/07.25

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/noilinux/MyCode/MyProjects/C++/07.25/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testset.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testset.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testset.dir/flags.make

CMakeFiles/testset.dir/testset.cpp.o: CMakeFiles/testset.dir/flags.make
CMakeFiles/testset.dir/testset.cpp.o: ../testset.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/noilinux/MyCode/MyProjects/C++/07.25/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testset.dir/testset.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testset.dir/testset.cpp.o -c /home/noilinux/MyCode/MyProjects/C++/07.25/testset.cpp

CMakeFiles/testset.dir/testset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testset.dir/testset.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/noilinux/MyCode/MyProjects/C++/07.25/testset.cpp > CMakeFiles/testset.dir/testset.cpp.i

CMakeFiles/testset.dir/testset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testset.dir/testset.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/noilinux/MyCode/MyProjects/C++/07.25/testset.cpp -o CMakeFiles/testset.dir/testset.cpp.s

# Object files for target testset
testset_OBJECTS = \
"CMakeFiles/testset.dir/testset.cpp.o"

# External object files for target testset
testset_EXTERNAL_OBJECTS =

testset: CMakeFiles/testset.dir/testset.cpp.o
testset: CMakeFiles/testset.dir/build.make
testset: CMakeFiles/testset.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/noilinux/MyCode/MyProjects/C++/07.25/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testset"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testset.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testset.dir/build: testset

.PHONY : CMakeFiles/testset.dir/build

CMakeFiles/testset.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testset.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testset.dir/clean

CMakeFiles/testset.dir/depend:
	cd /home/noilinux/MyCode/MyProjects/C++/07.25/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/noilinux/MyCode/MyProjects/C++/07.25 /home/noilinux/MyCode/MyProjects/C++/07.25 /home/noilinux/MyCode/MyProjects/C++/07.25/cmake-build-debug /home/noilinux/MyCode/MyProjects/C++/07.25/cmake-build-debug /home/noilinux/MyCode/MyProjects/C++/07.25/cmake-build-debug/CMakeFiles/testset.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testset.dir/depend

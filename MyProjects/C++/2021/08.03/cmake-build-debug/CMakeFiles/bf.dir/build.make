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
CMAKE_SOURCE_DIR = /home/noilinux/MyCode/MyProjects/C++/2021/08.03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/noilinux/MyCode/MyProjects/C++/2021/08.03/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bf.dir/flags.make

CMakeFiles/bf.dir/bf.cpp.o: CMakeFiles/bf.dir/flags.make
CMakeFiles/bf.dir/bf.cpp.o: ../bf.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/noilinux/MyCode/MyProjects/C++/2021/08.03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bf.dir/bf.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bf.dir/bf.cpp.o -c /home/noilinux/MyCode/MyProjects/C++/2021/08.03/bf.cpp

CMakeFiles/bf.dir/bf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bf.dir/bf.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/noilinux/MyCode/MyProjects/C++/2021/08.03/bf.cpp > CMakeFiles/bf.dir/bf.cpp.i

CMakeFiles/bf.dir/bf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bf.dir/bf.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/noilinux/MyCode/MyProjects/C++/2021/08.03/bf.cpp -o CMakeFiles/bf.dir/bf.cpp.s

# Object files for target bf
bf_OBJECTS = \
"CMakeFiles/bf.dir/bf.cpp.o"

# External object files for target bf
bf_EXTERNAL_OBJECTS =

bf: CMakeFiles/bf.dir/bf.cpp.o
bf: CMakeFiles/bf.dir/build.make
bf: CMakeFiles/bf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/noilinux/MyCode/MyProjects/C++/2021/08.03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bf.dir/build: bf

.PHONY : CMakeFiles/bf.dir/build

CMakeFiles/bf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bf.dir/clean

CMakeFiles/bf.dir/depend:
	cd /home/noilinux/MyCode/MyProjects/C++/2021/08.03/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/noilinux/MyCode/MyProjects/C++/2021/08.03 /home/noilinux/MyCode/MyProjects/C++/2021/08.03 /home/noilinux/MyCode/MyProjects/C++/2021/08.03/cmake-build-debug /home/noilinux/MyCode/MyProjects/C++/2021/08.03/cmake-build-debug /home/noilinux/MyCode/MyProjects/C++/2021/08.03/cmake-build-debug/CMakeFiles/bf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bf.dir/depend

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
CMAKE_SOURCE_DIR = /home/noilinux/MyCode/MyProjects/C++/2021/10.21

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/noilinux/MyCode/MyProjects/C++/2021/10.21/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/travel.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/travel.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/travel.dir/flags.make

CMakeFiles/travel.dir/travel.cpp.o: CMakeFiles/travel.dir/flags.make
CMakeFiles/travel.dir/travel.cpp.o: ../travel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/noilinux/MyCode/MyProjects/C++/2021/10.21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/travel.dir/travel.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/travel.dir/travel.cpp.o -c /home/noilinux/MyCode/MyProjects/C++/2021/10.21/travel.cpp

CMakeFiles/travel.dir/travel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/travel.dir/travel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/noilinux/MyCode/MyProjects/C++/2021/10.21/travel.cpp > CMakeFiles/travel.dir/travel.cpp.i

CMakeFiles/travel.dir/travel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/travel.dir/travel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/noilinux/MyCode/MyProjects/C++/2021/10.21/travel.cpp -o CMakeFiles/travel.dir/travel.cpp.s

# Object files for target travel
travel_OBJECTS = \
"CMakeFiles/travel.dir/travel.cpp.o"

# External object files for target travel
travel_EXTERNAL_OBJECTS =

travel: CMakeFiles/travel.dir/travel.cpp.o
travel: CMakeFiles/travel.dir/build.make
travel: CMakeFiles/travel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/noilinux/MyCode/MyProjects/C++/2021/10.21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable travel"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/travel.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/travel.dir/build: travel
.PHONY : CMakeFiles/travel.dir/build

CMakeFiles/travel.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/travel.dir/cmake_clean.cmake
.PHONY : CMakeFiles/travel.dir/clean

CMakeFiles/travel.dir/depend:
	cd /home/noilinux/MyCode/MyProjects/C++/2021/10.21/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/noilinux/MyCode/MyProjects/C++/2021/10.21 /home/noilinux/MyCode/MyProjects/C++/2021/10.21 /home/noilinux/MyCode/MyProjects/C++/2021/10.21/cmake-build-debug /home/noilinux/MyCode/MyProjects/C++/2021/10.21/cmake-build-debug /home/noilinux/MyCode/MyProjects/C++/2021/10.21/cmake-build-debug/CMakeFiles/travel.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/travel.dir/depend


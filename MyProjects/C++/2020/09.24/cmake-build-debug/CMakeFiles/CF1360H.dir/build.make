# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /opt/cmake-3.17.5/bin/cmake

# The command to remove a file.
RM = /opt/cmake-3.17.5/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CF1360H.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CF1360H.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CF1360H.dir/flags.make

CMakeFiles/CF1360H.dir/CF1360H.cpp.o: CMakeFiles/CF1360H.dir/flags.make
CMakeFiles/CF1360H.dir/CF1360H.cpp.o: ../CF1360H.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CF1360H.dir/CF1360H.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CF1360H.dir/CF1360H.cpp.o -c /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/CF1360H.cpp

CMakeFiles/CF1360H.dir/CF1360H.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CF1360H.dir/CF1360H.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/CF1360H.cpp > CMakeFiles/CF1360H.dir/CF1360H.cpp.i

CMakeFiles/CF1360H.dir/CF1360H.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CF1360H.dir/CF1360H.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/CF1360H.cpp -o CMakeFiles/CF1360H.dir/CF1360H.cpp.s

# Object files for target CF1360H
CF1360H_OBJECTS = \
"CMakeFiles/CF1360H.dir/CF1360H.cpp.o"

# External object files for target CF1360H
CF1360H_EXTERNAL_OBJECTS =

CF1360H: CMakeFiles/CF1360H.dir/CF1360H.cpp.o
CF1360H: CMakeFiles/CF1360H.dir/build.make
CF1360H: CMakeFiles/CF1360H.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CF1360H"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CF1360H.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CF1360H.dir/build: CF1360H

.PHONY : CMakeFiles/CF1360H.dir/build

CMakeFiles/CF1360H.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CF1360H.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CF1360H.dir/clean

CMakeFiles/CF1360H.dir/depend:
	cd /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/cmake-build-debug/CMakeFiles/CF1360H.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CF1360H.dir/depend


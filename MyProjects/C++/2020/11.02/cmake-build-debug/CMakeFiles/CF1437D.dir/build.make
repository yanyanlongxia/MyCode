# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /opt/cmake-3.18.0/bin/cmake

# The command to remove a file.
RM = /opt/cmake-3.18.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.02/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CF1437D.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CF1437D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CF1437D.dir/flags.make

CMakeFiles/CF1437D.dir/CF1437D.cpp.o: CMakeFiles/CF1437D.dir/flags.make
CMakeFiles/CF1437D.dir/CF1437D.cpp.o: ../CF1437D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CF1437D.dir/CF1437D.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CF1437D.dir/CF1437D.cpp.o -c /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.02/CF1437D.cpp

CMakeFiles/CF1437D.dir/CF1437D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CF1437D.dir/CF1437D.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.02/CF1437D.cpp > CMakeFiles/CF1437D.dir/CF1437D.cpp.i

CMakeFiles/CF1437D.dir/CF1437D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CF1437D.dir/CF1437D.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.02/CF1437D.cpp -o CMakeFiles/CF1437D.dir/CF1437D.cpp.s

# Object files for target CF1437D
CF1437D_OBJECTS = \
"CMakeFiles/CF1437D.dir/CF1437D.cpp.o"

# External object files for target CF1437D
CF1437D_EXTERNAL_OBJECTS =

CF1437D: CMakeFiles/CF1437D.dir/CF1437D.cpp.o
CF1437D: CMakeFiles/CF1437D.dir/build.make
CF1437D: CMakeFiles/CF1437D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CF1437D"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CF1437D.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CF1437D.dir/build: CF1437D

.PHONY : CMakeFiles/CF1437D.dir/build

CMakeFiles/CF1437D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CF1437D.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CF1437D.dir/clean

CMakeFiles/CF1437D.dir/depend:
	cd /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.02/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.02 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.02 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.02/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.02/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.02/cmake-build-debug/CMakeFiles/CF1437D.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CF1437D.dir/depend


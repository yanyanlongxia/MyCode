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
include CMakeFiles/CF1426D.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CF1426D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CF1426D.dir/flags.make

CMakeFiles/CF1426D.dir/CF1426D.cpp.o: CMakeFiles/CF1426D.dir/flags.make
CMakeFiles/CF1426D.dir/CF1426D.cpp.o: ../CF1426D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CF1426D.dir/CF1426D.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CF1426D.dir/CF1426D.cpp.o -c /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/CF1426D.cpp

CMakeFiles/CF1426D.dir/CF1426D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CF1426D.dir/CF1426D.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/CF1426D.cpp > CMakeFiles/CF1426D.dir/CF1426D.cpp.i

CMakeFiles/CF1426D.dir/CF1426D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CF1426D.dir/CF1426D.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/CF1426D.cpp -o CMakeFiles/CF1426D.dir/CF1426D.cpp.s

# Object files for target CF1426D
CF1426D_OBJECTS = \
"CMakeFiles/CF1426D.dir/CF1426D.cpp.o"

# External object files for target CF1426D
CF1426D_EXTERNAL_OBJECTS =

CF1426D: CMakeFiles/CF1426D.dir/CF1426D.cpp.o
CF1426D: CMakeFiles/CF1426D.dir/build.make
CF1426D: CMakeFiles/CF1426D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CF1426D"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CF1426D.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CF1426D.dir/build: CF1426D

.PHONY : CMakeFiles/CF1426D.dir/build

CMakeFiles/CF1426D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CF1426D.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CF1426D.dir/clean

CMakeFiles/CF1426D.dir/depend:
	cd /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.24/cmake-build-debug/CMakeFiles/CF1426D.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CF1426D.dir/depend


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
CMAKE_SOURCE_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CF547B.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CF547B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CF547B.dir/flags.make

CMakeFiles/CF547B.dir/CF547B.cpp.o: CMakeFiles/CF547B.dir/flags.make
CMakeFiles/CF547B.dir/CF547B.cpp.o: ../CF547B.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CF547B.dir/CF547B.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CF547B.dir/CF547B.cpp.o -c /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/CF547B.cpp

CMakeFiles/CF547B.dir/CF547B.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CF547B.dir/CF547B.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/CF547B.cpp > CMakeFiles/CF547B.dir/CF547B.cpp.i

CMakeFiles/CF547B.dir/CF547B.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CF547B.dir/CF547B.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/CF547B.cpp -o CMakeFiles/CF547B.dir/CF547B.cpp.s

# Object files for target CF547B
CF547B_OBJECTS = \
"CMakeFiles/CF547B.dir/CF547B.cpp.o"

# External object files for target CF547B
CF547B_EXTERNAL_OBJECTS =

CF547B: CMakeFiles/CF547B.dir/CF547B.cpp.o
CF547B: CMakeFiles/CF547B.dir/build.make
CF547B: CMakeFiles/CF547B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CF547B"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CF547B.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CF547B.dir/build: CF547B

.PHONY : CMakeFiles/CF547B.dir/build

CMakeFiles/CF547B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CF547B.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CF547B.dir/clean

CMakeFiles/CF547B.dir/depend:
	cd /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/cmake-build-debug/CMakeFiles/CF547B.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CF547B.dir/depend


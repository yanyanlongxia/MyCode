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
CMAKE_SOURCE_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/P4159.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/P4159.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/P4159.dir/flags.make

CMakeFiles/P4159.dir/P4159.cpp.o: CMakeFiles/P4159.dir/flags.make
CMakeFiles/P4159.dir/P4159.cpp.o: ../P4159.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/P4159.dir/P4159.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/P4159.dir/P4159.cpp.o -c /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/P4159.cpp

CMakeFiles/P4159.dir/P4159.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/P4159.dir/P4159.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/P4159.cpp > CMakeFiles/P4159.dir/P4159.cpp.i

CMakeFiles/P4159.dir/P4159.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/P4159.dir/P4159.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/P4159.cpp -o CMakeFiles/P4159.dir/P4159.cpp.s

# Object files for target P4159
P4159_OBJECTS = \
"CMakeFiles/P4159.dir/P4159.cpp.o"

# External object files for target P4159
P4159_EXTERNAL_OBJECTS =

P4159: CMakeFiles/P4159.dir/P4159.cpp.o
P4159: CMakeFiles/P4159.dir/build.make
P4159: CMakeFiles/P4159.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable P4159"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/P4159.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/P4159.dir/build: P4159

.PHONY : CMakeFiles/P4159.dir/build

CMakeFiles/P4159.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/P4159.dir/cmake_clean.cmake
.PHONY : CMakeFiles/P4159.dir/clean

CMakeFiles/P4159.dir/depend:
	cd /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/cmake-build-debug/CMakeFiles/P4159.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/P4159.dir/depend


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
CMAKE_SOURCE_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.03/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ARC104B.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ARC104B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ARC104B.dir/flags.make

CMakeFiles/ARC104B.dir/ARC104B.cpp.o: CMakeFiles/ARC104B.dir/flags.make
CMakeFiles/ARC104B.dir/ARC104B.cpp.o: ../ARC104B.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ARC104B.dir/ARC104B.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ARC104B.dir/ARC104B.cpp.o -c /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.03/ARC104B.cpp

CMakeFiles/ARC104B.dir/ARC104B.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ARC104B.dir/ARC104B.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.03/ARC104B.cpp > CMakeFiles/ARC104B.dir/ARC104B.cpp.i

CMakeFiles/ARC104B.dir/ARC104B.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ARC104B.dir/ARC104B.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.03/ARC104B.cpp -o CMakeFiles/ARC104B.dir/ARC104B.cpp.s

# Object files for target ARC104B
ARC104B_OBJECTS = \
"CMakeFiles/ARC104B.dir/ARC104B.cpp.o"

# External object files for target ARC104B
ARC104B_EXTERNAL_OBJECTS =

ARC104B: CMakeFiles/ARC104B.dir/ARC104B.cpp.o
ARC104B: CMakeFiles/ARC104B.dir/build.make
ARC104B: CMakeFiles/ARC104B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ARC104B"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ARC104B.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ARC104B.dir/build: ARC104B

.PHONY : CMakeFiles/ARC104B.dir/build

CMakeFiles/ARC104B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ARC104B.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ARC104B.dir/clean

CMakeFiles/ARC104B.dir/depend:
	cd /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.03/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.03 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.03 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.03/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.03/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.03/cmake-build-debug/CMakeFiles/ARC104B.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ARC104B.dir/depend


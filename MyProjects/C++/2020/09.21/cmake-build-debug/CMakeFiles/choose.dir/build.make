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
include CMakeFiles/choose.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/choose.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/choose.dir/flags.make

CMakeFiles/choose.dir/choose.cpp.o: CMakeFiles/choose.dir/flags.make
CMakeFiles/choose.dir/choose.cpp.o: ../choose.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/choose.dir/choose.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/choose.dir/choose.cpp.o -c /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/choose.cpp

CMakeFiles/choose.dir/choose.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/choose.dir/choose.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/choose.cpp > CMakeFiles/choose.dir/choose.cpp.i

CMakeFiles/choose.dir/choose.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/choose.dir/choose.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/choose.cpp -o CMakeFiles/choose.dir/choose.cpp.s

# Object files for target choose
choose_OBJECTS = \
"CMakeFiles/choose.dir/choose.cpp.o"

# External object files for target choose
choose_EXTERNAL_OBJECTS =

choose: CMakeFiles/choose.dir/choose.cpp.o
choose: CMakeFiles/choose.dir/build.make
choose: CMakeFiles/choose.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable choose"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/choose.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/choose.dir/build: choose

.PHONY : CMakeFiles/choose.dir/build

CMakeFiles/choose.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/choose.dir/cmake_clean.cmake
.PHONY : CMakeFiles/choose.dir/clean

CMakeFiles/choose.dir/depend:
	cd /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.21/cmake-build-debug/CMakeFiles/choose.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/choose.dir/depend


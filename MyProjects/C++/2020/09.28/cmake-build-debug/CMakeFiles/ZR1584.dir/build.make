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
include CMakeFiles/ZR1584.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ZR1584.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ZR1584.dir/flags.make

CMakeFiles/ZR1584.dir/ZR1584.cpp.o: CMakeFiles/ZR1584.dir/flags.make
CMakeFiles/ZR1584.dir/ZR1584.cpp.o: ../ZR1584.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ZR1584.dir/ZR1584.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ZR1584.dir/ZR1584.cpp.o -c /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/ZR1584.cpp

CMakeFiles/ZR1584.dir/ZR1584.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZR1584.dir/ZR1584.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/ZR1584.cpp > CMakeFiles/ZR1584.dir/ZR1584.cpp.i

CMakeFiles/ZR1584.dir/ZR1584.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZR1584.dir/ZR1584.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/ZR1584.cpp -o CMakeFiles/ZR1584.dir/ZR1584.cpp.s

# Object files for target ZR1584
ZR1584_OBJECTS = \
"CMakeFiles/ZR1584.dir/ZR1584.cpp.o"

# External object files for target ZR1584
ZR1584_EXTERNAL_OBJECTS =

ZR1584: CMakeFiles/ZR1584.dir/ZR1584.cpp.o
ZR1584: CMakeFiles/ZR1584.dir/build.make
ZR1584: CMakeFiles/ZR1584.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ZR1584"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ZR1584.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ZR1584.dir/build: ZR1584

.PHONY : CMakeFiles/ZR1584.dir/build

CMakeFiles/ZR1584.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ZR1584.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ZR1584.dir/clean

CMakeFiles/ZR1584.dir/depend:
	cd /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/09.28/cmake-build-debug/CMakeFiles/ZR1584.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ZR1584.dir/depend


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
CMAKE_SOURCE_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/marathon.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/marathon.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/marathon.dir/flags.make

CMakeFiles/marathon.dir/marathon.cpp.o: CMakeFiles/marathon.dir/flags.make
CMakeFiles/marathon.dir/marathon.cpp.o: ../marathon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/marathon.dir/marathon.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/marathon.dir/marathon.cpp.o -c /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/marathon.cpp

CMakeFiles/marathon.dir/marathon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/marathon.dir/marathon.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/marathon.cpp > CMakeFiles/marathon.dir/marathon.cpp.i

CMakeFiles/marathon.dir/marathon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/marathon.dir/marathon.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/marathon.cpp -o CMakeFiles/marathon.dir/marathon.cpp.s

# Object files for target marathon
marathon_OBJECTS = \
"CMakeFiles/marathon.dir/marathon.cpp.o"

# External object files for target marathon
marathon_EXTERNAL_OBJECTS =

marathon: CMakeFiles/marathon.dir/marathon.cpp.o
marathon: CMakeFiles/marathon.dir/build.make
marathon: CMakeFiles/marathon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable marathon"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/marathon.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/marathon.dir/build: marathon

.PHONY : CMakeFiles/marathon.dir/build

CMakeFiles/marathon.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/marathon.dir/cmake_clean.cmake
.PHONY : CMakeFiles/marathon.dir/clean

CMakeFiles/marathon.dir/depend:
	cd /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/cmake-build-debug/CMakeFiles/marathon.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/marathon.dir/depend


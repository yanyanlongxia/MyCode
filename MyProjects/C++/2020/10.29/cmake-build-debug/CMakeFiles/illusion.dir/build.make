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
CMAKE_SOURCE_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.29

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.29/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/illusion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/illusion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/illusion.dir/flags.make

CMakeFiles/illusion.dir/illusion.cpp.o: CMakeFiles/illusion.dir/flags.make
CMakeFiles/illusion.dir/illusion.cpp.o: ../illusion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.29/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/illusion.dir/illusion.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/illusion.dir/illusion.cpp.o -c /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.29/illusion.cpp

CMakeFiles/illusion.dir/illusion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/illusion.dir/illusion.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.29/illusion.cpp > CMakeFiles/illusion.dir/illusion.cpp.i

CMakeFiles/illusion.dir/illusion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/illusion.dir/illusion.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.29/illusion.cpp -o CMakeFiles/illusion.dir/illusion.cpp.s

# Object files for target illusion
illusion_OBJECTS = \
"CMakeFiles/illusion.dir/illusion.cpp.o"

# External object files for target illusion
illusion_EXTERNAL_OBJECTS =

illusion: CMakeFiles/illusion.dir/illusion.cpp.o
illusion: CMakeFiles/illusion.dir/build.make
illusion: CMakeFiles/illusion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.29/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable illusion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/illusion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/illusion.dir/build: illusion

.PHONY : CMakeFiles/illusion.dir/build

CMakeFiles/illusion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/illusion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/illusion.dir/clean

CMakeFiles/illusion.dir/depend:
	cd /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.29/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.29 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.29 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.29/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.29/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.29/cmake-build-debug/CMakeFiles/illusion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/illusion.dir/depend


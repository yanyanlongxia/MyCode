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
CMAKE_SOURCE_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/police.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/police.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/police.dir/flags.make

CMakeFiles/police.dir/police.cpp.o: CMakeFiles/police.dir/flags.make
CMakeFiles/police.dir/police.cpp.o: ../police.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/police.dir/police.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/police.dir/police.cpp.o -c /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/police.cpp

CMakeFiles/police.dir/police.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/police.dir/police.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/police.cpp > CMakeFiles/police.dir/police.cpp.i

CMakeFiles/police.dir/police.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/police.dir/police.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/police.cpp -o CMakeFiles/police.dir/police.cpp.s

# Object files for target police
police_OBJECTS = \
"CMakeFiles/police.dir/police.cpp.o"

# External object files for target police
police_EXTERNAL_OBJECTS =

police: CMakeFiles/police.dir/police.cpp.o
police: CMakeFiles/police.dir/build.make
police: CMakeFiles/police.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable police"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/police.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/police.dir/build: police

.PHONY : CMakeFiles/police.dir/build

CMakeFiles/police.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/police.dir/cmake_clean.cmake
.PHONY : CMakeFiles/police.dir/clean

CMakeFiles/police.dir/depend:
	cd /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/cmake-build-debug/CMakeFiles/police.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/police.dir/depend


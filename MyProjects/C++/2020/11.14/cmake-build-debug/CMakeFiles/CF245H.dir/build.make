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
CMAKE_SOURCE_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.14

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.14/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CF245H.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CF245H.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CF245H.dir/flags.make

CMakeFiles/CF245H.dir/CF245H.cpp.o: CMakeFiles/CF245H.dir/flags.make
CMakeFiles/CF245H.dir/CF245H.cpp.o: ../CF245H.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.14/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CF245H.dir/CF245H.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CF245H.dir/CF245H.cpp.o -c /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.14/CF245H.cpp

CMakeFiles/CF245H.dir/CF245H.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CF245H.dir/CF245H.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.14/CF245H.cpp > CMakeFiles/CF245H.dir/CF245H.cpp.i

CMakeFiles/CF245H.dir/CF245H.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CF245H.dir/CF245H.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.14/CF245H.cpp -o CMakeFiles/CF245H.dir/CF245H.cpp.s

# Object files for target CF245H
CF245H_OBJECTS = \
"CMakeFiles/CF245H.dir/CF245H.cpp.o"

# External object files for target CF245H
CF245H_EXTERNAL_OBJECTS =

CF245H: CMakeFiles/CF245H.dir/CF245H.cpp.o
CF245H: CMakeFiles/CF245H.dir/build.make
CF245H: CMakeFiles/CF245H.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.14/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CF245H"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CF245H.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CF245H.dir/build: CF245H

.PHONY : CMakeFiles/CF245H.dir/build

CMakeFiles/CF245H.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CF245H.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CF245H.dir/clean

CMakeFiles/CF245H.dir/depend:
	cd /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.14/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.14 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.14 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.14/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.14/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/11.14/cmake-build-debug/CMakeFiles/CF245H.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CF245H.dir/depend


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
include CMakeFiles/nocross.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/nocross.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nocross.dir/flags.make

CMakeFiles/nocross.dir/nocross.cpp.o: CMakeFiles/nocross.dir/flags.make
CMakeFiles/nocross.dir/nocross.cpp.o: ../nocross.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nocross.dir/nocross.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nocross.dir/nocross.cpp.o -c /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/nocross.cpp

CMakeFiles/nocross.dir/nocross.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nocross.dir/nocross.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/nocross.cpp > CMakeFiles/nocross.dir/nocross.cpp.i

CMakeFiles/nocross.dir/nocross.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nocross.dir/nocross.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/nocross.cpp -o CMakeFiles/nocross.dir/nocross.cpp.s

# Object files for target nocross
nocross_OBJECTS = \
"CMakeFiles/nocross.dir/nocross.cpp.o"

# External object files for target nocross
nocross_EXTERNAL_OBJECTS =

nocross: CMakeFiles/nocross.dir/nocross.cpp.o
nocross: CMakeFiles/nocross.dir/build.make
nocross: CMakeFiles/nocross.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable nocross"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nocross.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nocross.dir/build: nocross

.PHONY : CMakeFiles/nocross.dir/build

CMakeFiles/nocross.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nocross.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nocross.dir/clean

CMakeFiles/nocross.dir/depend:
	cd /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.06/cmake-build-debug/CMakeFiles/nocross.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nocross.dir/depend


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
include CMakeFiles/noname.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/noname.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/noname.dir/flags.make

CMakeFiles/noname.dir/noname.cpp.o: CMakeFiles/noname.dir/flags.make
CMakeFiles/noname.dir/noname.cpp.o: ../noname.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/noname.dir/noname.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/noname.dir/noname.cpp.o -c /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/noname.cpp

CMakeFiles/noname.dir/noname.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/noname.dir/noname.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/noname.cpp > CMakeFiles/noname.dir/noname.cpp.i

CMakeFiles/noname.dir/noname.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/noname.dir/noname.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/noname.cpp -o CMakeFiles/noname.dir/noname.cpp.s

# Object files for target noname
noname_OBJECTS = \
"CMakeFiles/noname.dir/noname.cpp.o"

# External object files for target noname
noname_EXTERNAL_OBJECTS =

noname: CMakeFiles/noname.dir/noname.cpp.o
noname: CMakeFiles/noname.dir/build.make
noname: CMakeFiles/noname.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable noname"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/noname.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/noname.dir/build: noname

.PHONY : CMakeFiles/noname.dir/build

CMakeFiles/noname.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/noname.dir/cmake_clean.cmake
.PHONY : CMakeFiles/noname.dir/clean

CMakeFiles/noname.dir/depend:
	cd /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23 /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/cmake-build-debug /mnt/d/docs/GitHub/MyCode/MyProjects/C++/10.23/cmake-build-debug/CMakeFiles/noname.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/noname.dir/depend


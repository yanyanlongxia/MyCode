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
CMAKE_SOURCE_DIR = "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/P6282.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/P6282.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/P6282.dir/flags.make

CMakeFiles/P6282.dir/P6282.cpp.o: CMakeFiles/P6282.dir/flags.make
CMakeFiles/P6282.dir/P6282.cpp.o: ../P6282.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/P6282.dir/P6282.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/P6282.dir/P6282.cpp.o -c "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/P6282.cpp"

CMakeFiles/P6282.dir/P6282.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/P6282.dir/P6282.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/P6282.cpp" > CMakeFiles/P6282.dir/P6282.cpp.i

CMakeFiles/P6282.dir/P6282.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/P6282.dir/P6282.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/P6282.cpp" -o CMakeFiles/P6282.dir/P6282.cpp.s

# Object files for target P6282
P6282_OBJECTS = \
"CMakeFiles/P6282.dir/P6282.cpp.o"

# External object files for target P6282
P6282_EXTERNAL_OBJECTS =

P6282: CMakeFiles/P6282.dir/P6282.cpp.o
P6282: CMakeFiles/P6282.dir/build.make
P6282: CMakeFiles/P6282.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable P6282"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/P6282.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/P6282.dir/build: P6282

.PHONY : CMakeFiles/P6282.dir/build

CMakeFiles/P6282.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/P6282.dir/cmake_clean.cmake
.PHONY : CMakeFiles/P6282.dir/clean

CMakeFiles/P6282.dir/depend:
	cd "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18" "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18" "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/cmake-build-debug" "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/cmake-build-debug" "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/cmake-build-debug/CMakeFiles/P6282.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/P6282.dir/depend


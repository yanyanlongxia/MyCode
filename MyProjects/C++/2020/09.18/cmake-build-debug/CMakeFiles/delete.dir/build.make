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
include CMakeFiles/delete.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/delete.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/delete.dir/flags.make

CMakeFiles/delete.dir/delete.cpp.o: CMakeFiles/delete.dir/flags.make
CMakeFiles/delete.dir/delete.cpp.o: ../delete.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/delete.dir/delete.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/delete.dir/delete.cpp.o -c "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/delete.cpp"

CMakeFiles/delete.dir/delete.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/delete.dir/delete.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/delete.cpp" > CMakeFiles/delete.dir/delete.cpp.i

CMakeFiles/delete.dir/delete.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/delete.dir/delete.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/delete.cpp" -o CMakeFiles/delete.dir/delete.cpp.s

# Object files for target delete
delete_OBJECTS = \
"CMakeFiles/delete.dir/delete.cpp.o"

# External object files for target delete
delete_EXTERNAL_OBJECTS =

delete: CMakeFiles/delete.dir/delete.cpp.o
delete: CMakeFiles/delete.dir/build.make
delete: CMakeFiles/delete.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable delete"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/delete.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/delete.dir/build: delete

.PHONY : CMakeFiles/delete.dir/build

CMakeFiles/delete.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/delete.dir/cmake_clean.cmake
.PHONY : CMakeFiles/delete.dir/clean

CMakeFiles/delete.dir/depend:
	cd "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18" "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18" "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/cmake-build-debug" "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/cmake-build-debug" "/mnt/c/Users/DELL/Documents/GitHub/MyCode/My Projects/C++/09.18/cmake-build-debug/CMakeFiles/delete.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/delete.dir/depend


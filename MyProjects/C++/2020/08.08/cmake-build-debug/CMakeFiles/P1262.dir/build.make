# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\admin\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.6397.106\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\admin\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.6397.106\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\admin\Documents\MyCode\MyCode\My Projects\C++\08.08"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\admin\Documents\MyCode\MyCode\My Projects\C++\08.08\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/P1262.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/P1262.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/P1262.dir/flags.make

CMakeFiles/P1262.dir/P1262.cpp.obj: CMakeFiles/P1262.dir/flags.make
CMakeFiles/P1262.dir/P1262.cpp.obj: ../P1262.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\Documents\MyCode\MyCode\My Projects\C++\08.08\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/P1262.dir/P1262.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\P1262.dir\P1262.cpp.obj -c "C:\Users\admin\Documents\MyCode\MyCode\My Projects\C++\08.08\P1262.cpp"

CMakeFiles/P1262.dir/P1262.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/P1262.dir/P1262.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\Documents\MyCode\MyCode\My Projects\C++\08.08\P1262.cpp" > CMakeFiles\P1262.dir\P1262.cpp.i

CMakeFiles/P1262.dir/P1262.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/P1262.dir/P1262.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\Documents\MyCode\MyCode\My Projects\C++\08.08\P1262.cpp" -o CMakeFiles\P1262.dir\P1262.cpp.s

# Object files for target P1262
P1262_OBJECTS = \
"CMakeFiles/P1262.dir/P1262.cpp.obj"

# External object files for target P1262
P1262_EXTERNAL_OBJECTS =

P1262.exe: CMakeFiles/P1262.dir/P1262.cpp.obj
P1262.exe: CMakeFiles/P1262.dir/build.make
P1262.exe: CMakeFiles/P1262.dir/linklibs.rsp
P1262.exe: CMakeFiles/P1262.dir/objects1.rsp
P1262.exe: CMakeFiles/P1262.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\Documents\MyCode\MyCode\My Projects\C++\08.08\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable P1262.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\P1262.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/P1262.dir/build: P1262.exe

.PHONY : CMakeFiles/P1262.dir/build

CMakeFiles/P1262.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\P1262.dir\cmake_clean.cmake
.PHONY : CMakeFiles/P1262.dir/clean

CMakeFiles/P1262.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\Documents\MyCode\MyCode\My Projects\C++\08.08" "C:\Users\admin\Documents\MyCode\MyCode\My Projects\C++\08.08" "C:\Users\admin\Documents\MyCode\MyCode\My Projects\C++\08.08\cmake-build-debug" "C:\Users\admin\Documents\MyCode\MyCode\My Projects\C++\08.08\cmake-build-debug" "C:\Users\admin\Documents\MyCode\MyCode\My Projects\C++\08.08\cmake-build-debug\CMakeFiles\P1262.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/P1262.dir/depend


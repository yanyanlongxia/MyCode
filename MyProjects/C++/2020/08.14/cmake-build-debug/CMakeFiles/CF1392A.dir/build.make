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
CMAKE_COMMAND = D:\Jetbrains\apps\CLion\ch-0\202.6397.106\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\Jetbrains\apps\CLion\ch-0\202.6397.106\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CF1392A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CF1392A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CF1392A.dir/flags.make

CMakeFiles/CF1392A.dir/CF1392A.cpp.obj: CMakeFiles/CF1392A.dir/flags.make
CMakeFiles/CF1392A.dir/CF1392A.cpp.obj: ../CF1392A.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CF1392A.dir/CF1392A.cpp.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CF1392A.dir\CF1392A.cpp.obj -c "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\CF1392A.cpp"

CMakeFiles/CF1392A.dir/CF1392A.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CF1392A.dir/CF1392A.cpp.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\CF1392A.cpp" > CMakeFiles\CF1392A.dir\CF1392A.cpp.i

CMakeFiles/CF1392A.dir/CF1392A.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CF1392A.dir/CF1392A.cpp.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\CF1392A.cpp" -o CMakeFiles\CF1392A.dir\CF1392A.cpp.s

# Object files for target CF1392A
CF1392A_OBJECTS = \
"CMakeFiles/CF1392A.dir/CF1392A.cpp.obj"

# External object files for target CF1392A
CF1392A_EXTERNAL_OBJECTS =

CF1392A.exe: CMakeFiles/CF1392A.dir/CF1392A.cpp.obj
CF1392A.exe: CMakeFiles/CF1392A.dir/build.make
CF1392A.exe: CMakeFiles/CF1392A.dir/linklibs.rsp
CF1392A.exe: CMakeFiles/CF1392A.dir/objects1.rsp
CF1392A.exe: CMakeFiles/CF1392A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CF1392A.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CF1392A.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CF1392A.dir/build: CF1392A.exe

.PHONY : CMakeFiles/CF1392A.dir/build

CMakeFiles/CF1392A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CF1392A.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CF1392A.dir/clean

CMakeFiles/CF1392A.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug\CMakeFiles\CF1392A.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CF1392A.dir/depend


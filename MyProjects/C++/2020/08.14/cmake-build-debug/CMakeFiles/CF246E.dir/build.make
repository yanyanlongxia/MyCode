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
include CMakeFiles/CF246E.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CF246E.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CF246E.dir/flags.make

CMakeFiles/CF246E.dir/CF246E.cpp.obj: CMakeFiles/CF246E.dir/flags.make
CMakeFiles/CF246E.dir/CF246E.cpp.obj: ../CF246E.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CF246E.dir/CF246E.cpp.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CF246E.dir\CF246E.cpp.obj -c "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\CF246E.cpp"

CMakeFiles/CF246E.dir/CF246E.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CF246E.dir/CF246E.cpp.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\CF246E.cpp" > CMakeFiles\CF246E.dir\CF246E.cpp.i

CMakeFiles/CF246E.dir/CF246E.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CF246E.dir/CF246E.cpp.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\CF246E.cpp" -o CMakeFiles\CF246E.dir\CF246E.cpp.s

# Object files for target CF246E
CF246E_OBJECTS = \
"CMakeFiles/CF246E.dir/CF246E.cpp.obj"

# External object files for target CF246E
CF246E_EXTERNAL_OBJECTS =

CF246E.exe: CMakeFiles/CF246E.dir/CF246E.cpp.obj
CF246E.exe: CMakeFiles/CF246E.dir/build.make
CF246E.exe: CMakeFiles/CF246E.dir/linklibs.rsp
CF246E.exe: CMakeFiles/CF246E.dir/objects1.rsp
CF246E.exe: CMakeFiles/CF246E.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CF246E.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CF246E.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CF246E.dir/build: CF246E.exe

.PHONY : CMakeFiles/CF246E.dir/build

CMakeFiles/CF246E.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CF246E.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CF246E.dir/clean

CMakeFiles/CF246E.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug\CMakeFiles\CF246E.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CF246E.dir/depend


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
include CMakeFiles/SP1043.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SP1043.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SP1043.dir/flags.make

CMakeFiles/SP1043.dir/SP1043.cpp.obj: CMakeFiles/SP1043.dir/flags.make
CMakeFiles/SP1043.dir/SP1043.cpp.obj: ../SP1043.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SP1043.dir/SP1043.cpp.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SP1043.dir\SP1043.cpp.obj -c "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\SP1043.cpp"

CMakeFiles/SP1043.dir/SP1043.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SP1043.dir/SP1043.cpp.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\SP1043.cpp" > CMakeFiles\SP1043.dir\SP1043.cpp.i

CMakeFiles/SP1043.dir/SP1043.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SP1043.dir/SP1043.cpp.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\SP1043.cpp" -o CMakeFiles\SP1043.dir\SP1043.cpp.s

# Object files for target SP1043
SP1043_OBJECTS = \
"CMakeFiles/SP1043.dir/SP1043.cpp.obj"

# External object files for target SP1043
SP1043_EXTERNAL_OBJECTS =

SP1043.exe: CMakeFiles/SP1043.dir/SP1043.cpp.obj
SP1043.exe: CMakeFiles/SP1043.dir/build.make
SP1043.exe: CMakeFiles/SP1043.dir/linklibs.rsp
SP1043.exe: CMakeFiles/SP1043.dir/objects1.rsp
SP1043.exe: CMakeFiles/SP1043.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SP1043.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SP1043.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SP1043.dir/build: SP1043.exe

.PHONY : CMakeFiles/SP1043.dir/build

CMakeFiles/SP1043.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SP1043.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SP1043.dir/clean

CMakeFiles/SP1043.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug\CMakeFiles\SP1043.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SP1043.dir/depend


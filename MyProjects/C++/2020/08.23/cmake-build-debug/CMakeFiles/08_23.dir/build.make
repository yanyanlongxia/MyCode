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
CMAKE_COMMAND = D:\Jetbrains\apps\CLion\ch-0\202.6948.80\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\Jetbrains\apps\CLion\ch-0\202.6948.80\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.23"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.23\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/08_23.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/08_23.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/08_23.dir/flags.make

CMakeFiles/08_23.dir/main.cpp.obj: CMakeFiles/08_23.dir/flags.make
CMakeFiles/08_23.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.23\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/08_23.dir/main.cpp.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\08_23.dir\main.cpp.obj -c "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.23\main.cpp"

CMakeFiles/08_23.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/08_23.dir/main.cpp.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.23\main.cpp" > CMakeFiles\08_23.dir\main.cpp.i

CMakeFiles/08_23.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/08_23.dir/main.cpp.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.23\main.cpp" -o CMakeFiles\08_23.dir\main.cpp.s

# Object files for target 08_23
08_23_OBJECTS = \
"CMakeFiles/08_23.dir/main.cpp.obj"

# External object files for target 08_23
08_23_EXTERNAL_OBJECTS =

08_23.exe: CMakeFiles/08_23.dir/main.cpp.obj
08_23.exe: CMakeFiles/08_23.dir/build.make
08_23.exe: CMakeFiles/08_23.dir/linklibs.rsp
08_23.exe: CMakeFiles/08_23.dir/objects1.rsp
08_23.exe: CMakeFiles/08_23.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.23\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 08_23.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\08_23.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/08_23.dir/build: 08_23.exe

.PHONY : CMakeFiles/08_23.dir/build

CMakeFiles/08_23.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\08_23.dir\cmake_clean.cmake
.PHONY : CMakeFiles/08_23.dir/clean

CMakeFiles/08_23.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.23" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.23" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.23\cmake-build-debug" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.23\cmake-build-debug" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.23\cmake-build-debug\CMakeFiles\08_23.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/08_23.dir/depend


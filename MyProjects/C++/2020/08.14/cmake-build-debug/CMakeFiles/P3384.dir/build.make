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
include CMakeFiles/P3384.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/P3384.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/P3384.dir/flags.make

CMakeFiles/P3384.dir/P3384.cpp.obj: CMakeFiles/P3384.dir/flags.make
CMakeFiles/P3384.dir/P3384.cpp.obj: ../P3384.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/P3384.dir/P3384.cpp.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\P3384.dir\P3384.cpp.obj -c "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\P3384.cpp"

CMakeFiles/P3384.dir/P3384.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/P3384.dir/P3384.cpp.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\P3384.cpp" > CMakeFiles\P3384.dir\P3384.cpp.i

CMakeFiles/P3384.dir/P3384.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/P3384.dir/P3384.cpp.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\P3384.cpp" -o CMakeFiles\P3384.dir\P3384.cpp.s

# Object files for target P3384
P3384_OBJECTS = \
"CMakeFiles/P3384.dir/P3384.cpp.obj"

# External object files for target P3384
P3384_EXTERNAL_OBJECTS =

P3384.exe: CMakeFiles/P3384.dir/P3384.cpp.obj
P3384.exe: CMakeFiles/P3384.dir/build.make
P3384.exe: CMakeFiles/P3384.dir/linklibs.rsp
P3384.exe: CMakeFiles/P3384.dir/objects1.rsp
P3384.exe: CMakeFiles/P3384.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable P3384.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\P3384.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/P3384.dir/build: P3384.exe

.PHONY : CMakeFiles/P3384.dir/build

CMakeFiles/P3384.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\P3384.dir\cmake_clean.cmake
.PHONY : CMakeFiles/P3384.dir/clean

CMakeFiles/P3384.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\08.14\cmake-build-debug\CMakeFiles\P3384.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/P3384.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\admin\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.8743.17\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\admin\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.8743.17\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/overplanting.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/overplanting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/overplanting.dir/flags.make

CMakeFiles/overplanting.dir/overplanting(Manacher).cpp.obj: CMakeFiles/overplanting.dir/flags.make
CMakeFiles/overplanting.dir/overplanting(Manacher).cpp.obj: ../overplanting(Manacher).cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/overplanting.dir/overplanting(Manacher).cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\overplanting.dir\overplanting(Manacher).cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\overplanting(Manacher).cpp"

CMakeFiles/overplanting.dir/overplanting(Manacher).cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/overplanting.dir/overplanting(Manacher).cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\overplanting(Manacher).cpp" > CMakeFiles\overplanting.dir\overplanting(Manacher).cpp.i

CMakeFiles/overplanting.dir/overplanting(Manacher).cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/overplanting.dir/overplanting(Manacher).cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\overplanting(Manacher).cpp" -o CMakeFiles\overplanting.dir\overplanting(Manacher).cpp.s

# Object files for target overplanting
overplanting_OBJECTS = \
"CMakeFiles/overplanting.dir/overplanting(Manacher).cpp.obj"

# External object files for target overplanting
overplanting_EXTERNAL_OBJECTS =

overplanting.exe: CMakeFiles/overplanting.dir/overplanting(Manacher).cpp.obj
overplanting.exe: CMakeFiles/overplanting.dir/build.make
overplanting.exe: CMakeFiles/overplanting.dir/linklibs.rsp
overplanting.exe: CMakeFiles/overplanting.dir/objects1.rsp
overplanting.exe: CMakeFiles/overplanting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable overplanting.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\overplanting.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/overplanting.dir/build: overplanting.exe

.PHONY : CMakeFiles/overplanting.dir/build

CMakeFiles/overplanting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\overplanting.dir\cmake_clean.cmake
.PHONY : CMakeFiles/overplanting.dir/clean

CMakeFiles/overplanting.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug\CMakeFiles\overplanting.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/overplanting.dir/depend


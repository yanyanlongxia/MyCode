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
CMAKE_COMMAND = "E:\Program Files (x86)\Toolbox\apps\CLion\ch-0\201.6668.86\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Program Files (x86)\Toolbox\apps\CLion\ch-0\201.6668.86\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\OneDrive - Contra Costa Com College District\My Projects\C++\huishu\T4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\OneDrive - Contra Costa Com College District\My Projects\C++\huishu\T4\cmake-build-debug-mingw"

# Include any dependencies generated for this target.
include CMakeFiles/a.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a.dir/flags.make

CMakeFiles/a.dir/a.cpp.obj: CMakeFiles/a.dir/flags.make
CMakeFiles/a.dir/a.cpp.obj: ../a.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\OneDrive - Contra Costa Com College District\My Projects\C++\huishu\T4\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/a.dir/a.cpp.obj"
	E:\PROGRA~2\MinGW\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\a.dir\a.cpp.obj -c "E:\OneDrive - Contra Costa Com College District\My Projects\C++\huishu\T4\a.cpp"

CMakeFiles/a.dir/a.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.dir/a.cpp.i"
	E:\PROGRA~2\MinGW\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\OneDrive - Contra Costa Com College District\My Projects\C++\huishu\T4\a.cpp" > CMakeFiles\a.dir\a.cpp.i

CMakeFiles/a.dir/a.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.dir/a.cpp.s"
	E:\PROGRA~2\MinGW\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\OneDrive - Contra Costa Com College District\My Projects\C++\huishu\T4\a.cpp" -o CMakeFiles\a.dir\a.cpp.s

# Object files for target a
a_OBJECTS = \
"CMakeFiles/a.dir/a.cpp.obj"

# External object files for target a
a_EXTERNAL_OBJECTS =

a.exe: CMakeFiles/a.dir/a.cpp.obj
a.exe: CMakeFiles/a.dir/build.make
a.exe: CMakeFiles/a.dir/linklibs.rsp
a.exe: CMakeFiles/a.dir/objects1.rsp
a.exe: CMakeFiles/a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\OneDrive - Contra Costa Com College District\My Projects\C++\huishu\T4\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable a.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\a.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a.dir/build: a.exe

.PHONY : CMakeFiles/a.dir/build

CMakeFiles/a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\a.dir\cmake_clean.cmake
.PHONY : CMakeFiles/a.dir/clean

CMakeFiles/a.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\OneDrive - Contra Costa Com College District\My Projects\C++\huishu\T4" "E:\OneDrive - Contra Costa Com College District\My Projects\C++\huishu\T4" "E:\OneDrive - Contra Costa Com College District\My Projects\C++\huishu\T4\cmake-build-debug-mingw" "E:\OneDrive - Contra Costa Com College District\My Projects\C++\huishu\T4\cmake-build-debug-mingw" "E:\OneDrive - Contra Costa Com College District\My Projects\C++\huishu\T4\cmake-build-debug-mingw\CMakeFiles\a.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/a.dir/depend


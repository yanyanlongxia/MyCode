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
CMAKE_COMMAND = "E:\Program Files (x86)\Toolbox\apps\CLion\ch-0\201.7223.86\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Program Files (x86)\Toolbox\apps\CLion\ch-0\201.7223.86\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\cmake-build-debug-mingw"

# Include any dependencies generated for this target.
include CMakeFiles/T131511.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/T131511.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/T131511.dir/flags.make

CMakeFiles/T131511.dir/T131511.cpp.obj: CMakeFiles/T131511.dir/flags.make
CMakeFiles/T131511.dir/T131511.cpp.obj: ../T131511.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/T131511.dir/T131511.cpp.obj"
	E:\PROGRA~2\MinGW\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\T131511.dir\T131511.cpp.obj -c "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\T131511.cpp"

CMakeFiles/T131511.dir/T131511.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/T131511.dir/T131511.cpp.i"
	E:\PROGRA~2\MinGW\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\T131511.cpp" > CMakeFiles\T131511.dir\T131511.cpp.i

CMakeFiles/T131511.dir/T131511.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/T131511.dir/T131511.cpp.s"
	E:\PROGRA~2\MinGW\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\T131511.cpp" -o CMakeFiles\T131511.dir\T131511.cpp.s

# Object files for target T131511
T131511_OBJECTS = \
"CMakeFiles/T131511.dir/T131511.cpp.obj"

# External object files for target T131511
T131511_EXTERNAL_OBJECTS =

T131511.exe: CMakeFiles/T131511.dir/T131511.cpp.obj
T131511.exe: CMakeFiles/T131511.dir/build.make
T131511.exe: CMakeFiles/T131511.dir/linklibs.rsp
T131511.exe: CMakeFiles/T131511.dir/objects1.rsp
T131511.exe: CMakeFiles/T131511.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable T131511.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\T131511.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/T131511.dir/build: T131511.exe

.PHONY : CMakeFiles/T131511.dir/build

CMakeFiles/T131511.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\T131511.dir\cmake_clean.cmake
.PHONY : CMakeFiles/T131511.dir/clean

CMakeFiles/T131511.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24" "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24" "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\cmake-build-debug-mingw" "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\cmake-build-debug-mingw" "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\cmake-build-debug-mingw\CMakeFiles\T131511.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/T131511.dir/depend


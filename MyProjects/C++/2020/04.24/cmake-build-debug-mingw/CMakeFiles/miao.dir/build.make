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
include CMakeFiles/miao.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/miao.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/miao.dir/flags.make

CMakeFiles/miao.dir/miao.cpp.obj: CMakeFiles/miao.dir/flags.make
CMakeFiles/miao.dir/miao.cpp.obj: ../miao.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/miao.dir/miao.cpp.obj"
	E:\PROGRA~2\MinGW\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\miao.dir\miao.cpp.obj -c "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\miao.cpp"

CMakeFiles/miao.dir/miao.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/miao.dir/miao.cpp.i"
	E:\PROGRA~2\MinGW\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\miao.cpp" > CMakeFiles\miao.dir\miao.cpp.i

CMakeFiles/miao.dir/miao.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/miao.dir/miao.cpp.s"
	E:\PROGRA~2\MinGW\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\miao.cpp" -o CMakeFiles\miao.dir\miao.cpp.s

# Object files for target miao
miao_OBJECTS = \
"CMakeFiles/miao.dir/miao.cpp.obj"

# External object files for target miao
miao_EXTERNAL_OBJECTS =

miao.exe: CMakeFiles/miao.dir/miao.cpp.obj
miao.exe: CMakeFiles/miao.dir/build.make
miao.exe: CMakeFiles/miao.dir/linklibs.rsp
miao.exe: CMakeFiles/miao.dir/objects1.rsp
miao.exe: CMakeFiles/miao.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable miao.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\miao.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/miao.dir/build: miao.exe

.PHONY : CMakeFiles/miao.dir/build

CMakeFiles/miao.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\miao.dir\cmake_clean.cmake
.PHONY : CMakeFiles/miao.dir/clean

CMakeFiles/miao.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24" "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24" "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\cmake-build-debug-mingw" "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\cmake-build-debug-mingw" "E:\OneDrive - Contra Costa Com College District\My Projects\C++\04.24\cmake-build-debug-mingw\CMakeFiles\miao.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/miao.dir/depend


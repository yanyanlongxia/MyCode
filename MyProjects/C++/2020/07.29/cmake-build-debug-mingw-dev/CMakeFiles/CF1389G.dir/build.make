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
CMAKE_SOURCE_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug-mingw-dev"

# Include any dependencies generated for this target.
include CMakeFiles/CF1389G.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CF1389G.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CF1389G.dir/flags.make

CMakeFiles/CF1389G.dir/CF1389G.cpp.obj: CMakeFiles/CF1389G.dir/flags.make
CMakeFiles/CF1389G.dir/CF1389G.cpp.obj: ../CF1389G.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug-mingw-dev\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CF1389G.dir/CF1389G.cpp.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CF1389G.dir\CF1389G.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\CF1389G.cpp"

CMakeFiles/CF1389G.dir/CF1389G.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CF1389G.dir/CF1389G.cpp.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\CF1389G.cpp" > CMakeFiles\CF1389G.dir\CF1389G.cpp.i

CMakeFiles/CF1389G.dir/CF1389G.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CF1389G.dir/CF1389G.cpp.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\CF1389G.cpp" -o CMakeFiles\CF1389G.dir\CF1389G.cpp.s

# Object files for target CF1389G
CF1389G_OBJECTS = \
"CMakeFiles/CF1389G.dir/CF1389G.cpp.obj"

# External object files for target CF1389G
CF1389G_EXTERNAL_OBJECTS =

CF1389G.exe: CMakeFiles/CF1389G.dir/CF1389G.cpp.obj
CF1389G.exe: CMakeFiles/CF1389G.dir/build.make
CF1389G.exe: CMakeFiles/CF1389G.dir/linklibs.rsp
CF1389G.exe: CMakeFiles/CF1389G.dir/objects1.rsp
CF1389G.exe: CMakeFiles/CF1389G.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug-mingw-dev\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CF1389G.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CF1389G.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CF1389G.dir/build: CF1389G.exe

.PHONY : CMakeFiles/CF1389G.dir/build

CMakeFiles/CF1389G.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CF1389G.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CF1389G.dir/clean

CMakeFiles/CF1389G.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug-mingw-dev" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug-mingw-dev" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug-mingw-dev\CMakeFiles\CF1389G.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CF1389G.dir/depend


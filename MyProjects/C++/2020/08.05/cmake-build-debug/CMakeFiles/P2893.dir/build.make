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
CMAKE_SOURCE_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/P2893.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/P2893.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/P2893.dir/flags.make

CMakeFiles/P2893.dir/P2893.cpp.obj: CMakeFiles/P2893.dir/flags.make
CMakeFiles/P2893.dir/P2893.cpp.obj: ../P2893.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/P2893.dir/P2893.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\P2893.dir\P2893.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\P2893.cpp"

CMakeFiles/P2893.dir/P2893.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/P2893.dir/P2893.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\P2893.cpp" > CMakeFiles\P2893.dir\P2893.cpp.i

CMakeFiles/P2893.dir/P2893.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/P2893.dir/P2893.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\P2893.cpp" -o CMakeFiles\P2893.dir\P2893.cpp.s

# Object files for target P2893
P2893_OBJECTS = \
"CMakeFiles/P2893.dir/P2893.cpp.obj"

# External object files for target P2893
P2893_EXTERNAL_OBJECTS =

P2893.exe: CMakeFiles/P2893.dir/P2893.cpp.obj
P2893.exe: CMakeFiles/P2893.dir/build.make
P2893.exe: CMakeFiles/P2893.dir/linklibs.rsp
P2893.exe: CMakeFiles/P2893.dir/objects1.rsp
P2893.exe: CMakeFiles/P2893.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable P2893.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\P2893.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/P2893.dir/build: P2893.exe

.PHONY : CMakeFiles/P2893.dir/build

CMakeFiles/P2893.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\P2893.dir\cmake_clean.cmake
.PHONY : CMakeFiles/P2893.dir/clean

CMakeFiles/P2893.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\cmake-build-debug\CMakeFiles\P2893.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/P2893.dir/depend


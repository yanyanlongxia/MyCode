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
include CMakeFiles/SP22393.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SP22393.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SP22393.dir/flags.make

CMakeFiles/SP22393.dir/SP22393.cpp.obj: CMakeFiles/SP22393.dir/flags.make
CMakeFiles/SP22393.dir/SP22393.cpp.obj: ../SP22393.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SP22393.dir/SP22393.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SP22393.dir\SP22393.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\SP22393.cpp"

CMakeFiles/SP22393.dir/SP22393.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SP22393.dir/SP22393.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\SP22393.cpp" > CMakeFiles\SP22393.dir\SP22393.cpp.i

CMakeFiles/SP22393.dir/SP22393.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SP22393.dir/SP22393.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\SP22393.cpp" -o CMakeFiles\SP22393.dir\SP22393.cpp.s

# Object files for target SP22393
SP22393_OBJECTS = \
"CMakeFiles/SP22393.dir/SP22393.cpp.obj"

# External object files for target SP22393
SP22393_EXTERNAL_OBJECTS =

SP22393.exe: CMakeFiles/SP22393.dir/SP22393.cpp.obj
SP22393.exe: CMakeFiles/SP22393.dir/build.make
SP22393.exe: CMakeFiles/SP22393.dir/linklibs.rsp
SP22393.exe: CMakeFiles/SP22393.dir/objects1.rsp
SP22393.exe: CMakeFiles/SP22393.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SP22393.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SP22393.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SP22393.dir/build: SP22393.exe

.PHONY : CMakeFiles/SP22393.dir/build

CMakeFiles/SP22393.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SP22393.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SP22393.dir/clean

CMakeFiles/SP22393.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.05\cmake-build-debug\CMakeFiles\SP22393.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SP22393.dir/depend


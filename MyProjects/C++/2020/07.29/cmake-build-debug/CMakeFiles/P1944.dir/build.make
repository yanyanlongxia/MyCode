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
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/P1944.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/P1944.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/P1944.dir/flags.make

CMakeFiles/P1944.dir/P1944.cpp.obj: CMakeFiles/P1944.dir/flags.make
CMakeFiles/P1944.dir/P1944.cpp.obj: ../P1944.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/P1944.dir/P1944.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\P1944.dir\P1944.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\P1944.cpp"

CMakeFiles/P1944.dir/P1944.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/P1944.dir/P1944.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\P1944.cpp" > CMakeFiles\P1944.dir\P1944.cpp.i

CMakeFiles/P1944.dir/P1944.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/P1944.dir/P1944.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\P1944.cpp" -o CMakeFiles\P1944.dir\P1944.cpp.s

# Object files for target P1944
P1944_OBJECTS = \
"CMakeFiles/P1944.dir/P1944.cpp.obj"

# External object files for target P1944
P1944_EXTERNAL_OBJECTS =

P1944.exe: CMakeFiles/P1944.dir/P1944.cpp.obj
P1944.exe: CMakeFiles/P1944.dir/build.make
P1944.exe: CMakeFiles/P1944.dir/linklibs.rsp
P1944.exe: CMakeFiles/P1944.dir/objects1.rsp
P1944.exe: CMakeFiles/P1944.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable P1944.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\P1944.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/P1944.dir/build: P1944.exe

.PHONY : CMakeFiles/P1944.dir/build

CMakeFiles/P1944.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\P1944.dir\cmake_clean.cmake
.PHONY : CMakeFiles/P1944.dir/clean

CMakeFiles/P1944.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug\CMakeFiles\P1944.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/P1944.dir/depend


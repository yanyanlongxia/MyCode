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
CMAKE_SOURCE_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CF1373A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CF1373A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CF1373A.dir/flags.make

CMakeFiles/CF1373A.dir/CF1373A.cpp.obj: CMakeFiles/CF1373A.dir/flags.make
CMakeFiles/CF1373A.dir/CF1373A.cpp.obj: ../CF1373A.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CF1373A.dir/CF1373A.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CF1373A.dir\CF1373A.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\CF1373A.cpp"

CMakeFiles/CF1373A.dir/CF1373A.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CF1373A.dir/CF1373A.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\CF1373A.cpp" > CMakeFiles\CF1373A.dir\CF1373A.cpp.i

CMakeFiles/CF1373A.dir/CF1373A.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CF1373A.dir/CF1373A.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\CF1373A.cpp" -o CMakeFiles\CF1373A.dir\CF1373A.cpp.s

# Object files for target CF1373A
CF1373A_OBJECTS = \
"CMakeFiles/CF1373A.dir/CF1373A.cpp.obj"

# External object files for target CF1373A
CF1373A_EXTERNAL_OBJECTS =

CF1373A.exe: CMakeFiles/CF1373A.dir/CF1373A.cpp.obj
CF1373A.exe: CMakeFiles/CF1373A.dir/build.make
CF1373A.exe: CMakeFiles/CF1373A.dir/linklibs.rsp
CF1373A.exe: CMakeFiles/CF1373A.dir/objects1.rsp
CF1373A.exe: CMakeFiles/CF1373A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CF1373A.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CF1373A.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CF1373A.dir/build: CF1373A.exe

.PHONY : CMakeFiles/CF1373A.dir/build

CMakeFiles/CF1373A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CF1373A.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CF1373A.dir/clean

CMakeFiles/CF1373A.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\cmake-build-debug\CMakeFiles\CF1373A.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CF1373A.dir/depend


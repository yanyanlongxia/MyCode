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
include CMakeFiles/d.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/d.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/d.dir/flags.make

CMakeFiles/d.dir/d.cpp.obj: CMakeFiles/d.dir/flags.make
CMakeFiles/d.dir/d.cpp.obj: ../d.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/d.dir/d.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\d.dir\d.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\d.cpp"

CMakeFiles/d.dir/d.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/d.dir/d.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\d.cpp" > CMakeFiles\d.dir\d.cpp.i

CMakeFiles/d.dir/d.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/d.dir/d.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\d.cpp" -o CMakeFiles\d.dir\d.cpp.s

# Object files for target d
d_OBJECTS = \
"CMakeFiles/d.dir/d.cpp.obj"

# External object files for target d
d_EXTERNAL_OBJECTS =

d.exe: CMakeFiles/d.dir/d.cpp.obj
d.exe: CMakeFiles/d.dir/build.make
d.exe: CMakeFiles/d.dir/linklibs.rsp
d.exe: CMakeFiles/d.dir/objects1.rsp
d.exe: CMakeFiles/d.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable d.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\d.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/d.dir/build: d.exe

.PHONY : CMakeFiles/d.dir/build

CMakeFiles/d.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\d.dir\cmake_clean.cmake
.PHONY : CMakeFiles/d.dir/clean

CMakeFiles/d.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.24\cmake-build-debug\CMakeFiles\d.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/d.dir/depend


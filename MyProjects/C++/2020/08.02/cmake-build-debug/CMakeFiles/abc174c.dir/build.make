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
include CMakeFiles/abc174c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/abc174c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/abc174c.dir/flags.make

CMakeFiles/abc174c.dir/abc174c.cpp.obj: CMakeFiles/abc174c.dir/flags.make
CMakeFiles/abc174c.dir/abc174c.cpp.obj: ../abc174c.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/abc174c.dir/abc174c.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\abc174c.dir\abc174c.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\abc174c.cpp"

CMakeFiles/abc174c.dir/abc174c.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/abc174c.dir/abc174c.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\abc174c.cpp" > CMakeFiles\abc174c.dir\abc174c.cpp.i

CMakeFiles/abc174c.dir/abc174c.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/abc174c.dir/abc174c.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\abc174c.cpp" -o CMakeFiles\abc174c.dir\abc174c.cpp.s

# Object files for target abc174c
abc174c_OBJECTS = \
"CMakeFiles/abc174c.dir/abc174c.cpp.obj"

# External object files for target abc174c
abc174c_EXTERNAL_OBJECTS =

abc174c.exe: CMakeFiles/abc174c.dir/abc174c.cpp.obj
abc174c.exe: CMakeFiles/abc174c.dir/build.make
abc174c.exe: CMakeFiles/abc174c.dir/linklibs.rsp
abc174c.exe: CMakeFiles/abc174c.dir/objects1.rsp
abc174c.exe: CMakeFiles/abc174c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable abc174c.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\abc174c.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/abc174c.dir/build: abc174c.exe

.PHONY : CMakeFiles/abc174c.dir/build

CMakeFiles/abc174c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\abc174c.dir\cmake_clean.cmake
.PHONY : CMakeFiles/abc174c.dir/clean

CMakeFiles/abc174c.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug\CMakeFiles\abc174c.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/abc174c.dir/depend


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
include CMakeFiles/abc174a.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/abc174a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/abc174a.dir/flags.make

CMakeFiles/abc174a.dir/abc174a.cpp.obj: CMakeFiles/abc174a.dir/flags.make
CMakeFiles/abc174a.dir/abc174a.cpp.obj: ../abc174a.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/abc174a.dir/abc174a.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\abc174a.dir\abc174a.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\abc174a.cpp"

CMakeFiles/abc174a.dir/abc174a.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/abc174a.dir/abc174a.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\abc174a.cpp" > CMakeFiles\abc174a.dir\abc174a.cpp.i

CMakeFiles/abc174a.dir/abc174a.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/abc174a.dir/abc174a.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\abc174a.cpp" -o CMakeFiles\abc174a.dir\abc174a.cpp.s

# Object files for target abc174a
abc174a_OBJECTS = \
"CMakeFiles/abc174a.dir/abc174a.cpp.obj"

# External object files for target abc174a
abc174a_EXTERNAL_OBJECTS =

abc174a.exe: CMakeFiles/abc174a.dir/abc174a.cpp.obj
abc174a.exe: CMakeFiles/abc174a.dir/build.make
abc174a.exe: CMakeFiles/abc174a.dir/linklibs.rsp
abc174a.exe: CMakeFiles/abc174a.dir/objects1.rsp
abc174a.exe: CMakeFiles/abc174a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable abc174a.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\abc174a.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/abc174a.dir/build: abc174a.exe

.PHONY : CMakeFiles/abc174a.dir/build

CMakeFiles/abc174a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\abc174a.dir\cmake_clean.cmake
.PHONY : CMakeFiles/abc174a.dir/clean

CMakeFiles/abc174a.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\08.02\cmake-build-debug\CMakeFiles\abc174a.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/abc174a.dir/depend


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
include CMakeFiles/acmachine.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/acmachine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/acmachine.dir/flags.make

CMakeFiles/acmachine.dir/acmachine.cpp.obj: CMakeFiles/acmachine.dir/flags.make
CMakeFiles/acmachine.dir/acmachine.cpp.obj: ../acmachine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug-mingw-dev\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/acmachine.dir/acmachine.cpp.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\acmachine.dir\acmachine.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\acmachine.cpp"

CMakeFiles/acmachine.dir/acmachine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/acmachine.dir/acmachine.cpp.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\acmachine.cpp" > CMakeFiles\acmachine.dir\acmachine.cpp.i

CMakeFiles/acmachine.dir/acmachine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/acmachine.dir/acmachine.cpp.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\acmachine.cpp" -o CMakeFiles\acmachine.dir\acmachine.cpp.s

# Object files for target acmachine
acmachine_OBJECTS = \
"CMakeFiles/acmachine.dir/acmachine.cpp.obj"

# External object files for target acmachine
acmachine_EXTERNAL_OBJECTS =

acmachine.exe: CMakeFiles/acmachine.dir/acmachine.cpp.obj
acmachine.exe: CMakeFiles/acmachine.dir/build.make
acmachine.exe: CMakeFiles/acmachine.dir/linklibs.rsp
acmachine.exe: CMakeFiles/acmachine.dir/objects1.rsp
acmachine.exe: CMakeFiles/acmachine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug-mingw-dev\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable acmachine.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\acmachine.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/acmachine.dir/build: acmachine.exe

.PHONY : CMakeFiles/acmachine.dir/build

CMakeFiles/acmachine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\acmachine.dir\cmake_clean.cmake
.PHONY : CMakeFiles/acmachine.dir/clean

CMakeFiles/acmachine.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug-mingw-dev" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug-mingw-dev" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.29\cmake-build-debug-mingw-dev\CMakeFiles\acmachine.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/acmachine.dir/depend


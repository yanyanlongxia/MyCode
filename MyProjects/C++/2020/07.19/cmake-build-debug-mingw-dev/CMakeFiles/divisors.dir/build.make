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
CMAKE_SOURCE_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw-dev"

# Include any dependencies generated for this target.
include CMakeFiles/divisors.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/divisors.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/divisors.dir/flags.make

CMakeFiles/divisors.dir/divisors.cpp.obj: CMakeFiles/divisors.dir/flags.make
CMakeFiles/divisors.dir/divisors.cpp.obj: ../divisors.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw-dev\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/divisors.dir/divisors.cpp.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\divisors.dir\divisors.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\divisors.cpp"

CMakeFiles/divisors.dir/divisors.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/divisors.dir/divisors.cpp.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\divisors.cpp" > CMakeFiles\divisors.dir\divisors.cpp.i

CMakeFiles/divisors.dir/divisors.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/divisors.dir/divisors.cpp.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\divisors.cpp" -o CMakeFiles\divisors.dir\divisors.cpp.s

# Object files for target divisors
divisors_OBJECTS = \
"CMakeFiles/divisors.dir/divisors.cpp.obj"

# External object files for target divisors
divisors_EXTERNAL_OBJECTS =

divisors.exe: CMakeFiles/divisors.dir/divisors.cpp.obj
divisors.exe: CMakeFiles/divisors.dir/build.make
divisors.exe: CMakeFiles/divisors.dir/linklibs.rsp
divisors.exe: CMakeFiles/divisors.dir/objects1.rsp
divisors.exe: CMakeFiles/divisors.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw-dev\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable divisors.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\divisors.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/divisors.dir/build: divisors.exe

.PHONY : CMakeFiles/divisors.dir/build

CMakeFiles/divisors.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\divisors.dir\cmake_clean.cmake
.PHONY : CMakeFiles/divisors.dir/clean

CMakeFiles/divisors.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw-dev" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw-dev" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw-dev\CMakeFiles\divisors.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/divisors.dir/depend


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
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/UVA12167.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/UVA12167.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UVA12167.dir/flags.make

CMakeFiles/UVA12167.dir/UVA12167.cpp.obj: CMakeFiles/UVA12167.dir/flags.make
CMakeFiles/UVA12167.dir/UVA12167.cpp.obj: ../UVA12167.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UVA12167.dir/UVA12167.cpp.obj"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\UVA12167.dir\UVA12167.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\UVA12167.cpp"

CMakeFiles/UVA12167.dir/UVA12167.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UVA12167.dir/UVA12167.cpp.i"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\UVA12167.cpp" > CMakeFiles\UVA12167.dir\UVA12167.cpp.i

CMakeFiles/UVA12167.dir/UVA12167.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UVA12167.dir/UVA12167.cpp.s"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\UVA12167.cpp" -o CMakeFiles\UVA12167.dir\UVA12167.cpp.s

# Object files for target UVA12167
UVA12167_OBJECTS = \
"CMakeFiles/UVA12167.dir/UVA12167.cpp.obj"

# External object files for target UVA12167
UVA12167_EXTERNAL_OBJECTS =

UVA12167.exe: CMakeFiles/UVA12167.dir/UVA12167.cpp.obj
UVA12167.exe: CMakeFiles/UVA12167.dir/build.make
UVA12167.exe: CMakeFiles/UVA12167.dir/linklibs.rsp
UVA12167.exe: CMakeFiles/UVA12167.dir/objects1.rsp
UVA12167.exe: CMakeFiles/UVA12167.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable UVA12167.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\UVA12167.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UVA12167.dir/build: UVA12167.exe

.PHONY : CMakeFiles/UVA12167.dir/build

CMakeFiles/UVA12167.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\UVA12167.dir\cmake_clean.cmake
.PHONY : CMakeFiles/UVA12167.dir/clean

CMakeFiles/UVA12167.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug\CMakeFiles\UVA12167.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/UVA12167.dir/depend


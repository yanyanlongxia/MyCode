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
CMAKE_COMMAND = C:\Users\admin\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7846.88\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\admin\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7846.88\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\cmake-build-debug-mingw"

# Include any dependencies generated for this target.
include CMakeFiles/POJ3263.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/POJ3263.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/POJ3263.dir/flags.make

CMakeFiles/POJ3263.dir/POJ3263.cpp.obj: CMakeFiles/POJ3263.dir/flags.make
CMakeFiles/POJ3263.dir/POJ3263.cpp.obj: ../POJ3263.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/POJ3263.dir/POJ3263.cpp.obj"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\POJ3263.dir\POJ3263.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\POJ3263.cpp"

CMakeFiles/POJ3263.dir/POJ3263.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POJ3263.dir/POJ3263.cpp.i"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\POJ3263.cpp" > CMakeFiles\POJ3263.dir\POJ3263.cpp.i

CMakeFiles/POJ3263.dir/POJ3263.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POJ3263.dir/POJ3263.cpp.s"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\POJ3263.cpp" -o CMakeFiles\POJ3263.dir\POJ3263.cpp.s

# Object files for target POJ3263
POJ3263_OBJECTS = \
"CMakeFiles/POJ3263.dir/POJ3263.cpp.obj"

# External object files for target POJ3263
POJ3263_EXTERNAL_OBJECTS =

POJ3263.exe: CMakeFiles/POJ3263.dir/POJ3263.cpp.obj
POJ3263.exe: CMakeFiles/POJ3263.dir/build.make
POJ3263.exe: CMakeFiles/POJ3263.dir/linklibs.rsp
POJ3263.exe: CMakeFiles/POJ3263.dir/objects1.rsp
POJ3263.exe: CMakeFiles/POJ3263.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable POJ3263.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\POJ3263.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/POJ3263.dir/build: POJ3263.exe

.PHONY : CMakeFiles/POJ3263.dir/build

CMakeFiles/POJ3263.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\POJ3263.dir\cmake_clean.cmake
.PHONY : CMakeFiles/POJ3263.dir/clean

CMakeFiles/POJ3263.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\cmake-build-debug-mingw" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\cmake-build-debug-mingw" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\cmake-build-debug-mingw\CMakeFiles\POJ3263.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/POJ3263.dir/depend


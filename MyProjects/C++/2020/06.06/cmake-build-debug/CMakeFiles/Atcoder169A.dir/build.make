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
CMAKE_SOURCE_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Atcoder169A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Atcoder169A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Atcoder169A.dir/flags.make

CMakeFiles/Atcoder169A.dir/Atcoder169A.cpp.obj: CMakeFiles/Atcoder169A.dir/flags.make
CMakeFiles/Atcoder169A.dir/Atcoder169A.cpp.obj: ../Atcoder169A.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Atcoder169A.dir/Atcoder169A.cpp.obj"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Atcoder169A.dir\Atcoder169A.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\Atcoder169A.cpp"

CMakeFiles/Atcoder169A.dir/Atcoder169A.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Atcoder169A.dir/Atcoder169A.cpp.i"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\Atcoder169A.cpp" > CMakeFiles\Atcoder169A.dir\Atcoder169A.cpp.i

CMakeFiles/Atcoder169A.dir/Atcoder169A.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Atcoder169A.dir/Atcoder169A.cpp.s"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\Atcoder169A.cpp" -o CMakeFiles\Atcoder169A.dir\Atcoder169A.cpp.s

# Object files for target Atcoder169A
Atcoder169A_OBJECTS = \
"CMakeFiles/Atcoder169A.dir/Atcoder169A.cpp.obj"

# External object files for target Atcoder169A
Atcoder169A_EXTERNAL_OBJECTS =

Atcoder169A.exe: CMakeFiles/Atcoder169A.dir/Atcoder169A.cpp.obj
Atcoder169A.exe: CMakeFiles/Atcoder169A.dir/build.make
Atcoder169A.exe: CMakeFiles/Atcoder169A.dir/linklibs.rsp
Atcoder169A.exe: CMakeFiles/Atcoder169A.dir/objects1.rsp
Atcoder169A.exe: CMakeFiles/Atcoder169A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Atcoder169A.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Atcoder169A.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Atcoder169A.dir/build: Atcoder169A.exe

.PHONY : CMakeFiles/Atcoder169A.dir/build

CMakeFiles/Atcoder169A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Atcoder169A.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Atcoder169A.dir/clean

CMakeFiles/Atcoder169A.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug\CMakeFiles\Atcoder169A.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Atcoder169A.dir/depend


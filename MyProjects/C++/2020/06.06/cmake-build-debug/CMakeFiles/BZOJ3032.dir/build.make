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
include CMakeFiles/BZOJ3032.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BZOJ3032.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BZOJ3032.dir/flags.make

CMakeFiles/BZOJ3032.dir/BZOJ3032.cpp.obj: CMakeFiles/BZOJ3032.dir/flags.make
CMakeFiles/BZOJ3032.dir/BZOJ3032.cpp.obj: ../BZOJ3032.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BZOJ3032.dir/BZOJ3032.cpp.obj"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\BZOJ3032.dir\BZOJ3032.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\BZOJ3032.cpp"

CMakeFiles/BZOJ3032.dir/BZOJ3032.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BZOJ3032.dir/BZOJ3032.cpp.i"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\BZOJ3032.cpp" > CMakeFiles\BZOJ3032.dir\BZOJ3032.cpp.i

CMakeFiles/BZOJ3032.dir/BZOJ3032.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BZOJ3032.dir/BZOJ3032.cpp.s"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\BZOJ3032.cpp" -o CMakeFiles\BZOJ3032.dir\BZOJ3032.cpp.s

# Object files for target BZOJ3032
BZOJ3032_OBJECTS = \
"CMakeFiles/BZOJ3032.dir/BZOJ3032.cpp.obj"

# External object files for target BZOJ3032
BZOJ3032_EXTERNAL_OBJECTS =

BZOJ3032.exe: CMakeFiles/BZOJ3032.dir/BZOJ3032.cpp.obj
BZOJ3032.exe: CMakeFiles/BZOJ3032.dir/build.make
BZOJ3032.exe: CMakeFiles/BZOJ3032.dir/linklibs.rsp
BZOJ3032.exe: CMakeFiles/BZOJ3032.dir/objects1.rsp
BZOJ3032.exe: CMakeFiles/BZOJ3032.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BZOJ3032.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BZOJ3032.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BZOJ3032.dir/build: BZOJ3032.exe

.PHONY : CMakeFiles/BZOJ3032.dir/build

CMakeFiles/BZOJ3032.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BZOJ3032.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BZOJ3032.dir/clean

CMakeFiles/BZOJ3032.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug\CMakeFiles\BZOJ3032.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/BZOJ3032.dir/depend


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
include CMakeFiles/CF670C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CF670C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CF670C.dir/flags.make

CMakeFiles/CF670C.dir/CF670C.cpp.obj: CMakeFiles/CF670C.dir/flags.make
CMakeFiles/CF670C.dir/CF670C.cpp.obj: ../CF670C.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CF670C.dir/CF670C.cpp.obj"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CF670C.dir\CF670C.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\CF670C.cpp"

CMakeFiles/CF670C.dir/CF670C.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CF670C.dir/CF670C.cpp.i"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\CF670C.cpp" > CMakeFiles\CF670C.dir\CF670C.cpp.i

CMakeFiles/CF670C.dir/CF670C.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CF670C.dir/CF670C.cpp.s"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\CF670C.cpp" -o CMakeFiles\CF670C.dir\CF670C.cpp.s

# Object files for target CF670C
CF670C_OBJECTS = \
"CMakeFiles/CF670C.dir/CF670C.cpp.obj"

# External object files for target CF670C
CF670C_EXTERNAL_OBJECTS =

CF670C.exe: CMakeFiles/CF670C.dir/CF670C.cpp.obj
CF670C.exe: CMakeFiles/CF670C.dir/build.make
CF670C.exe: CMakeFiles/CF670C.dir/linklibs.rsp
CF670C.exe: CMakeFiles/CF670C.dir/objects1.rsp
CF670C.exe: CMakeFiles/CF670C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CF670C.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CF670C.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CF670C.dir/build: CF670C.exe

.PHONY : CMakeFiles/CF670C.dir/build

CMakeFiles/CF670C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CF670C.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CF670C.dir/clean

CMakeFiles/CF670C.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.06\cmake-build-debug\CMakeFiles\CF670C.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CF670C.dir/depend


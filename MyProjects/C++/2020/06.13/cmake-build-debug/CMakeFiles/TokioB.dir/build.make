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
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/TokioB.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TokioB.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TokioB.dir/flags.make

CMakeFiles/TokioB.dir/TokioB.cpp.obj: CMakeFiles/TokioB.dir/flags.make
CMakeFiles/TokioB.dir/TokioB.cpp.obj: ../TokioB.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TokioB.dir/TokioB.cpp.obj"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TokioB.dir\TokioB.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\TokioB.cpp"

CMakeFiles/TokioB.dir/TokioB.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TokioB.dir/TokioB.cpp.i"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\TokioB.cpp" > CMakeFiles\TokioB.dir\TokioB.cpp.i

CMakeFiles/TokioB.dir/TokioB.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TokioB.dir/TokioB.cpp.s"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\TokioB.cpp" -o CMakeFiles\TokioB.dir\TokioB.cpp.s

# Object files for target TokioB
TokioB_OBJECTS = \
"CMakeFiles/TokioB.dir/TokioB.cpp.obj"

# External object files for target TokioB
TokioB_EXTERNAL_OBJECTS =

TokioB.exe: CMakeFiles/TokioB.dir/TokioB.cpp.obj
TokioB.exe: CMakeFiles/TokioB.dir/build.make
TokioB.exe: CMakeFiles/TokioB.dir/linklibs.rsp
TokioB.exe: CMakeFiles/TokioB.dir/objects1.rsp
TokioB.exe: CMakeFiles/TokioB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TokioB.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TokioB.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TokioB.dir/build: TokioB.exe

.PHONY : CMakeFiles/TokioB.dir/build

CMakeFiles/TokioB.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TokioB.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TokioB.dir/clean

CMakeFiles/TokioB.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\06.13\cmake-build-debug\CMakeFiles\TokioB.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/TokioB.dir/depend


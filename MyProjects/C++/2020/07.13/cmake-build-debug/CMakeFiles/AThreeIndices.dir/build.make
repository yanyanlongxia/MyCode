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
CMAKE_SOURCE_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/AThreeIndices.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AThreeIndices.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AThreeIndices.dir/flags.make

CMakeFiles/AThreeIndices.dir/tasks/AThreeIndices.cpp.obj: CMakeFiles/AThreeIndices.dir/flags.make
CMakeFiles/AThreeIndices.dir/tasks/AThreeIndices.cpp.obj: ../tasks/AThreeIndices.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AThreeIndices.dir/tasks/AThreeIndices.cpp.obj"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\AThreeIndices.dir\tasks\AThreeIndices.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\tasks\AThreeIndices.cpp"

CMakeFiles/AThreeIndices.dir/tasks/AThreeIndices.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AThreeIndices.dir/tasks/AThreeIndices.cpp.i"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\tasks\AThreeIndices.cpp" > CMakeFiles\AThreeIndices.dir\tasks\AThreeIndices.cpp.i

CMakeFiles/AThreeIndices.dir/tasks/AThreeIndices.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AThreeIndices.dir/tasks/AThreeIndices.cpp.s"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\tasks\AThreeIndices.cpp" -o CMakeFiles\AThreeIndices.dir\tasks\AThreeIndices.cpp.s

# Object files for target AThreeIndices
AThreeIndices_OBJECTS = \
"CMakeFiles/AThreeIndices.dir/tasks/AThreeIndices.cpp.obj"

# External object files for target AThreeIndices
AThreeIndices_EXTERNAL_OBJECTS =

AThreeIndices.exe: CMakeFiles/AThreeIndices.dir/tasks/AThreeIndices.cpp.obj
AThreeIndices.exe: CMakeFiles/AThreeIndices.dir/build.make
AThreeIndices.exe: CMakeFiles/AThreeIndices.dir/linklibs.rsp
AThreeIndices.exe: CMakeFiles/AThreeIndices.dir/objects1.rsp
AThreeIndices.exe: CMakeFiles/AThreeIndices.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AThreeIndices.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\AThreeIndices.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AThreeIndices.dir/build: AThreeIndices.exe

.PHONY : CMakeFiles/AThreeIndices.dir/build

CMakeFiles/AThreeIndices.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AThreeIndices.dir\cmake_clean.cmake
.PHONY : CMakeFiles/AThreeIndices.dir/clean

CMakeFiles/AThreeIndices.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug\CMakeFiles\AThreeIndices.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/AThreeIndices.dir/depend


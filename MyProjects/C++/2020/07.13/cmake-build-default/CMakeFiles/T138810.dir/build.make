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
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-default"

# Include any dependencies generated for this target.
include CMakeFiles/T138810.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/T138810.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/T138810.dir/flags.make

CMakeFiles/T138810.dir/T138810.cpp.obj: CMakeFiles/T138810.dir/flags.make
CMakeFiles/T138810.dir/T138810.cpp.obj: ../T138810.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-default\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/T138810.dir/T138810.cpp.obj"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\T138810.dir\T138810.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\T138810.cpp"

CMakeFiles/T138810.dir/T138810.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/T138810.dir/T138810.cpp.i"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\T138810.cpp" > CMakeFiles\T138810.dir\T138810.cpp.i

CMakeFiles/T138810.dir/T138810.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/T138810.dir/T138810.cpp.s"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\T138810.cpp" -o CMakeFiles\T138810.dir\T138810.cpp.s

# Object files for target T138810
T138810_OBJECTS = \
"CMakeFiles/T138810.dir/T138810.cpp.obj"

# External object files for target T138810
T138810_EXTERNAL_OBJECTS =

T138810.exe: CMakeFiles/T138810.dir/T138810.cpp.obj
T138810.exe: CMakeFiles/T138810.dir/build.make
T138810.exe: CMakeFiles/T138810.dir/linklibs.rsp
T138810.exe: CMakeFiles/T138810.dir/objects1.rsp
T138810.exe: CMakeFiles/T138810.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-default\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable T138810.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\T138810.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/T138810.dir/build: T138810.exe

.PHONY : CMakeFiles/T138810.dir/build

CMakeFiles/T138810.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\T138810.dir\cmake_clean.cmake
.PHONY : CMakeFiles/T138810.dir/clean

CMakeFiles/T138810.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-default" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-default" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-default\CMakeFiles\T138810.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/T138810.dir/depend


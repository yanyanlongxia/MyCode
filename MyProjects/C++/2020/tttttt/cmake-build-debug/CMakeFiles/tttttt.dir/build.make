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
CMAKE_SOURCE_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\tttttt"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\tttttt\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/tttttt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tttttt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tttttt.dir/flags.make

CMakeFiles/tttttt.dir/main.cpp.obj: CMakeFiles/tttttt.dir/flags.make
CMakeFiles/tttttt.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\tttttt\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tttttt.dir/main.cpp.obj"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\tttttt.dir\main.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\tttttt\main.cpp"

CMakeFiles/tttttt.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tttttt.dir/main.cpp.i"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\tttttt\main.cpp" > CMakeFiles\tttttt.dir\main.cpp.i

CMakeFiles/tttttt.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tttttt.dir/main.cpp.s"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\tttttt\main.cpp" -o CMakeFiles\tttttt.dir\main.cpp.s

# Object files for target tttttt
tttttt_OBJECTS = \
"CMakeFiles/tttttt.dir/main.cpp.obj"

# External object files for target tttttt
tttttt_EXTERNAL_OBJECTS =

tttttt.exe: CMakeFiles/tttttt.dir/main.cpp.obj
tttttt.exe: CMakeFiles/tttttt.dir/build.make
tttttt.exe: CMakeFiles/tttttt.dir/linklibs.rsp
tttttt.exe: CMakeFiles/tttttt.dir/objects1.rsp
tttttt.exe: CMakeFiles/tttttt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\tttttt\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tttttt.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tttttt.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tttttt.dir/build: tttttt.exe

.PHONY : CMakeFiles/tttttt.dir/build

CMakeFiles/tttttt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\tttttt.dir\cmake_clean.cmake
.PHONY : CMakeFiles/tttttt.dir/clean

CMakeFiles/tttttt.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\tttttt" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\tttttt" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\tttttt\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\tttttt\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\tttttt\cmake-build-debug\CMakeFiles\tttttt.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/tttttt.dir/depend


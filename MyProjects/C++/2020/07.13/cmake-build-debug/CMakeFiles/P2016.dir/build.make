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
include CMakeFiles/P2016.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/P2016.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/P2016.dir/flags.make

CMakeFiles/P2016.dir/P2016.cpp.obj: CMakeFiles/P2016.dir/flags.make
CMakeFiles/P2016.dir/P2016.cpp.obj: ../P2016.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/P2016.dir/P2016.cpp.obj"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\P2016.dir\P2016.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\P2016.cpp"

CMakeFiles/P2016.dir/P2016.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/P2016.dir/P2016.cpp.i"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\P2016.cpp" > CMakeFiles\P2016.dir\P2016.cpp.i

CMakeFiles/P2016.dir/P2016.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/P2016.dir/P2016.cpp.s"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\P2016.cpp" -o CMakeFiles\P2016.dir\P2016.cpp.s

# Object files for target P2016
P2016_OBJECTS = \
"CMakeFiles/P2016.dir/P2016.cpp.obj"

# External object files for target P2016
P2016_EXTERNAL_OBJECTS =

P2016.exe: CMakeFiles/P2016.dir/P2016.cpp.obj
P2016.exe: CMakeFiles/P2016.dir/build.make
P2016.exe: CMakeFiles/P2016.dir/linklibs.rsp
P2016.exe: CMakeFiles/P2016.dir/objects1.rsp
P2016.exe: CMakeFiles/P2016.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable P2016.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\P2016.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/P2016.dir/build: P2016.exe

.PHONY : CMakeFiles/P2016.dir/build

CMakeFiles/P2016.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\P2016.dir\cmake_clean.cmake
.PHONY : CMakeFiles/P2016.dir/clean

CMakeFiles/P2016.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug\CMakeFiles\P2016.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/P2016.dir/depend


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
CMAKE_SOURCE_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/cf645C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cf645C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cf645C.dir/flags.make

CMakeFiles/cf645C.dir/cf645C.cpp.obj: CMakeFiles/cf645C.dir/flags.make
CMakeFiles/cf645C.dir/cf645C.cpp.obj: ../cf645C.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cf645C.dir/cf645C.cpp.obj"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cf645C.dir\cf645C.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\cf645C.cpp"

CMakeFiles/cf645C.dir/cf645C.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cf645C.dir/cf645C.cpp.i"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\cf645C.cpp" > CMakeFiles\cf645C.dir\cf645C.cpp.i

CMakeFiles/cf645C.dir/cf645C.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cf645C.dir/cf645C.cpp.s"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\cf645C.cpp" -o CMakeFiles\cf645C.dir\cf645C.cpp.s

# Object files for target cf645C
cf645C_OBJECTS = \
"CMakeFiles/cf645C.dir/cf645C.cpp.obj"

# External object files for target cf645C
cf645C_EXTERNAL_OBJECTS =

cf645C.exe: CMakeFiles/cf645C.dir/cf645C.cpp.obj
cf645C.exe: CMakeFiles/cf645C.dir/build.make
cf645C.exe: CMakeFiles/cf645C.dir/linklibs.rsp
cf645C.exe: CMakeFiles/cf645C.dir/objects1.rsp
cf645C.exe: CMakeFiles/cf645C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cf645C.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cf645C.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cf645C.dir/build: cf645C.exe

.PHONY : CMakeFiles/cf645C.dir/build

CMakeFiles/cf645C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cf645C.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cf645C.dir/clean

CMakeFiles/cf645C.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\cmake-build-debug\CMakeFiles\cf645C.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/cf645C.dir/depend


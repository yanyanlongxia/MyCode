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
include CMakeFiles/KSA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/KSA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/KSA.dir/flags.make

CMakeFiles/KSA.dir/KSA.cpp.obj: CMakeFiles/KSA.dir/flags.make
CMakeFiles/KSA.dir/KSA.cpp.obj: ../KSA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/KSA.dir/KSA.cpp.obj"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\KSA.dir\KSA.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\KSA.cpp"

CMakeFiles/KSA.dir/KSA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KSA.dir/KSA.cpp.i"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\KSA.cpp" > CMakeFiles\KSA.dir\KSA.cpp.i

CMakeFiles/KSA.dir/KSA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KSA.dir/KSA.cpp.s"
	C:\PROGRA~2\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\KSA.cpp" -o CMakeFiles\KSA.dir\KSA.cpp.s

# Object files for target KSA
KSA_OBJECTS = \
"CMakeFiles/KSA.dir/KSA.cpp.obj"

# External object files for target KSA
KSA_EXTERNAL_OBJECTS =

KSA.exe: CMakeFiles/KSA.dir/KSA.cpp.obj
KSA.exe: CMakeFiles/KSA.dir/build.make
KSA.exe: CMakeFiles/KSA.dir/linklibs.rsp
KSA.exe: CMakeFiles/KSA.dir/objects1.rsp
KSA.exe: CMakeFiles/KSA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable KSA.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\KSA.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/KSA.dir/build: KSA.exe

.PHONY : CMakeFiles/KSA.dir/build

CMakeFiles/KSA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\KSA.dir\cmake_clean.cmake
.PHONY : CMakeFiles/KSA.dir/clean

CMakeFiles/KSA.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.13\cmake-build-debug\CMakeFiles\KSA.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/KSA.dir/depend


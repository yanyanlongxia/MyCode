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
CMAKE_COMMAND = C:\Users\admin\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.8743.17\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\admin\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.8743.17\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw"

# Include any dependencies generated for this target.
include CMakeFiles/JS629.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/JS629.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/JS629.dir/flags.make

CMakeFiles/JS629.dir/JS629.cpp.obj: CMakeFiles/JS629.dir/flags.make
CMakeFiles/JS629.dir/JS629.cpp.obj: ../JS629.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/JS629.dir/JS629.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\JS629.dir\JS629.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\JS629.cpp"

CMakeFiles/JS629.dir/JS629.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JS629.dir/JS629.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\JS629.cpp" > CMakeFiles\JS629.dir\JS629.cpp.i

CMakeFiles/JS629.dir/JS629.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JS629.dir/JS629.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\JS629.cpp" -o CMakeFiles\JS629.dir\JS629.cpp.s

# Object files for target JS629
JS629_OBJECTS = \
"CMakeFiles/JS629.dir/JS629.cpp.obj"

# External object files for target JS629
JS629_EXTERNAL_OBJECTS =

JS629.exe: CMakeFiles/JS629.dir/JS629.cpp.obj
JS629.exe: CMakeFiles/JS629.dir/build.make
JS629.exe: CMakeFiles/JS629.dir/linklibs.rsp
JS629.exe: CMakeFiles/JS629.dir/objects1.rsp
JS629.exe: CMakeFiles/JS629.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable JS629.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\JS629.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/JS629.dir/build: JS629.exe

.PHONY : CMakeFiles/JS629.dir/build

CMakeFiles/JS629.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\JS629.dir\cmake_clean.cmake
.PHONY : CMakeFiles/JS629.dir/clean

CMakeFiles/JS629.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw\CMakeFiles\JS629.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/JS629.dir/depend


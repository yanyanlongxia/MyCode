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
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\cmake-build-debug_dev"

# Include any dependencies generated for this target.
include CMakeFiles/AtcoderNPC2020B.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AtcoderNPC2020B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AtcoderNPC2020B.dir/flags.make

CMakeFiles/AtcoderNPC2020B.dir/AtcoderNPC2020B.cpp.obj: CMakeFiles/AtcoderNPC2020B.dir/flags.make
CMakeFiles/AtcoderNPC2020B.dir/AtcoderNPC2020B.cpp.obj: ../AtcoderNPC2020B.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\cmake-build-debug_dev\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AtcoderNPC2020B.dir/AtcoderNPC2020B.cpp.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\AtcoderNPC2020B.dir\AtcoderNPC2020B.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\AtcoderNPC2020B.cpp"

CMakeFiles/AtcoderNPC2020B.dir/AtcoderNPC2020B.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AtcoderNPC2020B.dir/AtcoderNPC2020B.cpp.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\AtcoderNPC2020B.cpp" > CMakeFiles\AtcoderNPC2020B.dir\AtcoderNPC2020B.cpp.i

CMakeFiles/AtcoderNPC2020B.dir/AtcoderNPC2020B.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AtcoderNPC2020B.dir/AtcoderNPC2020B.cpp.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\AtcoderNPC2020B.cpp" -o CMakeFiles\AtcoderNPC2020B.dir\AtcoderNPC2020B.cpp.s

# Object files for target AtcoderNPC2020B
AtcoderNPC2020B_OBJECTS = \
"CMakeFiles/AtcoderNPC2020B.dir/AtcoderNPC2020B.cpp.obj"

# External object files for target AtcoderNPC2020B
AtcoderNPC2020B_EXTERNAL_OBJECTS =

AtcoderNPC2020B.exe: CMakeFiles/AtcoderNPC2020B.dir/AtcoderNPC2020B.cpp.obj
AtcoderNPC2020B.exe: CMakeFiles/AtcoderNPC2020B.dir/build.make
AtcoderNPC2020B.exe: CMakeFiles/AtcoderNPC2020B.dir/linklibs.rsp
AtcoderNPC2020B.exe: CMakeFiles/AtcoderNPC2020B.dir/objects1.rsp
AtcoderNPC2020B.exe: CMakeFiles/AtcoderNPC2020B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\cmake-build-debug_dev\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AtcoderNPC2020B.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\AtcoderNPC2020B.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AtcoderNPC2020B.dir/build: AtcoderNPC2020B.exe

.PHONY : CMakeFiles/AtcoderNPC2020B.dir/build

CMakeFiles/AtcoderNPC2020B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AtcoderNPC2020B.dir\cmake_clean.cmake
.PHONY : CMakeFiles/AtcoderNPC2020B.dir/clean

CMakeFiles/AtcoderNPC2020B.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\cmake-build-debug_dev" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\cmake-build-debug_dev" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\05.30\cmake-build-debug_dev\CMakeFiles\AtcoderNPC2020B.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/AtcoderNPC2020B.dir/depend


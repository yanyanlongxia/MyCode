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
include CMakeFiles/st.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/st.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/st.dir/flags.make

CMakeFiles/st.dir/st.cpp.obj: CMakeFiles/st.dir/flags.make
CMakeFiles/st.dir/st.cpp.obj: ../st.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/st.dir/st.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\st.dir\st.cpp.obj -c "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\st.cpp"

CMakeFiles/st.dir/st.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/st.dir/st.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\st.cpp" > CMakeFiles\st.dir\st.cpp.i

CMakeFiles/st.dir/st.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/st.dir/st.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\st.cpp" -o CMakeFiles\st.dir\st.cpp.s

# Object files for target st
st_OBJECTS = \
"CMakeFiles/st.dir/st.cpp.obj"

# External object files for target st
st_EXTERNAL_OBJECTS =

st.exe: CMakeFiles/st.dir/st.cpp.obj
st.exe: CMakeFiles/st.dir/build.make
st.exe: CMakeFiles/st.dir/linklibs.rsp
st.exe: CMakeFiles/st.dir/objects1.rsp
st.exe: CMakeFiles/st.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable st.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\st.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/st.dir/build: st.exe

.PHONY : CMakeFiles/st.dir/build

CMakeFiles/st.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\st.dir\cmake_clean.cmake
.PHONY : CMakeFiles/st.dir/clean

CMakeFiles/st.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw" "C:\Users\admin\OneDrive - Contra Costa Com College District\My Projects\C++\07.19\cmake-build-debug-mingw\CMakeFiles\st.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/st.dir/depend


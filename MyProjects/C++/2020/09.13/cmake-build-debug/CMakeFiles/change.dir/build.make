# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Jetbrains\apps\CLion\ch-0\202.6948.80\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\Jetbrains\apps\CLion\ch-0\202.6948.80\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\09.13"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\09.13\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/change.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/change.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/change.dir/flags.make

CMakeFiles/change.dir/change.cpp.obj: CMakeFiles/change.dir/flags.make
CMakeFiles/change.dir/change.cpp.obj: ../change.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\09.13\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/change.dir/change.cpp.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\change.dir\change.cpp.obj -c "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\09.13\change.cpp"

CMakeFiles/change.dir/change.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/change.dir/change.cpp.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\09.13\change.cpp" > CMakeFiles\change.dir\change.cpp.i

CMakeFiles/change.dir/change.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/change.dir/change.cpp.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\09.13\change.cpp" -o CMakeFiles\change.dir\change.cpp.s

# Object files for target change
change_OBJECTS = \
"CMakeFiles/change.dir/change.cpp.obj"

# External object files for target change
change_EXTERNAL_OBJECTS =

change.exe: CMakeFiles/change.dir/change.cpp.obj
change.exe: CMakeFiles/change.dir/build.make
change.exe: CMakeFiles/change.dir/linklibs.rsp
change.exe: CMakeFiles/change.dir/objects1.rsp
change.exe: CMakeFiles/change.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\09.13\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable change.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\change.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/change.dir/build: change.exe

.PHONY : CMakeFiles/change.dir/build

CMakeFiles/change.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\change.dir\cmake_clean.cmake
.PHONY : CMakeFiles/change.dir/clean

CMakeFiles/change.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\09.13" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\09.13" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\09.13\cmake-build-debug" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\09.13\cmake-build-debug" "C:\Users\DELL\Documents\GitHub\MyCode\My Projects\C++\09.13\cmake-build-debug\CMakeFiles\change.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/change.dir/depend


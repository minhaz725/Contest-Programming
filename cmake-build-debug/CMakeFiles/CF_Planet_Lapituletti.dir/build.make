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
CMAKE_COMMAND = E:\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = E:\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "F:\CPP Contest"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\CPP Contest\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CF_Planet_Lapituletti.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CF_Planet_Lapituletti.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CF_Planet_Lapituletti.dir/flags.make

CMakeFiles/CF_Planet_Lapituletti.dir/codeforces/CF_Planet_Lapituletti.cpp.obj: CMakeFiles/CF_Planet_Lapituletti.dir/flags.make
CMakeFiles/CF_Planet_Lapituletti.dir/codeforces/CF_Planet_Lapituletti.cpp.obj: ../codeforces/CF_Planet_Lapituletti.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\CPP Contest\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CF_Planet_Lapituletti.dir/codeforces/CF_Planet_Lapituletti.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CF_Planet_Lapituletti.dir\codeforces\CF_Planet_Lapituletti.cpp.obj -c "F:\CPP Contest\codeforces\CF_Planet_Lapituletti.cpp"

CMakeFiles/CF_Planet_Lapituletti.dir/codeforces/CF_Planet_Lapituletti.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CF_Planet_Lapituletti.dir/codeforces/CF_Planet_Lapituletti.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\CPP Contest\codeforces\CF_Planet_Lapituletti.cpp" > CMakeFiles\CF_Planet_Lapituletti.dir\codeforces\CF_Planet_Lapituletti.cpp.i

CMakeFiles/CF_Planet_Lapituletti.dir/codeforces/CF_Planet_Lapituletti.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CF_Planet_Lapituletti.dir/codeforces/CF_Planet_Lapituletti.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\CPP Contest\codeforces\CF_Planet_Lapituletti.cpp" -o CMakeFiles\CF_Planet_Lapituletti.dir\codeforces\CF_Planet_Lapituletti.cpp.s

# Object files for target CF_Planet_Lapituletti
CF_Planet_Lapituletti_OBJECTS = \
"CMakeFiles/CF_Planet_Lapituletti.dir/codeforces/CF_Planet_Lapituletti.cpp.obj"

# External object files for target CF_Planet_Lapituletti
CF_Planet_Lapituletti_EXTERNAL_OBJECTS =

CF_Planet_Lapituletti.exe: CMakeFiles/CF_Planet_Lapituletti.dir/codeforces/CF_Planet_Lapituletti.cpp.obj
CF_Planet_Lapituletti.exe: CMakeFiles/CF_Planet_Lapituletti.dir/build.make
CF_Planet_Lapituletti.exe: CMakeFiles/CF_Planet_Lapituletti.dir/linklibs.rsp
CF_Planet_Lapituletti.exe: CMakeFiles/CF_Planet_Lapituletti.dir/objects1.rsp
CF_Planet_Lapituletti.exe: CMakeFiles/CF_Planet_Lapituletti.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\CPP Contest\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CF_Planet_Lapituletti.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CF_Planet_Lapituletti.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CF_Planet_Lapituletti.dir/build: CF_Planet_Lapituletti.exe

.PHONY : CMakeFiles/CF_Planet_Lapituletti.dir/build

CMakeFiles/CF_Planet_Lapituletti.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CF_Planet_Lapituletti.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CF_Planet_Lapituletti.dir/clean

CMakeFiles/CF_Planet_Lapituletti.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\CPP Contest" "F:\CPP Contest" "F:\CPP Contest\cmake-build-debug" "F:\CPP Contest\cmake-build-debug" "F:\CPP Contest\cmake-build-debug\CMakeFiles\CF_Planet_Lapituletti.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CF_Planet_Lapituletti.dir/depend


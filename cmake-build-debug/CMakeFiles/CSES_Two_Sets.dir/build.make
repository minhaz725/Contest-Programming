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
include CMakeFiles/CSES_Two_Sets.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CSES_Two_Sets.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CSES_Two_Sets.dir/flags.make

CMakeFiles/CSES_Two_Sets.dir/CSES/CSES_Two_Sets.cpp.obj: CMakeFiles/CSES_Two_Sets.dir/flags.make
CMakeFiles/CSES_Two_Sets.dir/CSES/CSES_Two_Sets.cpp.obj: ../CSES/CSES_Two_Sets.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\CPP Contest\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CSES_Two_Sets.dir/CSES/CSES_Two_Sets.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CSES_Two_Sets.dir\CSES\CSES_Two_Sets.cpp.obj -c "F:\CPP Contest\CSES\CSES_Two_Sets.cpp"

CMakeFiles/CSES_Two_Sets.dir/CSES/CSES_Two_Sets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSES_Two_Sets.dir/CSES/CSES_Two_Sets.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\CPP Contest\CSES\CSES_Two_Sets.cpp" > CMakeFiles\CSES_Two_Sets.dir\CSES\CSES_Two_Sets.cpp.i

CMakeFiles/CSES_Two_Sets.dir/CSES/CSES_Two_Sets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSES_Two_Sets.dir/CSES/CSES_Two_Sets.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\CPP Contest\CSES\CSES_Two_Sets.cpp" -o CMakeFiles\CSES_Two_Sets.dir\CSES\CSES_Two_Sets.cpp.s

# Object files for target CSES_Two_Sets
CSES_Two_Sets_OBJECTS = \
"CMakeFiles/CSES_Two_Sets.dir/CSES/CSES_Two_Sets.cpp.obj"

# External object files for target CSES_Two_Sets
CSES_Two_Sets_EXTERNAL_OBJECTS =

CSES_Two_Sets.exe: CMakeFiles/CSES_Two_Sets.dir/CSES/CSES_Two_Sets.cpp.obj
CSES_Two_Sets.exe: CMakeFiles/CSES_Two_Sets.dir/build.make
CSES_Two_Sets.exe: CMakeFiles/CSES_Two_Sets.dir/linklibs.rsp
CSES_Two_Sets.exe: CMakeFiles/CSES_Two_Sets.dir/objects1.rsp
CSES_Two_Sets.exe: CMakeFiles/CSES_Two_Sets.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\CPP Contest\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CSES_Two_Sets.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CSES_Two_Sets.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CSES_Two_Sets.dir/build: CSES_Two_Sets.exe

.PHONY : CMakeFiles/CSES_Two_Sets.dir/build

CMakeFiles/CSES_Two_Sets.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CSES_Two_Sets.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CSES_Two_Sets.dir/clean

CMakeFiles/CSES_Two_Sets.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\CPP Contest" "F:\CPP Contest" "F:\CPP Contest\cmake-build-debug" "F:\CPP Contest\cmake-build-debug" "F:\CPP Contest\cmake-build-debug\CMakeFiles\CSES_Two_Sets.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CSES_Two_Sets.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\HocTap\C\ex\assignment

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\HocTap\C\ex\assignment\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/assignment.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/assignment.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assignment.dir/flags.make

CMakeFiles/assignment.dir/main.c.obj: CMakeFiles/assignment.dir/flags.make
CMakeFiles/assignment.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\HocTap\C\ex\assignment\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/assignment.dir/main.c.obj"
	C:\minggw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\assignment.dir\main.c.obj   -c D:\HocTap\C\ex\assignment\main.c

CMakeFiles/assignment.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assignment.dir/main.c.i"
	C:\minggw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\HocTap\C\ex\assignment\main.c > CMakeFiles\assignment.dir\main.c.i

CMakeFiles/assignment.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assignment.dir/main.c.s"
	C:\minggw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\HocTap\C\ex\assignment\main.c -o CMakeFiles\assignment.dir\main.c.s

CMakeFiles/assignment.dir/main.c.obj.requires:

.PHONY : CMakeFiles/assignment.dir/main.c.obj.requires

CMakeFiles/assignment.dir/main.c.obj.provides: CMakeFiles/assignment.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\assignment.dir\build.make CMakeFiles/assignment.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/assignment.dir/main.c.obj.provides

CMakeFiles/assignment.dir/main.c.obj.provides.build: CMakeFiles/assignment.dir/main.c.obj


# Object files for target assignment
assignment_OBJECTS = \
"CMakeFiles/assignment.dir/main.c.obj"

# External object files for target assignment
assignment_EXTERNAL_OBJECTS =

assignment.exe: CMakeFiles/assignment.dir/main.c.obj
assignment.exe: CMakeFiles/assignment.dir/build.make
assignment.exe: CMakeFiles/assignment.dir/linklibs.rsp
assignment.exe: CMakeFiles/assignment.dir/objects1.rsp
assignment.exe: CMakeFiles/assignment.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\HocTap\C\ex\assignment\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable assignment.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\assignment.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assignment.dir/build: assignment.exe

.PHONY : CMakeFiles/assignment.dir/build

CMakeFiles/assignment.dir/requires: CMakeFiles/assignment.dir/main.c.obj.requires

.PHONY : CMakeFiles/assignment.dir/requires

CMakeFiles/assignment.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\assignment.dir\cmake_clean.cmake
.PHONY : CMakeFiles/assignment.dir/clean

CMakeFiles/assignment.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\HocTap\C\ex\assignment D:\HocTap\C\ex\assignment D:\HocTap\C\ex\assignment\cmake-build-debug D:\HocTap\C\ex\assignment\cmake-build-debug D:\HocTap\C\ex\assignment\cmake-build-debug\CMakeFiles\assignment.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/assignment.dir/depend

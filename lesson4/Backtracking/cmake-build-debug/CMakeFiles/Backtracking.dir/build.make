# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/miketsatryan/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/191.7479.33/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/miketsatryan/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/191.7479.33/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/Backtracking

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/Backtracking/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Backtracking.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Backtracking.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Backtracking.dir/flags.make

CMakeFiles/Backtracking.dir/main.c.o: CMakeFiles/Backtracking.dir/flags.make
CMakeFiles/Backtracking.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/Backtracking/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Backtracking.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Backtracking.dir/main.c.o   -c /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/Backtracking/main.c

CMakeFiles/Backtracking.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Backtracking.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/Backtracking/main.c > CMakeFiles/Backtracking.dir/main.c.i

CMakeFiles/Backtracking.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Backtracking.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/Backtracking/main.c -o CMakeFiles/Backtracking.dir/main.c.s

# Object files for target Backtracking
Backtracking_OBJECTS = \
"CMakeFiles/Backtracking.dir/main.c.o"

# External object files for target Backtracking
Backtracking_EXTERNAL_OBJECTS =

Backtracking: CMakeFiles/Backtracking.dir/main.c.o
Backtracking: CMakeFiles/Backtracking.dir/build.make
Backtracking: CMakeFiles/Backtracking.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/Backtracking/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Backtracking"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Backtracking.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Backtracking.dir/build: Backtracking

.PHONY : CMakeFiles/Backtracking.dir/build

CMakeFiles/Backtracking.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Backtracking.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Backtracking.dir/clean

CMakeFiles/Backtracking.dir/depend:
	cd /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/Backtracking/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/Backtracking /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/Backtracking /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/Backtracking/cmake-build-debug /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/Backtracking/cmake-build-debug /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/Backtracking/cmake-build-debug/CMakeFiles/Backtracking.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Backtracking.dir/depend

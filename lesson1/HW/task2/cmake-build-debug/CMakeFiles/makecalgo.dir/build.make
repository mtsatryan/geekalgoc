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
CMAKE_SOURCE_DIR = /Users/miketsatryan/Desktop/makecalgo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/miketsatryan/Desktop/makecalgo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/makecalgo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/makecalgo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/makecalgo.dir/flags.make

CMakeFiles/makecalgo.dir/main.c.o: CMakeFiles/makecalgo.dir/flags.make
CMakeFiles/makecalgo.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/miketsatryan/Desktop/makecalgo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/makecalgo.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/makecalgo.dir/main.c.o   -c /Users/miketsatryan/Desktop/makecalgo/main.c

CMakeFiles/makecalgo.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/makecalgo.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/miketsatryan/Desktop/makecalgo/main.c > CMakeFiles/makecalgo.dir/main.c.i

CMakeFiles/makecalgo.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/makecalgo.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/miketsatryan/Desktop/makecalgo/main.c -o CMakeFiles/makecalgo.dir/main.c.s

# Object files for target makecalgo
makecalgo_OBJECTS = \
"CMakeFiles/makecalgo.dir/main.c.o"

# External object files for target makecalgo
makecalgo_EXTERNAL_OBJECTS =

makecalgo: CMakeFiles/makecalgo.dir/main.c.o
makecalgo: CMakeFiles/makecalgo.dir/build.make
makecalgo: CMakeFiles/makecalgo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/miketsatryan/Desktop/makecalgo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable makecalgo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/makecalgo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/makecalgo.dir/build: makecalgo

.PHONY : CMakeFiles/makecalgo.dir/build

CMakeFiles/makecalgo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/makecalgo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/makecalgo.dir/clean

CMakeFiles/makecalgo.dir/depend:
	cd /Users/miketsatryan/Desktop/makecalgo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/miketsatryan/Desktop/makecalgo /Users/miketsatryan/Desktop/makecalgo /Users/miketsatryan/Desktop/makecalgo/cmake-build-debug /Users/miketsatryan/Desktop/makecalgo/cmake-build-debug /Users/miketsatryan/Desktop/makecalgo/cmake-build-debug/CMakeFiles/makecalgo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/makecalgo.dir/depend


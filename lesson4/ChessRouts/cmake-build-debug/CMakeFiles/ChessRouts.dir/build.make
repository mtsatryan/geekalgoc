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
CMAKE_SOURCE_DIR = /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/ChessRouts

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/ChessRouts/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ChessRouts.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ChessRouts.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ChessRouts.dir/flags.make

CMakeFiles/ChessRouts.dir/main.c.o: CMakeFiles/ChessRouts.dir/flags.make
CMakeFiles/ChessRouts.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/ChessRouts/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ChessRouts.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ChessRouts.dir/main.c.o   -c /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/ChessRouts/main.c

CMakeFiles/ChessRouts.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ChessRouts.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/ChessRouts/main.c > CMakeFiles/ChessRouts.dir/main.c.i

CMakeFiles/ChessRouts.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ChessRouts.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/ChessRouts/main.c -o CMakeFiles/ChessRouts.dir/main.c.s

# Object files for target ChessRouts
ChessRouts_OBJECTS = \
"CMakeFiles/ChessRouts.dir/main.c.o"

# External object files for target ChessRouts
ChessRouts_EXTERNAL_OBJECTS =

ChessRouts: CMakeFiles/ChessRouts.dir/main.c.o
ChessRouts: CMakeFiles/ChessRouts.dir/build.make
ChessRouts: CMakeFiles/ChessRouts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/ChessRouts/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ChessRouts"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ChessRouts.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ChessRouts.dir/build: ChessRouts

.PHONY : CMakeFiles/ChessRouts.dir/build

CMakeFiles/ChessRouts.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ChessRouts.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ChessRouts.dir/clean

CMakeFiles/ChessRouts.dir/depend:
	cd /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/ChessRouts/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/ChessRouts /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/ChessRouts /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/ChessRouts/cmake-build-debug /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/ChessRouts/cmake-build-debug /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson4/ChessRouts/cmake-build-debug/CMakeFiles/ChessRouts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ChessRouts.dir/depend


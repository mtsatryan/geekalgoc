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
CMAKE_SOURCE_DIR = /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson3/Example4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson3/Example4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Example4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Example4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Example4.dir/flags.make

CMakeFiles/Example4.dir/main.c.o: CMakeFiles/Example4.dir/flags.make
CMakeFiles/Example4.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/miketsatryan/Documents/GitHub/geekalgoc/lesson3/Example4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Example4.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Example4.dir/main.c.o   -c /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson3/Example4/main.c

CMakeFiles/Example4.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Example4.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson3/Example4/main.c > CMakeFiles/Example4.dir/main.c.i

CMakeFiles/Example4.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Example4.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson3/Example4/main.c -o CMakeFiles/Example4.dir/main.c.s

# Object files for target Example4
Example4_OBJECTS = \
"CMakeFiles/Example4.dir/main.c.o"

# External object files for target Example4
Example4_EXTERNAL_OBJECTS =

Example4: CMakeFiles/Example4.dir/main.c.o
Example4: CMakeFiles/Example4.dir/build.make
Example4: CMakeFiles/Example4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/miketsatryan/Documents/GitHub/geekalgoc/lesson3/Example4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Example4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Example4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Example4.dir/build: Example4

.PHONY : CMakeFiles/Example4.dir/build

CMakeFiles/Example4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Example4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Example4.dir/clean

CMakeFiles/Example4.dir/depend:
	cd /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson3/Example4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson3/Example4 /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson3/Example4 /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson3/Example4/cmake-build-debug /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson3/Example4/cmake-build-debug /Users/miketsatryan/Documents/GitHub/geekalgoc/lesson3/Example4/cmake-build-debug/CMakeFiles/Example4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Example4.dir/depend


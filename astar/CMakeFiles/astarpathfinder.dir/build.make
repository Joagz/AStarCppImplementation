# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/joagz/Desktop/c++-astar/source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/joagz/Desktop/c++-astar

# Include any dependencies generated for this target.
include astar/CMakeFiles/astarpathfinder.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include astar/CMakeFiles/astarpathfinder.dir/compiler_depend.make

# Include the progress variables for this target.
include astar/CMakeFiles/astarpathfinder.dir/progress.make

# Include the compile flags for this target's objects.
include astar/CMakeFiles/astarpathfinder.dir/flags.make

astar/CMakeFiles/astarpathfinder.dir/astarpathfinder.cc.o: astar/CMakeFiles/astarpathfinder.dir/flags.make
astar/CMakeFiles/astarpathfinder.dir/astarpathfinder.cc.o: /home/joagz/Desktop/c++-astar/source/astar/astarpathfinder.cc
astar/CMakeFiles/astarpathfinder.dir/astarpathfinder.cc.o: astar/CMakeFiles/astarpathfinder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/joagz/Desktop/c++-astar/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object astar/CMakeFiles/astarpathfinder.dir/astarpathfinder.cc.o"
	cd /home/joagz/Desktop/c++-astar/astar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT astar/CMakeFiles/astarpathfinder.dir/astarpathfinder.cc.o -MF CMakeFiles/astarpathfinder.dir/astarpathfinder.cc.o.d -o CMakeFiles/astarpathfinder.dir/astarpathfinder.cc.o -c /home/joagz/Desktop/c++-astar/source/astar/astarpathfinder.cc

astar/CMakeFiles/astarpathfinder.dir/astarpathfinder.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/astarpathfinder.dir/astarpathfinder.cc.i"
	cd /home/joagz/Desktop/c++-astar/astar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joagz/Desktop/c++-astar/source/astar/astarpathfinder.cc > CMakeFiles/astarpathfinder.dir/astarpathfinder.cc.i

astar/CMakeFiles/astarpathfinder.dir/astarpathfinder.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/astarpathfinder.dir/astarpathfinder.cc.s"
	cd /home/joagz/Desktop/c++-astar/astar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joagz/Desktop/c++-astar/source/astar/astarpathfinder.cc -o CMakeFiles/astarpathfinder.dir/astarpathfinder.cc.s

astar/CMakeFiles/astarpathfinder.dir/astarnode.cc.o: astar/CMakeFiles/astarpathfinder.dir/flags.make
astar/CMakeFiles/astarpathfinder.dir/astarnode.cc.o: /home/joagz/Desktop/c++-astar/source/astar/astarnode.cc
astar/CMakeFiles/astarpathfinder.dir/astarnode.cc.o: astar/CMakeFiles/astarpathfinder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/joagz/Desktop/c++-astar/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object astar/CMakeFiles/astarpathfinder.dir/astarnode.cc.o"
	cd /home/joagz/Desktop/c++-astar/astar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT astar/CMakeFiles/astarpathfinder.dir/astarnode.cc.o -MF CMakeFiles/astarpathfinder.dir/astarnode.cc.o.d -o CMakeFiles/astarpathfinder.dir/astarnode.cc.o -c /home/joagz/Desktop/c++-astar/source/astar/astarnode.cc

astar/CMakeFiles/astarpathfinder.dir/astarnode.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/astarpathfinder.dir/astarnode.cc.i"
	cd /home/joagz/Desktop/c++-astar/astar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joagz/Desktop/c++-astar/source/astar/astarnode.cc > CMakeFiles/astarpathfinder.dir/astarnode.cc.i

astar/CMakeFiles/astarpathfinder.dir/astarnode.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/astarpathfinder.dir/astarnode.cc.s"
	cd /home/joagz/Desktop/c++-astar/astar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joagz/Desktop/c++-astar/source/astar/astarnode.cc -o CMakeFiles/astarpathfinder.dir/astarnode.cc.s

astar/CMakeFiles/astarpathfinder.dir/binheap.cc.o: astar/CMakeFiles/astarpathfinder.dir/flags.make
astar/CMakeFiles/astarpathfinder.dir/binheap.cc.o: /home/joagz/Desktop/c++-astar/source/astar/binheap.cc
astar/CMakeFiles/astarpathfinder.dir/binheap.cc.o: astar/CMakeFiles/astarpathfinder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/joagz/Desktop/c++-astar/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object astar/CMakeFiles/astarpathfinder.dir/binheap.cc.o"
	cd /home/joagz/Desktop/c++-astar/astar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT astar/CMakeFiles/astarpathfinder.dir/binheap.cc.o -MF CMakeFiles/astarpathfinder.dir/binheap.cc.o.d -o CMakeFiles/astarpathfinder.dir/binheap.cc.o -c /home/joagz/Desktop/c++-astar/source/astar/binheap.cc

astar/CMakeFiles/astarpathfinder.dir/binheap.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/astarpathfinder.dir/binheap.cc.i"
	cd /home/joagz/Desktop/c++-astar/astar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joagz/Desktop/c++-astar/source/astar/binheap.cc > CMakeFiles/astarpathfinder.dir/binheap.cc.i

astar/CMakeFiles/astarpathfinder.dir/binheap.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/astarpathfinder.dir/binheap.cc.s"
	cd /home/joagz/Desktop/c++-astar/astar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joagz/Desktop/c++-astar/source/astar/binheap.cc -o CMakeFiles/astarpathfinder.dir/binheap.cc.s

# Object files for target astarpathfinder
astarpathfinder_OBJECTS = \
"CMakeFiles/astarpathfinder.dir/astarpathfinder.cc.o" \
"CMakeFiles/astarpathfinder.dir/astarnode.cc.o" \
"CMakeFiles/astarpathfinder.dir/binheap.cc.o"

# External object files for target astarpathfinder
astarpathfinder_EXTERNAL_OBJECTS =

astar/libastarpathfinder.a: astar/CMakeFiles/astarpathfinder.dir/astarpathfinder.cc.o
astar/libastarpathfinder.a: astar/CMakeFiles/astarpathfinder.dir/astarnode.cc.o
astar/libastarpathfinder.a: astar/CMakeFiles/astarpathfinder.dir/binheap.cc.o
astar/libastarpathfinder.a: astar/CMakeFiles/astarpathfinder.dir/build.make
astar/libastarpathfinder.a: astar/CMakeFiles/astarpathfinder.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/joagz/Desktop/c++-astar/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libastarpathfinder.a"
	cd /home/joagz/Desktop/c++-astar/astar && $(CMAKE_COMMAND) -P CMakeFiles/astarpathfinder.dir/cmake_clean_target.cmake
	cd /home/joagz/Desktop/c++-astar/astar && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/astarpathfinder.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
astar/CMakeFiles/astarpathfinder.dir/build: astar/libastarpathfinder.a
.PHONY : astar/CMakeFiles/astarpathfinder.dir/build

astar/CMakeFiles/astarpathfinder.dir/clean:
	cd /home/joagz/Desktop/c++-astar/astar && $(CMAKE_COMMAND) -P CMakeFiles/astarpathfinder.dir/cmake_clean.cmake
.PHONY : astar/CMakeFiles/astarpathfinder.dir/clean

astar/CMakeFiles/astarpathfinder.dir/depend:
	cd /home/joagz/Desktop/c++-astar && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joagz/Desktop/c++-astar/source /home/joagz/Desktop/c++-astar/source/astar /home/joagz/Desktop/c++-astar /home/joagz/Desktop/c++-astar/astar /home/joagz/Desktop/c++-astar/astar/CMakeFiles/astarpathfinder.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : astar/CMakeFiles/astarpathfinder.dir/depend


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
include CMakeFiles/Astar.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Astar.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Astar.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Astar.dir/flags.make

CMakeFiles/Astar.dir/astar.cc.o: CMakeFiles/Astar.dir/flags.make
CMakeFiles/Astar.dir/astar.cc.o: /home/joagz/Desktop/c++-astar/source/astar.cc
CMakeFiles/Astar.dir/astar.cc.o: CMakeFiles/Astar.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/joagz/Desktop/c++-astar/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Astar.dir/astar.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Astar.dir/astar.cc.o -MF CMakeFiles/Astar.dir/astar.cc.o.d -o CMakeFiles/Astar.dir/astar.cc.o -c /home/joagz/Desktop/c++-astar/source/astar.cc

CMakeFiles/Astar.dir/astar.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Astar.dir/astar.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joagz/Desktop/c++-astar/source/astar.cc > CMakeFiles/Astar.dir/astar.cc.i

CMakeFiles/Astar.dir/astar.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Astar.dir/astar.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joagz/Desktop/c++-astar/source/astar.cc -o CMakeFiles/Astar.dir/astar.cc.s

CMakeFiles/Astar.dir/astar/astarnode.cc.o: CMakeFiles/Astar.dir/flags.make
CMakeFiles/Astar.dir/astar/astarnode.cc.o: /home/joagz/Desktop/c++-astar/source/astar/astarnode.cc
CMakeFiles/Astar.dir/astar/astarnode.cc.o: CMakeFiles/Astar.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/joagz/Desktop/c++-astar/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Astar.dir/astar/astarnode.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Astar.dir/astar/astarnode.cc.o -MF CMakeFiles/Astar.dir/astar/astarnode.cc.o.d -o CMakeFiles/Astar.dir/astar/astarnode.cc.o -c /home/joagz/Desktop/c++-astar/source/astar/astarnode.cc

CMakeFiles/Astar.dir/astar/astarnode.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Astar.dir/astar/astarnode.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joagz/Desktop/c++-astar/source/astar/astarnode.cc > CMakeFiles/Astar.dir/astar/astarnode.cc.i

CMakeFiles/Astar.dir/astar/astarnode.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Astar.dir/astar/astarnode.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joagz/Desktop/c++-astar/source/astar/astarnode.cc -o CMakeFiles/Astar.dir/astar/astarnode.cc.s

# Object files for target Astar
Astar_OBJECTS = \
"CMakeFiles/Astar.dir/astar.cc.o" \
"CMakeFiles/Astar.dir/astar/astarnode.cc.o"

# External object files for target Astar
Astar_EXTERNAL_OBJECTS =

Astar: CMakeFiles/Astar.dir/astar.cc.o
Astar: CMakeFiles/Astar.dir/astar/astarnode.cc.o
Astar: CMakeFiles/Astar.dir/build.make
Astar: astar/libastarpathfinder.a
Astar: map/libmap.a
Astar: CMakeFiles/Astar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/joagz/Desktop/c++-astar/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Astar"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Astar.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Astar.dir/build: Astar
.PHONY : CMakeFiles/Astar.dir/build

CMakeFiles/Astar.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Astar.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Astar.dir/clean

CMakeFiles/Astar.dir/depend:
	cd /home/joagz/Desktop/c++-astar && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joagz/Desktop/c++-astar/source /home/joagz/Desktop/c++-astar/source /home/joagz/Desktop/c++-astar /home/joagz/Desktop/c++-astar /home/joagz/Desktop/c++-astar/CMakeFiles/Astar.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Astar.dir/depend


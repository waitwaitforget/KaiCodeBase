# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.27.5/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.27.5/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kai/Documents/learn/cpp/leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kai/Documents/learn/cpp/leetcode/build

# Include any dependencies generated for this target.
include array/CMakeFiles/array.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include array/CMakeFiles/array.dir/compiler_depend.make

# Include the progress variables for this target.
include array/CMakeFiles/array.dir/progress.make

# Include the compile flags for this target's objects.
include array/CMakeFiles/array.dir/flags.make

array/CMakeFiles/array.dir/arry.cc.o: array/CMakeFiles/array.dir/flags.make
array/CMakeFiles/array.dir/arry.cc.o: /Users/kai/Documents/learn/cpp/leetcode/array/arry.cc
array/CMakeFiles/array.dir/arry.cc.o: array/CMakeFiles/array.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/kai/Documents/learn/cpp/leetcode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object array/CMakeFiles/array.dir/arry.cc.o"
	cd /Users/kai/Documents/learn/cpp/leetcode/build/array && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT array/CMakeFiles/array.dir/arry.cc.o -MF CMakeFiles/array.dir/arry.cc.o.d -o CMakeFiles/array.dir/arry.cc.o -c /Users/kai/Documents/learn/cpp/leetcode/array/arry.cc

array/CMakeFiles/array.dir/arry.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/array.dir/arry.cc.i"
	cd /Users/kai/Documents/learn/cpp/leetcode/build/array && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kai/Documents/learn/cpp/leetcode/array/arry.cc > CMakeFiles/array.dir/arry.cc.i

array/CMakeFiles/array.dir/arry.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/array.dir/arry.cc.s"
	cd /Users/kai/Documents/learn/cpp/leetcode/build/array && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kai/Documents/learn/cpp/leetcode/array/arry.cc -o CMakeFiles/array.dir/arry.cc.s

array/CMakeFiles/array.dir/lc307_segment_tree.cc.o: array/CMakeFiles/array.dir/flags.make
array/CMakeFiles/array.dir/lc307_segment_tree.cc.o: /Users/kai/Documents/learn/cpp/leetcode/array/lc307_segment_tree.cc
array/CMakeFiles/array.dir/lc307_segment_tree.cc.o: array/CMakeFiles/array.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/kai/Documents/learn/cpp/leetcode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object array/CMakeFiles/array.dir/lc307_segment_tree.cc.o"
	cd /Users/kai/Documents/learn/cpp/leetcode/build/array && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT array/CMakeFiles/array.dir/lc307_segment_tree.cc.o -MF CMakeFiles/array.dir/lc307_segment_tree.cc.o.d -o CMakeFiles/array.dir/lc307_segment_tree.cc.o -c /Users/kai/Documents/learn/cpp/leetcode/array/lc307_segment_tree.cc

array/CMakeFiles/array.dir/lc307_segment_tree.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/array.dir/lc307_segment_tree.cc.i"
	cd /Users/kai/Documents/learn/cpp/leetcode/build/array && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kai/Documents/learn/cpp/leetcode/array/lc307_segment_tree.cc > CMakeFiles/array.dir/lc307_segment_tree.cc.i

array/CMakeFiles/array.dir/lc307_segment_tree.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/array.dir/lc307_segment_tree.cc.s"
	cd /Users/kai/Documents/learn/cpp/leetcode/build/array && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kai/Documents/learn/cpp/leetcode/array/lc307_segment_tree.cc -o CMakeFiles/array.dir/lc307_segment_tree.cc.s

# Object files for target array
array_OBJECTS = \
"CMakeFiles/array.dir/arry.cc.o" \
"CMakeFiles/array.dir/lc307_segment_tree.cc.o"

# External object files for target array
array_EXTERNAL_OBJECTS =

array/libarray.a: array/CMakeFiles/array.dir/arry.cc.o
array/libarray.a: array/CMakeFiles/array.dir/lc307_segment_tree.cc.o
array/libarray.a: array/CMakeFiles/array.dir/build.make
array/libarray.a: array/CMakeFiles/array.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/kai/Documents/learn/cpp/leetcode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libarray.a"
	cd /Users/kai/Documents/learn/cpp/leetcode/build/array && $(CMAKE_COMMAND) -P CMakeFiles/array.dir/cmake_clean_target.cmake
	cd /Users/kai/Documents/learn/cpp/leetcode/build/array && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/array.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
array/CMakeFiles/array.dir/build: array/libarray.a
.PHONY : array/CMakeFiles/array.dir/build

array/CMakeFiles/array.dir/clean:
	cd /Users/kai/Documents/learn/cpp/leetcode/build/array && $(CMAKE_COMMAND) -P CMakeFiles/array.dir/cmake_clean.cmake
.PHONY : array/CMakeFiles/array.dir/clean

array/CMakeFiles/array.dir/depend:
	cd /Users/kai/Documents/learn/cpp/leetcode/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kai/Documents/learn/cpp/leetcode /Users/kai/Documents/learn/cpp/leetcode/array /Users/kai/Documents/learn/cpp/leetcode/build /Users/kai/Documents/learn/cpp/leetcode/build/array /Users/kai/Documents/learn/cpp/leetcode/build/array/CMakeFiles/array.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : array/CMakeFiles/array.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.30.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.30.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/build

# Include any dependencies generated for this target.
include CMakeFiles/DataStructures.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/DataStructures.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/DataStructures.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DataStructures.dir/flags.make

CMakeFiles/DataStructures.dir/src/LinkedList.cpp.o: CMakeFiles/DataStructures.dir/flags.make
CMakeFiles/DataStructures.dir/src/LinkedList.cpp.o: /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/src/LinkedList.cpp
CMakeFiles/DataStructures.dir/src/LinkedList.cpp.o: CMakeFiles/DataStructures.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DataStructures.dir/src/LinkedList.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DataStructures.dir/src/LinkedList.cpp.o -MF CMakeFiles/DataStructures.dir/src/LinkedList.cpp.o.d -o CMakeFiles/DataStructures.dir/src/LinkedList.cpp.o -c /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/src/LinkedList.cpp

CMakeFiles/DataStructures.dir/src/LinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DataStructures.dir/src/LinkedList.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/src/LinkedList.cpp > CMakeFiles/DataStructures.dir/src/LinkedList.cpp.i

CMakeFiles/DataStructures.dir/src/LinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DataStructures.dir/src/LinkedList.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/src/LinkedList.cpp -o CMakeFiles/DataStructures.dir/src/LinkedList.cpp.s

CMakeFiles/DataStructures.dir/src/main.cpp.o: CMakeFiles/DataStructures.dir/flags.make
CMakeFiles/DataStructures.dir/src/main.cpp.o: /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/src/main.cpp
CMakeFiles/DataStructures.dir/src/main.cpp.o: CMakeFiles/DataStructures.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DataStructures.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DataStructures.dir/src/main.cpp.o -MF CMakeFiles/DataStructures.dir/src/main.cpp.o.d -o CMakeFiles/DataStructures.dir/src/main.cpp.o -c /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/src/main.cpp

CMakeFiles/DataStructures.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DataStructures.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/src/main.cpp > CMakeFiles/DataStructures.dir/src/main.cpp.i

CMakeFiles/DataStructures.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DataStructures.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/src/main.cpp -o CMakeFiles/DataStructures.dir/src/main.cpp.s

# Object files for target DataStructures
DataStructures_OBJECTS = \
"CMakeFiles/DataStructures.dir/src/LinkedList.cpp.o" \
"CMakeFiles/DataStructures.dir/src/main.cpp.o"

# External object files for target DataStructures
DataStructures_EXTERNAL_OBJECTS =

DataStructures: CMakeFiles/DataStructures.dir/src/LinkedList.cpp.o
DataStructures: CMakeFiles/DataStructures.dir/src/main.cpp.o
DataStructures: CMakeFiles/DataStructures.dir/build.make
DataStructures: CMakeFiles/DataStructures.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable DataStructures"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DataStructures.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DataStructures.dir/build: DataStructures
.PHONY : CMakeFiles/DataStructures.dir/build

CMakeFiles/DataStructures.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DataStructures.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DataStructures.dir/clean

CMakeFiles/DataStructures.dir/depend:
	cd /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/build /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/build /Users/deanwilson/development/cpp/courses/cpp-data-structures-and-algorithms-and-leetcode-exercises/build/CMakeFiles/DataStructures.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/DataStructures.dir/depend


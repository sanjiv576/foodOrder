# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/user/CLionProjects/foodOrdering

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/user/CLionProjects/foodOrdering/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/myDatabase.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/myDatabase.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myDatabase.dir/flags.make

CMakeFiles/myDatabase.dir/database.cpp.o: CMakeFiles/myDatabase.dir/flags.make
CMakeFiles/myDatabase.dir/database.cpp.o: ../database.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/user/CLionProjects/foodOrdering/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/myDatabase.dir/database.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myDatabase.dir/database.cpp.o -c /Users/user/CLionProjects/foodOrdering/database.cpp

CMakeFiles/myDatabase.dir/database.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myDatabase.dir/database.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/user/CLionProjects/foodOrdering/database.cpp > CMakeFiles/myDatabase.dir/database.cpp.i

CMakeFiles/myDatabase.dir/database.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myDatabase.dir/database.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/user/CLionProjects/foodOrdering/database.cpp -o CMakeFiles/myDatabase.dir/database.cpp.s

# Object files for target myDatabase
myDatabase_OBJECTS = \
"CMakeFiles/myDatabase.dir/database.cpp.o"

# External object files for target myDatabase
myDatabase_EXTERNAL_OBJECTS =

myDatabase: CMakeFiles/myDatabase.dir/database.cpp.o
myDatabase: CMakeFiles/myDatabase.dir/build.make
myDatabase: CMakeFiles/myDatabase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/user/CLionProjects/foodOrdering/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable myDatabase"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myDatabase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myDatabase.dir/build: myDatabase
.PHONY : CMakeFiles/myDatabase.dir/build

CMakeFiles/myDatabase.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myDatabase.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myDatabase.dir/clean

CMakeFiles/myDatabase.dir/depend:
	cd /Users/user/CLionProjects/foodOrdering/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/user/CLionProjects/foodOrdering /Users/user/CLionProjects/foodOrdering /Users/user/CLionProjects/foodOrdering/cmake-build-debug /Users/user/CLionProjects/foodOrdering/cmake-build-debug /Users/user/CLionProjects/foodOrdering/cmake-build-debug/CMakeFiles/myDatabase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myDatabase.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.25.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.25.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dmitrijsusenko/Desktop/try

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dmitrijsusenko/Desktop/try

# Include any dependencies generated for this target.
include CMakeFiles/MyApplic.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyApplic.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyApplic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyApplic.dir/flags.make

CMakeFiles/MyApplic.dir/MyApplication/main.cpp.o: CMakeFiles/MyApplic.dir/flags.make
CMakeFiles/MyApplic.dir/MyApplication/main.cpp.o: MyApplication/main.cpp
CMakeFiles/MyApplic.dir/MyApplication/main.cpp.o: CMakeFiles/MyApplic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dmitrijsusenko/Desktop/try/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyApplic.dir/MyApplication/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyApplic.dir/MyApplication/main.cpp.o -MF CMakeFiles/MyApplic.dir/MyApplication/main.cpp.o.d -o CMakeFiles/MyApplic.dir/MyApplication/main.cpp.o -c /Users/dmitrijsusenko/Desktop/try/MyApplication/main.cpp

CMakeFiles/MyApplic.dir/MyApplication/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyApplic.dir/MyApplication/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dmitrijsusenko/Desktop/try/MyApplication/main.cpp > CMakeFiles/MyApplic.dir/MyApplication/main.cpp.i

CMakeFiles/MyApplic.dir/MyApplication/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyApplic.dir/MyApplication/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dmitrijsusenko/Desktop/try/MyApplication/main.cpp -o CMakeFiles/MyApplic.dir/MyApplication/main.cpp.s

# Object files for target MyApplic
MyApplic_OBJECTS = \
"CMakeFiles/MyApplic.dir/MyApplication/main.cpp.o"

# External object files for target MyApplic
MyApplic_EXTERNAL_OBJECTS =

MyApplic: CMakeFiles/MyApplic.dir/MyApplication/main.cpp.o
MyApplic: CMakeFiles/MyApplic.dir/build.make
MyApplic: /usr/local/lib/libsfml-graphics.2.5.1.dylib
MyApplic: /usr/local/lib/libsfml-window.2.5.1.dylib
MyApplic: /usr/local/lib/libsfml-system.2.5.1.dylib
MyApplic: CMakeFiles/MyApplic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dmitrijsusenko/Desktop/try/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MyApplic"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyApplic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyApplic.dir/build: MyApplic
.PHONY : CMakeFiles/MyApplic.dir/build

CMakeFiles/MyApplic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyApplic.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyApplic.dir/clean

CMakeFiles/MyApplic.dir/depend:
	cd /Users/dmitrijsusenko/Desktop/try && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dmitrijsusenko/Desktop/try /Users/dmitrijsusenko/Desktop/try /Users/dmitrijsusenko/Desktop/try /Users/dmitrijsusenko/Desktop/try /Users/dmitrijsusenko/Desktop/try/CMakeFiles/MyApplic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyApplic.dir/depend


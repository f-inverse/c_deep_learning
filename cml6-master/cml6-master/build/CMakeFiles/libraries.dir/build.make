# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /root/cml6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/cml6/build

# Include any dependencies generated for this target.
include CMakeFiles/libraries.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/libraries.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/libraries.dir/flags.make

CMakeFiles/libraries.dir/src/brute_force.cpp.o: CMakeFiles/libraries.dir/flags.make
CMakeFiles/libraries.dir/src/brute_force.cpp.o: ../src/brute_force.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/cml6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/libraries.dir/src/brute_force.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libraries.dir/src/brute_force.cpp.o -c /root/cml6/src/brute_force.cpp

CMakeFiles/libraries.dir/src/brute_force.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libraries.dir/src/brute_force.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/cml6/src/brute_force.cpp > CMakeFiles/libraries.dir/src/brute_force.cpp.i

CMakeFiles/libraries.dir/src/brute_force.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libraries.dir/src/brute_force.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/cml6/src/brute_force.cpp -o CMakeFiles/libraries.dir/src/brute_force.cpp.s

# Object files for target libraries
libraries_OBJECTS = \
"CMakeFiles/libraries.dir/src/brute_force.cpp.o"

# External object files for target libraries
libraries_EXTERNAL_OBJECTS =

liblibraries.a: CMakeFiles/libraries.dir/src/brute_force.cpp.o
liblibraries.a: CMakeFiles/libraries.dir/build.make
liblibraries.a: CMakeFiles/libraries.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/cml6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblibraries.a"
	$(CMAKE_COMMAND) -P CMakeFiles/libraries.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libraries.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/libraries.dir/build: liblibraries.a

.PHONY : CMakeFiles/libraries.dir/build

CMakeFiles/libraries.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/libraries.dir/cmake_clean.cmake
.PHONY : CMakeFiles/libraries.dir/clean

CMakeFiles/libraries.dir/depend:
	cd /root/cml6/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/cml6 /root/cml6 /root/cml6/build /root/cml6/build /root/cml6/build/CMakeFiles/libraries.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/libraries.dir/depend

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
CMAKE_COMMAND = /snap/clion/169/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/169/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/darya/CLionProjects/project_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/darya/CLionProjects/project_2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/project_2.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/project_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project_2.dir/flags.make

CMakeFiles/project_2.dir/main.cpp.o: CMakeFiles/project_2.dir/flags.make
CMakeFiles/project_2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darya/CLionProjects/project_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project_2.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_2.dir/main.cpp.o -c /home/darya/CLionProjects/project_2/main.cpp

CMakeFiles/project_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/CLionProjects/project_2/main.cpp > CMakeFiles/project_2.dir/main.cpp.i

CMakeFiles/project_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/CLionProjects/project_2/main.cpp -o CMakeFiles/project_2.dir/main.cpp.s

CMakeFiles/project_2.dir/airplane.cpp.o: CMakeFiles/project_2.dir/flags.make
CMakeFiles/project_2.dir/airplane.cpp.o: ../airplane.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darya/CLionProjects/project_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project_2.dir/airplane.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_2.dir/airplane.cpp.o -c /home/darya/CLionProjects/project_2/airplane.cpp

CMakeFiles/project_2.dir/airplane.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_2.dir/airplane.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/CLionProjects/project_2/airplane.cpp > CMakeFiles/project_2.dir/airplane.cpp.i

CMakeFiles/project_2.dir/airplane.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_2.dir/airplane.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/CLionProjects/project_2/airplane.cpp -o CMakeFiles/project_2.dir/airplane.cpp.s

CMakeFiles/project_2.dir/train.cpp.o: CMakeFiles/project_2.dir/flags.make
CMakeFiles/project_2.dir/train.cpp.o: ../train.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darya/CLionProjects/project_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/project_2.dir/train.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_2.dir/train.cpp.o -c /home/darya/CLionProjects/project_2/train.cpp

CMakeFiles/project_2.dir/train.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_2.dir/train.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/CLionProjects/project_2/train.cpp > CMakeFiles/project_2.dir/train.cpp.i

CMakeFiles/project_2.dir/train.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_2.dir/train.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/CLionProjects/project_2/train.cpp -o CMakeFiles/project_2.dir/train.cpp.s

CMakeFiles/project_2.dir/ship.cpp.o: CMakeFiles/project_2.dir/flags.make
CMakeFiles/project_2.dir/ship.cpp.o: ../ship.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darya/CLionProjects/project_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/project_2.dir/ship.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_2.dir/ship.cpp.o -c /home/darya/CLionProjects/project_2/ship.cpp

CMakeFiles/project_2.dir/ship.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_2.dir/ship.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/CLionProjects/project_2/ship.cpp > CMakeFiles/project_2.dir/ship.cpp.i

CMakeFiles/project_2.dir/ship.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_2.dir/ship.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/CLionProjects/project_2/ship.cpp -o CMakeFiles/project_2.dir/ship.cpp.s

CMakeFiles/project_2.dir/transport.cpp.o: CMakeFiles/project_2.dir/flags.make
CMakeFiles/project_2.dir/transport.cpp.o: ../transport.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darya/CLionProjects/project_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/project_2.dir/transport.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_2.dir/transport.cpp.o -c /home/darya/CLionProjects/project_2/transport.cpp

CMakeFiles/project_2.dir/transport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_2.dir/transport.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/CLionProjects/project_2/transport.cpp > CMakeFiles/project_2.dir/transport.cpp.i

CMakeFiles/project_2.dir/transport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_2.dir/transport.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/CLionProjects/project_2/transport.cpp -o CMakeFiles/project_2.dir/transport.cpp.s

CMakeFiles/project_2.dir/container.cpp.o: CMakeFiles/project_2.dir/flags.make
CMakeFiles/project_2.dir/container.cpp.o: ../container.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darya/CLionProjects/project_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/project_2.dir/container.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_2.dir/container.cpp.o -c /home/darya/CLionProjects/project_2/container.cpp

CMakeFiles/project_2.dir/container.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_2.dir/container.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/CLionProjects/project_2/container.cpp > CMakeFiles/project_2.dir/container.cpp.i

CMakeFiles/project_2.dir/container.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_2.dir/container.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/CLionProjects/project_2/container.cpp -o CMakeFiles/project_2.dir/container.cpp.s

# Object files for target project_2
project_2_OBJECTS = \
"CMakeFiles/project_2.dir/main.cpp.o" \
"CMakeFiles/project_2.dir/airplane.cpp.o" \
"CMakeFiles/project_2.dir/train.cpp.o" \
"CMakeFiles/project_2.dir/ship.cpp.o" \
"CMakeFiles/project_2.dir/transport.cpp.o" \
"CMakeFiles/project_2.dir/container.cpp.o"

# External object files for target project_2
project_2_EXTERNAL_OBJECTS =

project_2: CMakeFiles/project_2.dir/main.cpp.o
project_2: CMakeFiles/project_2.dir/airplane.cpp.o
project_2: CMakeFiles/project_2.dir/train.cpp.o
project_2: CMakeFiles/project_2.dir/ship.cpp.o
project_2: CMakeFiles/project_2.dir/transport.cpp.o
project_2: CMakeFiles/project_2.dir/container.cpp.o
project_2: CMakeFiles/project_2.dir/build.make
project_2: CMakeFiles/project_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/darya/CLionProjects/project_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable project_2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project_2.dir/build: project_2
.PHONY : CMakeFiles/project_2.dir/build

CMakeFiles/project_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project_2.dir/clean

CMakeFiles/project_2.dir/depend:
	cd /home/darya/CLionProjects/project_2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/darya/CLionProjects/project_2 /home/darya/CLionProjects/project_2 /home/darya/CLionProjects/project_2/cmake-build-debug /home/darya/CLionProjects/project_2/cmake-build-debug /home/darya/CLionProjects/project_2/cmake-build-debug/CMakeFiles/project_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project_2.dir/depend


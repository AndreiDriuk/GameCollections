# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/andrey/GameCollections

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andrey/GameCollections/Debug

# Include any dependencies generated for this target.
include CMakeFiles/GameFigure.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/GameFigure.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/GameFigure.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GameFigure.dir/flags.make

CMakeFiles/GameFigure.dir/GameFigure_autogen/mocs_compilation.cpp.o: CMakeFiles/GameFigure.dir/flags.make
CMakeFiles/GameFigure.dir/GameFigure_autogen/mocs_compilation.cpp.o: GameFigure_autogen/mocs_compilation.cpp
CMakeFiles/GameFigure.dir/GameFigure_autogen/mocs_compilation.cpp.o: CMakeFiles/GameFigure.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrey/GameCollections/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GameFigure.dir/GameFigure_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GameFigure.dir/GameFigure_autogen/mocs_compilation.cpp.o -MF CMakeFiles/GameFigure.dir/GameFigure_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/GameFigure.dir/GameFigure_autogen/mocs_compilation.cpp.o -c /home/andrey/GameCollections/Debug/GameFigure_autogen/mocs_compilation.cpp

CMakeFiles/GameFigure.dir/GameFigure_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameFigure.dir/GameFigure_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andrey/GameCollections/Debug/GameFigure_autogen/mocs_compilation.cpp > CMakeFiles/GameFigure.dir/GameFigure_autogen/mocs_compilation.cpp.i

CMakeFiles/GameFigure.dir/GameFigure_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameFigure.dir/GameFigure_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andrey/GameCollections/Debug/GameFigure_autogen/mocs_compilation.cpp -o CMakeFiles/GameFigure.dir/GameFigure_autogen/mocs_compilation.cpp.s

CMakeFiles/GameFigure.dir/main.cpp.o: CMakeFiles/GameFigure.dir/flags.make
CMakeFiles/GameFigure.dir/main.cpp.o: ../main.cpp
CMakeFiles/GameFigure.dir/main.cpp.o: CMakeFiles/GameFigure.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrey/GameCollections/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GameFigure.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GameFigure.dir/main.cpp.o -MF CMakeFiles/GameFigure.dir/main.cpp.o.d -o CMakeFiles/GameFigure.dir/main.cpp.o -c /home/andrey/GameCollections/main.cpp

CMakeFiles/GameFigure.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameFigure.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andrey/GameCollections/main.cpp > CMakeFiles/GameFigure.dir/main.cpp.i

CMakeFiles/GameFigure.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameFigure.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andrey/GameCollections/main.cpp -o CMakeFiles/GameFigure.dir/main.cpp.s

CMakeFiles/GameFigure.dir/mainwindow.cpp.o: CMakeFiles/GameFigure.dir/flags.make
CMakeFiles/GameFigure.dir/mainwindow.cpp.o: ../mainwindow.cpp
CMakeFiles/GameFigure.dir/mainwindow.cpp.o: CMakeFiles/GameFigure.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrey/GameCollections/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GameFigure.dir/mainwindow.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GameFigure.dir/mainwindow.cpp.o -MF CMakeFiles/GameFigure.dir/mainwindow.cpp.o.d -o CMakeFiles/GameFigure.dir/mainwindow.cpp.o -c /home/andrey/GameCollections/mainwindow.cpp

CMakeFiles/GameFigure.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameFigure.dir/mainwindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andrey/GameCollections/mainwindow.cpp > CMakeFiles/GameFigure.dir/mainwindow.cpp.i

CMakeFiles/GameFigure.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameFigure.dir/mainwindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andrey/GameCollections/mainwindow.cpp -o CMakeFiles/GameFigure.dir/mainwindow.cpp.s

# Object files for target GameFigure
GameFigure_OBJECTS = \
"CMakeFiles/GameFigure.dir/GameFigure_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/GameFigure.dir/main.cpp.o" \
"CMakeFiles/GameFigure.dir/mainwindow.cpp.o"

# External object files for target GameFigure
GameFigure_EXTERNAL_OBJECTS =

GameFigure: CMakeFiles/GameFigure.dir/GameFigure_autogen/mocs_compilation.cpp.o
GameFigure: CMakeFiles/GameFigure.dir/main.cpp.o
GameFigure: CMakeFiles/GameFigure.dir/mainwindow.cpp.o
GameFigure: CMakeFiles/GameFigure.dir/build.make
GameFigure: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
GameFigure: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
GameFigure: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
GameFigure: CMakeFiles/GameFigure.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/andrey/GameCollections/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable GameFigure"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GameFigure.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GameFigure.dir/build: GameFigure
.PHONY : CMakeFiles/GameFigure.dir/build

CMakeFiles/GameFigure.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GameFigure.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GameFigure.dir/clean

CMakeFiles/GameFigure.dir/depend:
	cd /home/andrey/GameCollections/Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andrey/GameCollections /home/andrey/GameCollections /home/andrey/GameCollections/Debug /home/andrey/GameCollections/Debug /home/andrey/GameCollections/Debug/CMakeFiles/GameFigure.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GameFigure.dir/depend

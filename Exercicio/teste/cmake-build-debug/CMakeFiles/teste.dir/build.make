# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\joaog\CLionProjects\teste

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\joaog\CLionProjects\teste\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/teste.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/teste.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/teste.dir/flags.make

CMakeFiles/teste.dir/main.c.obj: CMakeFiles/teste.dir/flags.make
CMakeFiles/teste.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\joaog\CLionProjects\teste\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/teste.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\teste.dir\main.c.obj   -c C:\Users\joaog\CLionProjects\teste\main.c

CMakeFiles/teste.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/teste.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\joaog\CLionProjects\teste\main.c > CMakeFiles\teste.dir\main.c.i

CMakeFiles/teste.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/teste.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\joaog\CLionProjects\teste\main.c -o CMakeFiles\teste.dir\main.c.s

CMakeFiles/teste.dir/bibli.c.obj: CMakeFiles/teste.dir/flags.make
CMakeFiles/teste.dir/bibli.c.obj: ../bibli.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\joaog\CLionProjects\teste\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/teste.dir/bibli.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\teste.dir\bibli.c.obj   -c C:\Users\joaog\CLionProjects\teste\bibli.c

CMakeFiles/teste.dir/bibli.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/teste.dir/bibli.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\joaog\CLionProjects\teste\bibli.c > CMakeFiles\teste.dir\bibli.c.i

CMakeFiles/teste.dir/bibli.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/teste.dir/bibli.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\joaog\CLionProjects\teste\bibli.c -o CMakeFiles\teste.dir\bibli.c.s

CMakeFiles/teste.dir/generic.c.obj: CMakeFiles/teste.dir/flags.make
CMakeFiles/teste.dir/generic.c.obj: ../generic.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\joaog\CLionProjects\teste\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/teste.dir/generic.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\teste.dir\generic.c.obj   -c C:\Users\joaog\CLionProjects\teste\generic.c

CMakeFiles/teste.dir/generic.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/teste.dir/generic.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\joaog\CLionProjects\teste\generic.c > CMakeFiles\teste.dir\generic.c.i

CMakeFiles/teste.dir/generic.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/teste.dir/generic.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\joaog\CLionProjects\teste\generic.c -o CMakeFiles\teste.dir\generic.c.s

# Object files for target teste
teste_OBJECTS = \
"CMakeFiles/teste.dir/main.c.obj" \
"CMakeFiles/teste.dir/bibli.c.obj" \
"CMakeFiles/teste.dir/generic.c.obj"

# External object files for target teste
teste_EXTERNAL_OBJECTS =

teste.exe: CMakeFiles/teste.dir/main.c.obj
teste.exe: CMakeFiles/teste.dir/bibli.c.obj
teste.exe: CMakeFiles/teste.dir/generic.c.obj
teste.exe: CMakeFiles/teste.dir/build.make
teste.exe: CMakeFiles/teste.dir/linklibs.rsp
teste.exe: CMakeFiles/teste.dir/objects1.rsp
teste.exe: CMakeFiles/teste.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\joaog\CLionProjects\teste\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable teste.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\teste.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/teste.dir/build: teste.exe

.PHONY : CMakeFiles/teste.dir/build

CMakeFiles/teste.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\teste.dir\cmake_clean.cmake
.PHONY : CMakeFiles/teste.dir/clean

CMakeFiles/teste.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\joaog\CLionProjects\teste C:\Users\joaog\CLionProjects\teste C:\Users\joaog\CLionProjects\teste\cmake-build-debug C:\Users\joaog\CLionProjects\teste\cmake-build-debug C:\Users\joaog\CLionProjects\teste\cmake-build-debug\CMakeFiles\teste.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/teste.dir/depend


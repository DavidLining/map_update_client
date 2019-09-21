# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/workspace/carto_client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/workspace/carto_client/build

# Utility rule file for abseil.

# Include the progress variables for this target.
include CMakeFiles/abseil.dir/progress.make

CMakeFiles/abseil: CMakeFiles/abseil-complete


CMakeFiles/abseil-complete: abseil/src/abseil-stamp/abseil-install
CMakeFiles/abseil-complete: abseil/src/abseil-stamp/abseil-mkdir
CMakeFiles/abseil-complete: abseil/src/abseil-stamp/abseil-download
CMakeFiles/abseil-complete: abseil/src/abseil-stamp/abseil-update
CMakeFiles/abseil-complete: abseil/src/abseil-stamp/abseil-patch
CMakeFiles/abseil-complete: abseil/src/abseil-stamp/abseil-configure
CMakeFiles/abseil-complete: abseil/src/abseil-stamp/abseil-build
CMakeFiles/abseil-complete: abseil/src/abseil-stamp/abseil-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/workspace/carto_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'abseil'"
	/usr/bin/cmake -E make_directory /root/workspace/carto_client/build/CMakeFiles
	/usr/bin/cmake -E touch /root/workspace/carto_client/build/CMakeFiles/abseil-complete
	/usr/bin/cmake -E touch /root/workspace/carto_client/build/abseil/src/abseil-stamp/abseil-done

abseil/src/abseil-stamp/abseil-install: abseil/src/abseil-stamp/abseil-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/workspace/carto_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No install step for 'abseil'"
	cd /root/workspace/carto_client/build/abseil/src/abseil-build && /usr/bin/cmake -E echo_append
	cd /root/workspace/carto_client/build/abseil/src/abseil-build && /usr/bin/cmake -E touch /root/workspace/carto_client/build/abseil/src/abseil-stamp/abseil-install

abseil/src/abseil-stamp/abseil-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/workspace/carto_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Creating directories for 'abseil'"
	/usr/bin/cmake -E make_directory /root/workspace/carto_client/build/abseil/src/abseil
	/usr/bin/cmake -E make_directory /root/workspace/carto_client/build/abseil/src/abseil-build
	/usr/bin/cmake -E make_directory /root/workspace/carto_client/build/abseil
	/usr/bin/cmake -E make_directory /root/workspace/carto_client/build/abseil/tmp
	/usr/bin/cmake -E make_directory /root/workspace/carto_client/build/abseil/src/abseil-stamp
	/usr/bin/cmake -E make_directory /root/workspace/carto_client/build/abseil/src
	/usr/bin/cmake -E touch /root/workspace/carto_client/build/abseil/src/abseil-stamp/abseil-mkdir

abseil/src/abseil-stamp/abseil-download: abseil/src/abseil-stamp/abseil-gitinfo.txt
abseil/src/abseil-stamp/abseil-download: abseil/src/abseil-stamp/abseil-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/workspace/carto_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'abseil'"
	cd /root/workspace/carto_client/build/abseil/src && /usr/bin/cmake -P /root/workspace/carto_client/build/abseil/tmp/abseil-gitclone.cmake
	cd /root/workspace/carto_client/build/abseil/src && /usr/bin/cmake -E touch /root/workspace/carto_client/build/abseil/src/abseil-stamp/abseil-download

abseil/src/abseil-stamp/abseil-update: abseil/src/abseil-stamp/abseil-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/workspace/carto_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Performing update step for 'abseil'"
	cd /root/workspace/carto_client/build/abseil/src/abseil && /usr/bin/cmake -P /root/workspace/carto_client/build/abseil/tmp/abseil-gitupdate.cmake

abseil/src/abseil-stamp/abseil-patch: abseil/src/abseil-stamp/abseil-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/workspace/carto_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "No patch step for 'abseil'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /root/workspace/carto_client/build/abseil/src/abseil-stamp/abseil-patch

abseil/src/abseil-stamp/abseil-configure: abseil/tmp/abseil-cfgcmd.txt
abseil/src/abseil-stamp/abseil-configure: abseil/src/abseil-stamp/abseil-update
abseil/src/abseil-stamp/abseil-configure: abseil/src/abseil-stamp/abseil-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/workspace/carto_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Performing configure step for 'abseil'"
	cd /root/workspace/carto_client/build/abseil/src/abseil-build && /usr/bin/cmake -C/root/workspace/carto_client/build/abseil/tmp/abseil-cache-Release.cmake "-GUnix Makefiles" /root/workspace/carto_client/build/abseil/src/abseil
	cd /root/workspace/carto_client/build/abseil/src/abseil-build && /usr/bin/cmake -E touch /root/workspace/carto_client/build/abseil/src/abseil-stamp/abseil-configure

abseil/src/abseil-stamp/abseil-build: abseil/src/abseil-stamp/abseil-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/workspace/carto_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Performing build step for 'abseil'"
	cd /root/workspace/carto_client/build/abseil/src/abseil-build && /usr/bin/cmake --build /root/workspace/carto_client/build/abseil/src/abseil-build
	cd /root/workspace/carto_client/build/abseil/src/abseil-build && /usr/bin/cmake -E touch /root/workspace/carto_client/build/abseil/src/abseil-stamp/abseil-build

abseil: CMakeFiles/abseil
abseil: CMakeFiles/abseil-complete
abseil: abseil/src/abseil-stamp/abseil-install
abseil: abseil/src/abseil-stamp/abseil-mkdir
abseil: abseil/src/abseil-stamp/abseil-download
abseil: abseil/src/abseil-stamp/abseil-update
abseil: abseil/src/abseil-stamp/abseil-patch
abseil: abseil/src/abseil-stamp/abseil-configure
abseil: abseil/src/abseil-stamp/abseil-build
abseil: CMakeFiles/abseil.dir/build.make

.PHONY : abseil

# Rule to build all files generated by this target.
CMakeFiles/abseil.dir/build: abseil

.PHONY : CMakeFiles/abseil.dir/build

CMakeFiles/abseil.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/abseil.dir/cmake_clean.cmake
.PHONY : CMakeFiles/abseil.dir/clean

CMakeFiles/abseil.dir/depend:
	cd /root/workspace/carto_client/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/workspace/carto_client /root/workspace/carto_client /root/workspace/carto_client/build /root/workspace/carto_client/build /root/workspace/carto_client/build/CMakeFiles/abseil.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/abseil.dir/depend

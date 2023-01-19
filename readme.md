# lfp-cpp-library
This is a repository for a C++ library that handles a set-length input buffer of time series data (e.g., local field potential), performs FFT calculations with FFTW3, and handles a set-length output buffer of FFT spectrums. This repository used Michael Bolus's 'eg-cpp-library' template (https://github.com/CLOCTools/eg-cpp-library).

# Use on Windows Subsystem for Linux

Install C++ Compiler:
- sudo apt-get install build-essential

Install CMake:
- sudo apt-get install cmake

Install pkg-config:
- sudo apt-get install pkg-config

Install FFTW3:
- sudo apt-get install fftw3-dev

Build the project:
- Clone the repository
- Create and go into a build directory (mkdir build && cd build)
- Run CMake (cmake ..)
- Make the library and example scripts (make all)
- You can install the library with (sudo make install)

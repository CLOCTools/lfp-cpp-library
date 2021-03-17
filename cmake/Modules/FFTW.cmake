## use find_package, requires FindFFTW.cmake
find_package(FFTW COMPONENTS)

if(FFTW_FOUND)
  list(APPEND PROJECT_REQUIRED_INCLUDE_DIRS ${FFTW_INCLUDE_DIRS})
else()
  message(FATAL_ERROR "FFTW3 was not found by cmake.")
endif()
## use find_package, requires FindFFTW.cmake
find_package(FFTW)

if(FFTW_FOUND)
  list(APPEND PROJECT_REQUIRED_INCLUDE_DIRS ${FFTW_INCLUDE_DIRS})
  list(APPEND PROJECT_REQUIRED_LIBRARIES_ABSOLUTE_NAME ${FFTW_LIBRARIES})
else()
  message(FATAL_ERROR "FFTW3 was not found by cmake.")
endif()

# e.g., add executable
add_executable(eg_time_buffer eg_time_buffer.cpp)
target_link_libraries(eg_time_buffer PUBLIC ${CMAKE_PROJECT_NAME} ${PROJECT_LIBS})

add_executable(eg_windows eg_windows.cpp)
target_link_libraries(eg_windows PUBLIC ${CMAKE_PROJECT_NAME} ${PROJECT_LIBS})

add_executable(eg_psd_calculation eg_psd_calculation.cpp)
target_link_libraries(eg_psd_calculation PUBLIC ${CMAKE_PROJECT_NAME} ${PROJECT_LIBS})

add_executable(eg_fftabs_calculation eg_fftabs_calculation.cpp)
target_link_libraries(eg_fftabs_calculation PUBLIC ${CMAKE_PROJECT_NAME} ${PROJECT_LIBS})
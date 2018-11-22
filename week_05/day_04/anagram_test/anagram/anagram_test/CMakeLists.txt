
add_compile_definitions(WINVER=0x0500)


set(PATH_TO_GOOGLETEST "C:/Users/Titkos/Desktop/googletest/googletest")
add_subdirectory(${PATH_TO_GOOGLETEST} ${CMAKE_CURRENT_BINARY_DIR}/googletest)
include_directories(${PATH_TO_GOOGLETEST}/googletest/include)

add_executable(anagram_tests anagram_test.cpp)
target_link_libraries(anagram_tests gtest gtest_main)
target_link_libraries(anagram_tests anagram_lib)
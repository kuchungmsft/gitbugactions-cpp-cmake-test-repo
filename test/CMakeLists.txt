enable_testing()

file(GLOB TEST_SOURCES "*.cpp" "*.c")

foreach(TEST_SOURCE ${TEST_SOURCES})
    get_filename_component(TEST_NAME ${TEST_SOURCE} NAME_WE)
    add_executable(${TEST_NAME} ${TEST_SOURCE})
    target_link_libraries(${TEST_NAME} math)
    add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})
endforeach()

find_package(Catch2 3 REQUIRED)

add_executable(pho_tests test.cpp)

target_link_libraries(pho_tests PRIVATE pho_core Catch2::Catch2WithMain)
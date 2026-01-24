add_library(pho_core
    main.cpp)

find_package(spdlog CONFIG REQUIRED)

target_link_libraries(pho_core
    PRIVATE spdlog::spdlog
)
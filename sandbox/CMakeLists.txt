add_executable(pho_sandbox
    main.cpp
)

find_package(spdlog CONFIG REQUIRED)
find_package(SFML COMPONENTS System Window Graphics CONFIG REQUIRED)

target_link_libraries(pho_sandbox
    PRIVATE 
        pho_core
        spdlog::spdlog
        SFML::System
        SFML::Window
        SFML::Graphics
)
project(Game_Engine)

# Ruta del binario (bin/Debug o bin/Release dentro del proyecto)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE})

add_library(Game_Engine SHARED
        src/library.cpp
        src/library.h
)

target_include_directories(Game_Engine PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)
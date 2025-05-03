project(Glad)

set(CMAKE_C_STANDARD 17)

add_library(Glad STATIC
        include/glad/glad.h
        include/KHR/khrplatform.h
        src/glad.c
)

target_include_directories(Glad PRIVATE include)

if(MSVC)
    # Usa el runtime dinámico en Debug (/MDd) y Release (/MD)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreadedDLL")
endif()

find_package(SDL2 REQUIRED)
find_package(SDL2_ttf REQUIRED)


file (GLOB sources CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/lib/*.c")

add_library(emu STATIC ${sources})

target_include_directories(emu
    PUBLIC
        ${SDL2_INCLUDE_DIR}
        ${SDL2_TTF_INCLUDE_DIR}
        ${PROJECT_SOURCE_DIR}/include
    PRIVATE
        ${CMAKE_SOURCE_DIR}/lib
)

target_link_libraries(emu
    PUBLIC
        ${SDL2_LIBRARY}
        ${SDL2_TTF_LIBRARY}
)
# sdfdsf
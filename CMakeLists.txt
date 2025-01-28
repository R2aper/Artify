cmake_minimum_required(VERSION 3.13)

project(artify VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(
    -Werror

    -Wall
    -Wextra
    -Wpedantic

    -Wcast-align
    -Wcast-qual
    -Wconversion
    -Wctor-dtor-privacy
    -Wenum-compare
    -Wfloat-equal
    -Wnon-virtual-dtor
    -Wold-style-cast
    -Woverloaded-virtual
    -Wredundant-decls
    -Wsign-conversion
    -Wsign-promo
)

if (WIN32)
    # Настройки для Windows
    add_definitions(-DWIN32)
elseif (UNIX)
    # Настройки для Unix-подобных систем
    add_definitions(-DUNIX)
endif()

include_directories(include)
include_directories(fonts)

aux_source_directory(src SOURCES)
aux_source_directory(src/fonts SOURCES_FONTS)

add_executable(${PROJECT_NAME} ${SOURCES} ${SOURCES_FONTS})
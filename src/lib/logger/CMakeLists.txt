cmake_minimum_required(VERSION 3.28)

project(logger)

add_library(${PROJECT_NAME}
    logger.h
    logger.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}"
)


target_link_libraries(${PROJECT_NAME} PRIVATE spdlog)

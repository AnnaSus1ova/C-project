cmake_minimum_required(VERSION 3.10)
project(Example)

set(CMAKE_CXX_STANDARD 17)

set(PROTOBUF_INCLUDE_DIRS )
set(PROTOBUF_LIBRARIES )

find_package(Protobuf REQUIRED)

set(SOURCES
    main.cpp
    vector_2d.cpp
    vector.pb.cc
)


add_executable(example ${SOURCES})

target_include_directories(example PRIVATE ${PROTOBUF_INCLUDE_DIRS})
target_link_libraries(example PRIVATE ${PROTOBUF_LIBRARIES})

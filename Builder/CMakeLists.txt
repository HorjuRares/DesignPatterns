add_subdirectory(src)

add_executable(Builder "builder.cpp")

target_link_libraries(Builder PUBLIC CodeBuilder)
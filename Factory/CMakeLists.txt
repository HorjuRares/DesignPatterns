add_library(PersonFactory STATIC "./src/PersonFactory.cpp")
target_include_directories(PersonFactory PUBLIC "./include")

add_executable(Factory "factory.cpp")

target_link_libraries(Factory PUBLIC PersonFactory)
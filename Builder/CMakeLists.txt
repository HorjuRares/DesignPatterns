add_library(CodeBuilder STATIC "./src/CodeBuilder.cpp")
target_include_directories(CodeBuilder PUBLIC "./include")

add_executable(Builder "builder.cpp")

target_link_libraries(Builder PUBLIC CodeBuilder)
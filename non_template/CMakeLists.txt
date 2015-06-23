add_executable(generate_vectors generate_vectors.cpp)
set_property(TARGET generate_vectors PROPERTY CXX_STANDARD 11)

add_executable(generate_timers generate_timers.cpp)
set_property(TARGET generate_timers PROPERTY CXX_STANDARD 11)

file(COPY test.cpp DESTINATION ${PROJECT_BINARY_DIR}/non_template)
configure_file ( 
    "compile_vector_test.sh.in"
    "${PROJECT_BINARY_DIR}/non_template/compile_vector_test.sh"
    @ONLY
    )



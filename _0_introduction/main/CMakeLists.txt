idf_component_register(SRCS "scr/main.cpp" 
                       INCLUDE_DIRS "include" 
                       REQUIRES driver)

target_compile_options(${COMPONENT_LIB} PRIVATE -Wno-format -Wno-volatile)
add_compile_options(-Wno-volatile)

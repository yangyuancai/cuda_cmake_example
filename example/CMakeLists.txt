

file(GLOB_RECURSE src_cxx ${CMAKE_SOURCE_DIR}/example/*.cpp ${CMAKE_SOURCE_DIR}/example/*.cu ${CMAKE_SOURCE_DIR}/example/*.c)
file(GLOB_RECURSE src_hxx ${CMAKE_SOURCE_DIR}/example/*.hpp ${CMAKE_SOURCE_DIR}/example/*.h)


add_executable(${EXAMPLENAME} ${src_cxx} ${src_hxx})
#生成可执行文件

target_link_libraries(${EXAMPLENAME} 
${OpenCV_LIBS})

install(TARGETS ${EXAMPLENAME}  RUNTIME DESTINATION bin)
#？？？

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
#设置可执行文件输出目录



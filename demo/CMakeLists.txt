
#include_directories(${CMAKE_SOURCE_DIR}/source/)
#include_directories(${CMAKE_SOURCE_DIR}/include/)


#######################	#####################################		
file(GLOB_RECURSE src_cxx_demo ${CMAKE_SOURCE_DIR}/demo/*.cu ${CMAKE_SOURCE_DIR}/demo/*.cpp)  
add_executable(${EXAMPLENAME} ${src_cxx_demo})
set_target_properties(${EXAMPLENAME} PROPERTIES CUDA_SEPARABLE_COMPILATION ON)					   
target_link_libraries(${EXAMPLENAME} ${SDKNAME})

#add_test(NAME ${SDKNAME}_10k COMMAND ${EXAMPLENAME} 10000 )
add_test(NAME particles_256k COMMAND ${EXAMPLENAME} 256000 )





#include_directories(${CMAKE_SOURCE_DIR}/source/)
#include_directories(${CMAKE_SOURCE_DIR}/include/)

############################################################
file(GLOB_RECURSE src_cxx ${CMAKE_SOURCE_DIR}/source/*.cu ${CMAKE_SOURCE_DIR}/source/*.cpp)
file(GLOB_RECURSE src_hxx ${CMAKE_SOURCE_DIR}/include/*.h ${CMAKE_SOURCE_DIR}/include/*.hpp)
add_library(${SDKNAME} STATIC ${src_cxx} ${src_hxx})  
target_compile_features(${SDKNAME} PUBLIC cxx_std_14)
set_target_properties( ${SDKNAME} PROPERTIES CUDA_SEPARABLE_COMPILATION ON )		




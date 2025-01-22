add_library(astarpathfinder 
    astarpathfinder.cc
    astarnode.cc
    binheap.cc
)

target_include_directories(astarpathfinder PUBLIC 
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/map  
)

target_link_libraries(astarpathfinder map)

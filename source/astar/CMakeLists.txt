add_library(astarpathfinder 
    astarpathfinder.cc
    astarnode.cc
    binheap.cc
    map.cc
)

target_include_directories(astarpathfinder PUBLIC ${CMAKE_SOURCE_DIR})

target_link_libraries(astarpathfinder)

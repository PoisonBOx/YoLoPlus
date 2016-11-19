set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
file(GLOB CURRENT_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/*.h)

add_executable(Test ${CURRENT_SOURCE})

include_directories(${PROJECT_SOURCE_DIR}/include)

set_target_properties(Test PROPERTIES FOLDER "Demo") 

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS}
					${OpenCV_INCLUDE_DIRS}/opencv 
					${OpenCV_INCLUDE_DIRS}/opencv2)
                    
target_link_libraries(Test ${OpenCV_LIBS})




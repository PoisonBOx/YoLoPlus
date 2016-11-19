set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
file(GLOB CURRENT_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/*.h)

add_library(XmlParser STATIC ${CURRENT_SOURCE})

set_target_properties(XmlParser PROPERTIES FOLDER "Modules") 

include_directories(${PROJECT_SOURCE_DIR}/include)

target_link_libraries(XmlParser ${OpenCV_LIBS})



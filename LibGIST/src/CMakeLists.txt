set(SRC_LIST
  gist.cpp
  libgist.cpp
  standalone_image.cpp
  #main.cpp
)
set(HEADER_LIST
  ${PROJ_INCLUDE_DIR}/gist.h
  ${PROJ_INCLUDE_DIR}/libgist.h
  ${PROJ_INCLUDE_DIR}/standalone_image.h
  ${PROJ_INCLUDE_DIR}/clany/clany_defs.h
)
set(FFTWF3_LIB fftw3)
#add_executable(LibGIST ${SRC_LIST} ${HEADER_LIST})
#target_link_libraries(LibGIST ${FFTWF3_LIB} ${OpenCV_LIBS})
add_library(gist SHARED ${SRC_LIST})
install(TARGETS gist DESTINATION /home/arya/Documents/vin_body_recognition_gist/LibGIST/build)
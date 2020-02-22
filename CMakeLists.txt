
# add_definitions(
#     -DWEBRTC_POSIX
# )

set(
    WEBRTC_SRC 
    D:/myself/webrtc_ns
)

include_directories(
    D:/myself/webrtc_ns
)

add_library(
    ns 
    STATIC
    ${WEBRTC_SRC}/modules/audio_processing/ns/defines.h
    ${WEBRTC_SRC}/modules/audio_processing/ns/noise_suppression.h
    ${WEBRTC_SRC}/modules/audio_processing/ns/noise_suppression.c
    ${WEBRTC_SRC}/modules/audio_processing/ns/ns_core.h
    ${WEBRTC_SRC}/modules/audio_processing/ns/ns_core.c
    ${WEBRTC_SRC}/common_audio/third_party/fft4g/fft4g.h
    ${WEBRTC_SRC}/common_audio/third_party/fft4g/fft4g.c
)

add_executable(
    test
    test/test.cpp
)

target_link_libraries(
    test
    ns
)
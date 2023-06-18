set(FunctionaTestTargetName ${TargetName}_soClient)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
find_package(OpenSSL REQUIRED)

add_executable(${FunctionaTestTargetName}
    src/soClient.cpp

    #${SOURCE_DIR}/detail/creditcard.cpp
)

target_include_directories(${FunctionaTestTargetName} PRIVATE
    ${SOURCE_DIR}

    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/include/thirdparty
    /opt/homebrew/opt/openssl/include
)

target_link_libraries(${FunctionaTestTargetName} PRIVATE
    ${CMAKE_THREAD_LIBS_INIT}
    #libcrypto
    #libssl
    "/opt/homebrew/opt/openssl/lib/libcrypto.a"
    "/opt/homebrew/opt/openssl/lib/libssl.a"
    #framework
    dl
)
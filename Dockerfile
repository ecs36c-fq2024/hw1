# Get the GCC preinstalled image from Docker Hub
FROM alpine:latest

RUN apk update && \
    apk upgrade && \
    apk --update add \
        gcc \
        g++ \
        build-base \
        cmake \
        bash \
        python3 \
        libstdc++ \
        cppcheck \
        py-pip && \
        pip install conan && \
    rm -rf /var/cache/apk/*
# Copy the current folder which contains C++ source code to the Docker image under /usr/src
COPY . /usr/src/hw2

# Specify the working directory
WORKDIR /usr/src/hw2


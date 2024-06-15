# TODO: Update with Debian version
FROM mcr.microsoft.com/devcontainers/cpp:1-debian-12

# Set variables
ARG CMAKE_VERSION="3.22.2"

# Optionally install the cmake for vcpkg
COPY ./scripts/reinstall-cmake.sh /tmp/

RUN if [ "${CMAKE_VERSION}" != "none" ]; then \
        chmod +x /tmp/reinstall-cmake.sh && /tmp/reinstall-cmake.sh ${CMAKE_VERSION}; \
    fi \
    && rm -f /tmp/reinstall-cmake.sh

# Set current user to vscode
USER vscode

# Update APT repository
ENV DEBIAN_FRONTEND=noninteractive

> Go to [Home](../../README.md)

## Maintenance

**Table of Contents**

- [Maintenance](#maintenance)
  - [Updating the CMake Version](#updating-the-cmake-version)
  - [Updating the Dev Container Image](#updating-the-dev-container-image)

### Updating the CMake Version

> This assumes the current version is 3.22.2 and the latest version is 4.0.0.

1. Update the `CMAKE_VERSION` in [Dockerfile](../../.devcontainer/Dockerfile).

    Before:

    ```Dockerfile
    ARG CMAKE_VERSION="3.22.2"
    ```

    After:

    ```Dockerfile
    ARG CMAKE_VERSION="4.0.0"
    ```

### Updating the Dev Container Image

> This assumes the current version is 12 and the LTS version is 14.

1. Update the container image tag in [Dockerfile](../../.devcontainer/Dockerfile).

    Before:

    ```Dockerfile
    FROM mcr.microsoft.com/devcontainers/cpp:1-debian-12
    ```

    After:

    ```Dockerfile
    FROM mcr.microsoft.com/devcontainers/cpp:1-debian-14
    ```

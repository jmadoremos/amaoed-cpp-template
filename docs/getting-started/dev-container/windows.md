> Go to [Home](../../../README.md) | [Getting Started](../README.md) | [Dev Container](README.md)

**Table of Contents**

- [Winget](#winget)
- [Docker Desktop](#docker-desktop)
- [Git](#git)
- [Visual Studio Code](#visual-studio-code)

##### Winget

Windows Package Manager is a comprehensive package manager solution that consists of a command line tool (WinGet) and set of services for installing applications on Windows devices.

> For more information, see [Windows Package Manager](https://learn.microsoft.com/en-us/windows/package-manager/) documentation from Microsoft.

> **Important:** This comes pre-installed in Windows 11. If using Windows 11, skip to the [Docker Desktop](#docker-desktop) step.

To install, follow these instructions:

  1. Using any internet browser, navigate and download the installer from the [official Winget download](https://aka.ms/getwinget) link.
  2. In your **Downloads** folder, double-click the downloaded file.
  3. Follow the installation process. Generally, you just have to click the **Next** button until the installation is complete. There is no need for customizations.

##### Docker Desktop

Docker Desktop is a one-click-install application for your Mac, Linux, or Windows environment that lets you build, share, and run containerized applications and microservices.

> For more information, see [Overview of Docker Desktop](https://docs.docker.com/desktop/) documentation from Docker Inc.

To install, follow these instructions:

   1. Using any internet browser, navigate to the [Docker Desktop](https://www.docker.com/products/docker-desktop/) homepage.
   2. Click the **Download for Windows** button.
   3. In your **Downloads** folder, double-click the installer file.
   4. Follow the installation process. Generally, you just have to click the **Next** button until the installation is complete. There is no need for customizations.

##### Git

Git for Windows focuses on offering a lightweight, native set of tools that bring the full feature set of the Git SCM to Windows while providing appropriate user interfaces for experienced Git users and novices alike.

> For more information, see [About](https://www.git-scm.com/about) documentation from the Git community.

To install, run this command using PowerShell, PowerShell Core, or Windows Terminal:

```
winget install -e --id Git.Git
```

##### Visual Studio Code

Build and debug modern web and cloud applications. Code is free and available on your favorite platform - Linux, Mac OSX, and Windows.

> For more information, see [Getting Started](https://code.visualstudio.com/docs) documentation from Microsoft.

To install Visual Studio Code, run this command using PowerShell, PowerShell Core, or Windows Terminal:

```
winget install -e --id Microsoft.VisualStudioCode
```

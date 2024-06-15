> Go to [Home](../../../README.md) | [Getting Started](../README.md) | [Bare Metal](README.md)

**Table of Contents**

- [Winget](#winget)
- [MinGW-w64](#mingw-w64)
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

##### MinGW-w64

Mingw-w64 is an advancement of the original [mingw.org](http://www.mingw.org/) project, created to support the GCC compiler on Windows systems. It has forked it in 2007 in order to provide support for 64 bits and new APIs. It has since then gained widespread use and distribution.

> For more information, see [MinGW-w64](https://www.mingw-w64.org/) homepage.

To install, follow these instructions:

  1. Using any internet browser, navigate to the [Sources](https://www.mingw-w64.org/downloads/#sources) section of the **Downloads** page.
  2. Click the link corresponding to the latest version. The latest version is the highest number in the list. The download will automatically start.
  3. Follow the installation process. Generally, you just have to click the **Next** button until the installation is complete. There is no need for customizations.
  4. Using PowerShell, PowerShell Core, or Windows Terminal, confirm the installation by executing the command below. This will output the current version of g++ installed.

      ```
      g++ --version
      ```

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

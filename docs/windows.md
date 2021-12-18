# C++ Programming Language for Windows

This documentation contains the instructions to install, configure and get started with C++ programming language in Windows.

## Specifications

* The installation process uses [Chocolatey](#chocolatey) to easily install and update applications using a terminal.

* The setup will require the following applications to be installed using _Chocolatey_:

    * The [MinGW-w64](#mingw-w64) contains the required utility executables to compile and debug the application, the standard C and C++ libraries, and other files.

    * The [git](#git) will be used to clone and interact with git repositories.

    * The [Visual Studio Code](#visual-studio-code) will be the primary Integrated Development Environment (IDE) endorsed for the entire course.

## Installation Process

### Chocolatey

Chocolatey is a software management solution unlike anything else you've ever experienced on Windows. Chocolatey brings the concepts of true package management to allow you to version things, manage dependencies and installation order, better inventory management, and other features.

1. Open a new **PowerShell** terminal as an **administrator**.

2. Execute the command below to setup Chocolatey.

```ps
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))
```

3. Execute the command below to refresh the environment variables in PowerShell.

```ps
refreshenv
```

4. Confirm the installation by executing the command below. This will output the current version of Chocolatey installed.

```ps
choco --version
```

### MinGW-w64

Mingw-w64 is an advancement of the original [mingw.org](http://www.mingw.org/) project, created to support the GCC compiler on Windows systems. It has forked it in 2007 in order to provide support for 64 bits and new APIs. It has since then gained widespread use and distribution.

1. Open a new **PowerShell** terminal as an **administrator**.

2. Execute the command below to setup MinGW-w64.

```ps
choco install mingw -y
```

3. Confirm the installation by executing the command below. This will output the current version of g++ installed.

```ps
g++ --version
```

### Git

Git for Windows focuses on offering a lightweight, native set of tools that bring the full feature set of the Git SCM to Windows while providing appropriate user interfaces for experienced Git users and novices alike.

1. Open a new **PowerShell** terminal as an **administrator**.

2. Execute the command below to setup Git.

```ps
choco install git -y
```

3. Confirm the installation by executing the command below. This will output the current version of git installed.

```ps
git --version
```

### Visual Studio Code

Build and debug modern web and cloud applications. Code is free and available on your favorite platform - Linux, Mac OSX, and Windows.

1. Open a new **PowerShell** terminal as an **administrator**.

2. Execute the command below to setup Visual Studio Code.

```ps
choco install vscode -y
```

3. Execute the command below to refresh the environment variables in PowerShell.

```ps
refreshenv
```

4. Confirm the installation by executing the command below. This will output the current version of Visual Studio Code installed.

```ps
code --version
```

5. Execute the command below to install the required Visual Studio Code extensions.

```ps
code --install-extension visualstudioexptteam.vscodeintellicode --force

code --install-extension EditorConfig.editorconfig --force

code --install-extension ms-vscode.cpptools-extension-pack --force
```

> Optionally, execute the following commands to install some non-essential Visual Studio Code extensions for aesthetics.

```ps
code --install-extension vscode-icons-team.vscode-icons --force

code --install-extension sdras.night-owl --force

code --install-extension aaron-bond.better-comments --force
```

## Getting Started

To get started with the project, following the instructions below.

1. Open a new **PowerShell** terminal as a **regular user**.

2. Create a new **git** directory in the root of C:/ drive.

```ps
mkdir C:/git
```

3. Navigate to the new **git** directory.

```ps
cd C:/git
```

4. Clone the remote repository.

```ps
git clone https://github.com/jmadoremos/amaoed-cpp-template.git --depth 1
```

> Alternatively, you may opt to clone the fork you created in your account. If you execute the command above, you need to manually delete the **amaoed-cpp-template/** folder before executing the command below to avoid or fix the conflict with the initial `git clone` command.

```ps
git clone https://github.com/YOUR_GITHUB_ACCOUNT/amaoed-cpp-template.git --depth 1
```

> Alternatively, if you already have the local repository before, execute the commands below to get the latest copy from the remote repository (i.e., GitHub). This will retrieve the latest copy from the source of the `git clone` command.

```ps
cd C:/git/amaoed-cpp-template/

git fetch

git checkout master

git pull
```

5. Confirm the setup by listing all files in your local repository.

```ps
ls C:/git/amaoed-cpp-template/
```

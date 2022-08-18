# C++ Programming Language for Linux

This documentation contains the instructions to install, configure and get started with C++ programming language in Linux.

## Specifications

* The installation process uses `apt` command to easily install and update applications using a terminal. You may opt to use alternative methods like `yum` depending on your preference.

* The setup will require the following applications to be installed:

    * The [GNU Compiler Tools and GDB Debugger](#gnu-compiler-tools-and-gdb-debugger) contains the required utility executables to compile and debug the application, the standard C and C++ libraries, and other files.

    * The [git](#git) will be used to clone and interact with git repositories.

    * The [Visual Studio Code](#visual-studio-code) will be the primary Integrated Development Environment (IDE) endorsed for the entire course.

## Installation Process

### Update the apt repository

Update the apt repository by following the instructions below:

1. Open any terminal. The `/bin/bash` is the common default shell for Linux.

2. Execute the command to update the apt repository.

> Administrative permission may be required. Enter the administrator's password if prompted.

```shell
sudo apt clean
sudo apt update --fix-missing -y
```

### GNU Compiler Tools and GDB Debugger

The GNU compiler tools is a set of utility applications to build and compile source codes into executables. The GDB debugger is a utility application used for debugging purposes.

1. Open any terminal. The `/bin/bash` is the common default shell for Linux.

2. Execute the command to install.

> Administrative permission may be required. Enter the administrator's password if prompted.

```shell
sudo apt install -y build-essential gdb
```

3. Confirm the installation by executing the command below. This will output the current version of g++ installed.

```ps
g++ --version
```

### Git

Git focuses on offering a lightweight, native set of tools that bring the full feature set of the Git SCM while providing appropriate user interfaces for experienced Git users and novices alike.

1. Open any terminal. The `/bin/bash` is the common default shell for Linux.

2. Execute the command to install.

> Administrative permission may be required. Enter the administrator's password if prompted.

```shell
sudo apt install -y git
```

3. Confirm the installation by executing the command below. This will output the current version of git installed.

```shell
git --version
```

### Visual Studio Code

Build and debug modern web and cloud applications. Code is free and available on your favorite platform - Linux, Mac OSX, and Windows.

1. Open any web browser.

2. Navigate to [Visual Studio Code download page](https://code.visualstudio.com/Download).

3. Click the appropriate installation method based on the Linux flavor and architecture.

4. An installation file will be downloaded. Run the installation file and follow the instructions to complete the installation.

5. Open any terminal. The `/bin/bash` is the common default shell for Linux.

6. Confirm the installation by executing the command below. This will output the current version of Visual Studio Code installed.

```shell
code --version
```

7. Execute the command below to install the required Visual Studio Code extensions.

```shell
code --install-extension visualstudioexptteam.vscodeintellicode --force

code --install-extension EditorConfig.editorconfig --force

code --install-extension ms-vscode.cpptools-extension-pack --force
```

> Optionally, execute the following commands to install some non-essential Visual Studio Code extensions for aesthetics.

```shell
code --install-extension vscode-icons-team.vscode-icons --force

code --install-extension sdras.night-owl --force

code --install-extension aaron-bond.better-comments --force
```

## Getting Started

To get started with a project using this template, following the instructions below.

1. Go to this template repository's root folder and then click the "Use this template" button, or just click [this link](https://github.com/kurozawa6/amaoed-cpp-template/generate).

2. Fill out the Create a new repository form as desired.

3. Clone the newly made repository locally. One of the many ways to do this is by first clicking "Code" and then copying the HTTPS link.

4. Open Visual Studio Code. If there's already an active open folder, open a new folder via CTRL + SHIFT + N.

5. Go to Explorer or Source Countrol by clicking its respective button (usually at the top left) or via CTRL + SHIFT + E or CTRL + SHIFT + G.

6. Click "Clone Repository".

7. Paste the HTTPS link from #3 and press Enter. You should now see the cloned repository as your active folder.

8. To try compiling and running a sample program, go to the src/sample folder and click main.cpp.

9. Click "Run" and then "Run Without Debugging" or press CTRL+F5.

10. You should now see the program run in the integrated terminal. If you don't see it, make sure the active tab is "TERMINAL" and not "DEBUG CONSOLE.
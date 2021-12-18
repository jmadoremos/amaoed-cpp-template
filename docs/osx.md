# C++ Programming Language for Mac OS

This documentation contains the instructions to install, configure and get started with C++ programming language in Mac OS.

## Specifications

* The setup will require the following applications to be installed:

    * The [XCode Developer Tools](#xcode-developer-tools) contains the required utility executables to compile and debug the application, the standard C and C++ libraries, and other files.

    * The [git](#git) will be used to clone and interact with git repositories.

    * The [Visual Studio Code](#visual-studio-code) will be the primary Integrated Development Environment (IDE) endorsed for the entire course.

## Installation Process

### XCode Developer Tools

1. Open any terminal.

2. Execute the command to install.

> Administrative permission may be required. Enter the administrator's password if prompted.

```shell
xcode-select --install
```

3. Confirm the installation by executing the command below. This will output the current version of clang++ installed.

```ps
clang --version
```

### Git

Git focuses on offering a lightweight, native set of tools that bring the full feature set of the Git SCM while providing appropriate user interfaces for experienced Git users and novices alike.

1. Open any terminal.

2. Git is included in the XCode installation. Confirm the installation by executing the command below. This will output the current version of git installed.

```ps
git --version
```

> If `git` was not found, visit [Git SCM](https://git-scm.com/download/mac) for instructions.

### Visual Studio Code

Build and debug modern web and cloud applications. Code is free and available on your favorite platform - Linux, Mac OSX, and Windows.

1. Open any web browser.

2. Navigate to [Visual Studio Code download page](https://code.visualstudio.com/Download).

3. Click the appropriate installation method for Mac OS.

4. An installation file will be downloaded. Run the installation file and follow the instructions to complete the installation.

5. Open any terminal.

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

To get started with the project, following the instructions below.

1. Open any terminal.

2. Create a new **git** directory in the home folder.

```shell
mkdir ~/git
```

3. Navigate to the new **git** directory.

```shell
cd ~/git
```

4. Clone the remote repository.

```shell
git clone https://github.com/jmadoremos/amaoed-cpp-template.git --depth 1
```

> Alternatively, you may opt to clone the fork you created in your account. If you execute the command above, you need to manually delete the **amaoed-cpp-template/** folder before executing the command below to avoid or fix the conflict with the initial `git clone` command.

```shell
git clone https://github.com/YOUR_GITHUB_ACCOUNT/amaoed-cpp-template.git --depth 1
```

> Alternatively, if you already have the local repository before, execute the commands below to get the latest copy from the remote repository (i.e., GitHub). This will retrieve the latest copy from the source of the `git clone` command.

```shell
cd ~/git/amaoed-cpp-template/

git fetch

git checkout master

git pull
```

5. Confirm the setup by listing all files in your local repository.

```shell
ls ~/git/amaoed-cpp-template/
```

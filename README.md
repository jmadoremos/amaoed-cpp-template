# C++ Programming Language | VS Code

This repository contains a development environment for Visual Studio code to be used by C++ Programming Language of AMA Online Education.

## Specifications

* It needs _MinGW_ installed at **C:/ root directory** in order to work.

* It is specifically configured for **Visual Studio Code** integrated development environment.

* It natively supports **Windows** operating system only. For other operating systems, several configurations may still be needed to complete the process.

## Installation Process

1. Using **Git Bash** or any _terminal_,

    * [One Time Only] Install the latest version of this GitHub repository by entering the following commands:

        ```dos
        mkdir C:/git
        cd C:/git
        git clone https://github.com/jmadoremos/amaoed-cpp-template
        ```

    * Update your existing copy to the latest version (provided you have previously done the commands above) by entering the following instead:

        ```dos
        cd C:/git/amaoed-cpp-template
        git pull origin master
        ```

2. Using any **File Explorer**, navigate to **C:/git/amaoed-cpp-template** to see your local copy of this repository.

## Recommended Extensions

The following are recommended _extensions_ for VS Code ( Mac: <kbd>&#8984;</kbd>+<kbd>P</kbd>, Windows: <kbd>CTRL</kbd>+<kbd>P</kbd> ):

1. **EditorConfig for VS Code** by EditorConfig:

    ```
    ext install EditorConfig.editorconfig
    ```

2. **C/C++** by Microsoft:

    ```
    ext install ms-vscode.cpptools
    ```

## Reminder

In general, there should be no reason to modify or delete any of the following:

* **.vscode/** directory and files within

* **src/_pause.h** library

* **.editorconfig** file

* **.gitignore** file

* [**CHANGELOG**](/CHANGELOG.md)

* [**README**](/README.md)

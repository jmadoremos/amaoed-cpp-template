> Go to [Home](../../../README.md) | [Getting Started](../README.md)

**Table of Contents**

- [Bare Metal](#bare-metal)
  - [Installing the Pre-requisites](#installing-the-pre-requisites)
  - [Configuring the Visual Studio Code](#configuring-the-visual-studio-code)
  - [Cloning the Git Repository](#cloning-the-git-repository)
  - [Opening in Bare Metal](#opening-in-bare-metal)

### Bare Metal

A bare metal installation is a local development environment running in the host operating system.

#### Installing the Pre-requisites

To install the pre-requisites, click the link that corresponds to your operating system:

  - [Windows](windows.md)
  - [macOS](osx.md)
  - [Linux](linux.md)

#### Configuring the Visual Studio Code

To install the required Visual Studio Code extensions, run this command using a terminal:

```
code --install-extension EditorConfig.EditorConfig --force
```

```
code --install-extension bierner.markdown-mermaid --force
```

```
code --install-extension eamodio.gitlens --force
```

```
code --install-extension ms-vscode.cpptools-extension-pack --force
```

```
code --install-extension visualstudioexptteam.vscodeintellicode --force
```

```
code --install-extension yzhang.markdown-all-in-one --force
```

To install the cosmetic Visual Studio Code extensions, run these commands using a terminal:

```
code --install-extension PKief.material-product-icons --force
```

```
code --install-extension aaron-bond.better-comments --force
```

```
code --install-extension sdras.night-owl --force
```

```
code --install-extension vscode-icons-team.vscode-icons --force
```

#### Cloning the Git Repository

To clone the remote git repository locally, run this command using a terminal:

```
git clone https://github.com/jmadoremos/amaoed-cpp-template.git --depth 1
```

If you already have the local git repository previously, run this command to get the latest copy from the remote git repository (i.e., GitHub).

```
cd amaoed-cpp-template/
```

```
git checkout master
```

```
git fetch
```

```
git pull
```

#### Opening in Bare Metal

To open the local git repository in Visual Studio Code, run this command using a terminal:

```
code amaoed-cpp-template/
```

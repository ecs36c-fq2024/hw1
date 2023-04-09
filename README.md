# Homework 1

> Due: 05-07-2023 11:59:59 PM

**Topics**: Templates, Linked Lists, Stacks, Queues

## Table of Contents

- [Homework 1](#homework-1)
  - [Table of Contents](#table-of-contents)
  - [Homework Spec](#homework-spec)
    - [Linked List](#linked-list)
    - [Stack](#stack)
    - [Queue](#queue)
    - [Submission](#submission)
  - [Setup](#setup)

> ⚠️ DO NOT change files marked with
>
> ```cpp
> // DO NOT CHANGE THIS FILE
> ```

## Homework Spec

In this homework, you will write a template library that contains three data
structures - `LinkedList`, `Stack`, and `Queue`.

You will implement `LinkedList` first and then implement `Stack` and `Queue`
using the `LinkedList` you implemented.

> In reality, `Stack` and `Queue` can also be implemented using a
> dynamically-sized array (such as `std::vector`), but not in this homework.

### Grading

You will be graded on test cases

- LinkedList - 60%
- Stack - 15%
- Queue - 15%
- Memory Safety - 10%

### Linked List

TODO

### Stack

TODO

### Queue

TODO

### Submission

TODO

## Setup

Use one of the following options to set up your environment.

> ⚠️ If you're a student, **DO NOT FORK** this repository because you cannot
> change the visibility of a forked repo to private. If you plan to use Git for
> version control (which is encouraged), run `rm -rf .git && git init` after
> setting up using one of the options below and push to your **private**
> repository. Any public repository containing part of this homework solution
> will be reported to SJA.

### Option 1: VS Code with Local Dev Container

- If Docker is not running, start Docker.

- Click the following button to set up the environment.

  [![Setup Local Dev Container](https://img.shields.io/static/v1?label=Local%20Dev%20Container&message=Setup&color=blue&logo=visualstudiocode)](https://vscode.dev/redirect?url=vscode://ms-vscode-remote.remote-containers/cloneInVolume?url=https://github.com/ecs36c-sq2023/hw1)

- When asked for selecting a Kit to configure CMake, choose **GCC**.

### Option 2: VS Code with Remote Dev

- Connect VS Code to the remote host.

- Install **C/C++ Extension Pack** on Remote Server (if not already).

- Run the following command inside the integrated terminal.

  `git clone https://github.com/ecs36c-sq2023/hw1 ecs36c-hw1`

- Run `code ./ecs36c-hw1` to open the folder.

- When prompted to configure CMake, confirm and choose **GCC** when prompted for
  kit selection.

### Option 3: Terminal

- Run the following commands

  ```bash
  git clone https://github.com/ecs36c-sq2023/hw1 ecs36c-hw1
  cd ./ecs36c-hw1
  mkdir build
  cd build
  cmake ..
  ```

## Run/Debug

### Run tests using VS Code

### Run tests using Terminal

```bash
cd build
make
./run_tests
```

# Homework 1

> Due: 05-07-2023 11:59:59 PM

**Topics**: Templates, Linked Lists, Stacks, Queues

## Table of Contents

- [Homework 1](#homework-1)
  - [Table of Contents](#table-of-contents)
  - [Homework Spec](#homework-spec)
    - [Grading](#grading)
    - [Linked List](#linked-list)
    - [Stack](#stack)
    - [Queue](#queue)
    - [Memory Safety](#memory-safety)
    - [Submission](#submission)
  - [Setup](#setup)
    - [Option 1: VS Code with Local Dev Container](#option-1-vs-code-with-local-dev-container)
    - [Option 2: VS Code with Remote Dev](#option-2-vs-code-with-remote-dev)
    - [Option 3: Terminal](#option-3-terminal)
  - [Run/Debug](#rundebug)
    - [Run tests using VS Code](#run-tests-using-vs-code)
    - [Run tests using Terminal](#run-tests-using-terminal)

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

You will be graded only on the same (hidden) test cases your TAs created.

We provided some tests cases in [./tests](./tests). Feel free to modify and add
more test cases, but the [./tests](./tests) in your submission will not be
graded. However, you will be able to see the results for your submitted test
cases on Gradescope.

- `LinkedList` Implementation - 60%
- `Stack` Implementation - 15%
- `Queue` Implementation - 15%
- Memory Safety - 10%

### Linked List

- Check the definition for `LinkedListNode` in
  [lib/LinkedListNode.hpp](lib/LinkedListNode.hpp).

- Check the spec in [lib/LinkedList.hpp](lib/LinkedList.hpp) and implement all
  methods in [lib/LinkedList.cpp](lib/LinkedList.cpp).

- Create test cases in [tests/LinkedListTest.cpp](tests/LinkedListTest.cpp).

### Stack

- Check the spec in [lib/Stack.hpp](lib/Stack.hpp) and implement all methods in
  [lib/Stack.cpp](lib/Stack.cpp).

- Create test cases in [tests/StackTest.cpp](tests/StackTest.cpp).

### Queue

- Check the spec in [lib/Queue.hpp](lib/Queue.hpp) and implement all methods in
  [lib/Queue.cpp](lib/Queue.cpp).

- Create test cases in [tests/QueueTest.cpp](tests/QueueTest.cpp).

### Memory Safety

We will run `valgrind --leek-check=full ./build/run_tests` against the hidden
test cases to check whether there is memory safety issues.

If your test cases are not comprehensive, `valgrind` may not be able to report
potential memory safety issues when you run it against your test cases.

If you do not fully implement the data structures, your score for memory safety
will be automatically discounted even if `valgrind` does not report error(s).

(For example, if you implement nothing, there will of course be no memory safety
issues, but you will receive a 0 on memory safety score).

### Submission

Use `./generate_submission.sh` and submit `hw1-submission.zip` on Gradescope.

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

Directly Launch.

### Run tests using Terminal

```bash
cd build
make
./run_tests
```

# Homework 2

> Due: 03-12-2021 11:59:59 PM

**Corresponding Topic**: Stacks, Queues, Linked Lists

## Table of Contents

1. [Homework Content](<#Homework\ Content>)
2. [Homework Submission](<#Homework\ Submission>)
3. [Local Autograder](<#Local\ Autograder>)

**IMPORTANT**: DO NOT CHANGE THE FILE MARKED WITH:

```cpp
/*
 * DO NOT CHANGE THIS FILE!
 *
 */
```

### Homework Content

**You don't have to worry about edge cases other than decribed in each section.**

#### Stack

You will find the input file for stack in `[PROJ_ROOT]/input/stack/[num].txt`.

For each line in the input file for stack:

1. `c COMMENTS` All comments will begin with `c`.
2. `s` Create an empty stack
3. `u a` For line starting with u, push `a` onto the existing stack. There will be only one `a` for each line starting with `u`.
4. `o` For line starting with `o`, pop the value and write into output_file along with a new line.

#### Queue

You will find the input file for queue in `[PROJ_ROOT]/input/queue/[num].txt`.

For each line in the input file for queue:

1. `c COMMENTS` All comments will begin with c.
2. `q` Create an empty queue
3. `e a` For line starting with u, enqueue a onto the existing queue. There will be only one `a` for each line starting with `u`.
4. `d` For line starting with o, dequeue the value and write into output_file along with a new line.

#### Linked List

You will find the input file for linked list in `[PROJ_ROOT]/input/linked_list/[num].txt`.
**IMPORTANT**: You can assume there will be no duplicate on the linked list. For example, if a node where `node.val = a` already exists. You can ignore the command that inserts another node into the linked list with `node.val = a`.

For each line in the input file for linked list:

1. `c COMMENTS` All comments will begin with c.
2. `h 0` Create a linked list `ll` such that `ll.head.val = 0` `h 0` will always be the first line in any input file. There will only be one h statement per input file.
3. `i a` Insert node with `node.val = a` into the front of the linked list.
4. `d a` Delete `node.val = a` from the linked list.  Ignore the command if such node doesn't exist.
5. `r` Reverse the existing linked list. Do not print.
6. `n a b` Create a new `node_b` with `node_b.val = b`, insert the new node after `node_a` where `node_a.val = a`.
7. `l a b` Link `node_a` with `node_a.val = a` with `node_b` with `node_b.val = b`. Ignore the command if either node doesn't exist.
8. `p i j` Print the linked list starting from [i, j), 0 indexed into the output file
   Example: For linked list: 1 -> 2 -> 3 -> 4, `p 0 2` will print

   ```txt
   1 2
   ```

   `p` If p has no arguments, then it will print the entire linked list starting from head. If the linked list is a circular linked list, then only print each item once.

9. `o` print 1 into outputfile if the linked list is a circular linked list, 0 otherwise

### Homework Submission

run

```bash
chmod +x generate_submission

./generate_submission
```

The script `generate_submission` will create a zip file `hw2-submission.zip`.
Please submit `hw2-submission.zip`

This script will ignore all of the files marked with

```cpp
/*
 * DO NOT CHANGE THIS FILE!
 *
 */
```

### Local Autograder

We will be providing the autograder script to help you gauge your results.
run the following in the autograder environment provided by the docker. The released scripts is aimed to be transparent about our grading process. We will not take any regrade request from the local autograder.

```txt
bash-5.0# cd autograder
bash-5.0# +x grade.sh
bash-5.0# ./grade.sh
```

Starting with homework 2, we will run the official autograder twice. Once on Sunday one week after the homework's initial release. And the second time after the homework official deadline.

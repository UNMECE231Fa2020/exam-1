# Exam-1: Adding additional functions using linked lists

In this exam you will be adding 4 functions to existing code. This existing code is from the `DoubleLinkedList` folder from homework 1. These are the 4 functions are:
    
    linked_sum
    linked_mean
    linked_scale
    linked_decrement

Let's talk about each function.

## linked_sum

For this function, you will sum all the integers that belong to a linked list. So if I have a linked list of 4 nodes, and the values of the nodes are described as `1, 2, 3, 4`, if I call the function `linked_sum` I should get a result of `10`. A way to create this function is to create a variable to accumulate the values of the linked list. You can get all the values from the linked list by iterating through the linked list. Here is the `function prototype`:
```cpp
int linked_sum(DoubleLinkedList *root_node);
```
## linked_mean

This function will similarly sum all values in a linked list and then divide by the length of the linked list. You have two options when getting the length of the linked list: you can either count as you iterate through the linked list, or you can create a separate function that can get the length of the linked list and use `linked_sum` to get the mean. Here is what the `function prototype should look like`:
```cpp
float linked_mean(DoubleLinkedList *root_node);
```
## linked_scale

The function `linked_scale` will scale a linked list by a factor given by the user. So a linked list can be scaled by a factor of 2, or factor of 5. So if I have a linked list for values `2, 3, 5, 6, 9, 10` and I scale it by a factor of 3, the result should look like this: `6, 9, 15, 18, 27, 30`. There will be two inputs: the first will be a root node to the linked list, and the second will be an integer that will be the scale factor for the linked list. The function will iterate though the linked list and multiply every value of the linked list by the scalar `a`. Below is the function prototype:
```cpp
void linked_scale(DoubleLinkedList *root_node, int a);
```
## linked_decrement

This function will iterate though the entire linked list and decrement each value in every node of the linked list by 1. If I have a linked list that have these values: `6, 5, 8`, and if it is passed through `linked_decrement`, the resulting linked list would look like this: `5, 4, 7`. Here is the function prototype.
```cpp
void linked_decrement(DoubleLinkedList *root_node);
```
## linked_increment example

To get you all started, here is an example function in which the function will increment each value of a linked list. It will `iterate though the entire linked list`, and increase the value of each node of the linked list by 1. Here is that function.

```cpp
void linked_increment(DoubleLinkedList *root_node) {
    DoubleLinkedList *temp;
    for (temp = root_node; temp != NULL; temp = temp->next) {
        temp->value += 1;
    }
}
```

## Source code

You should not have to edit `main.c`, nor `double_linked_list.h`. `You will have to edit dll_functions.c`. A Makefile will be provided to make compiling easier. `To download the exam to your computer please accept it on UNM Learn`. `To submit your exam, please push to your git`. You will then have to type:

    git clone https://github.com/UNMECE231Fa2020/<your github username>
    
to download your exam.

## Desired output

The output below is the result of implementing the functions correctly:

```
First linked list:
4 2 5 8 3 
Second linked list:
3 8 6 4 7 

Sum of first linked list: 22
Sum of second linked list: 28

Mean of first linked list: 4.00
Mean of second linked list: 5.00

a1 scaled by 3:
12 6 15 24 9 
b1 scaled by 6:
18 48 36 24 42 

Linked lists decremented by 1
11 5 14 23 8 
17 47 35 23 41
```

# Rubric

|Requirement          |Score  |
| :---:               | :---: |
|linked_sum           |25     |
|linked_mean          |25     |
|linked_scale         |20     |
|linked_decrement     |20     |
|Readable, clean code |10     |
|Total                |100    |

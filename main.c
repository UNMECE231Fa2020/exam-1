#include <stdio.h>
#include "double_linked_list.h"

/**
PLEASE READ:
	The two main variables you will use are 'a1' and 'b1'.
**/

int main() {
	// Declaring first linked list
	DoubleLinkedList a1 = {NULL, 4, NULL};
	DoubleLinkedList a2 = {NULL, 2, NULL};
	DoubleLinkedList a3 = {NULL, 5, NULL};
	DoubleLinkedList a4 = {NULL, 8, NULL};
	DoubleLinkedList a5 = {NULL, 3, NULL};

	// Connecting the first linked list
	a1.next = &a2;

	a2.prev = &a1;
	a2.next = &a3;

	a3.prev = &a2;
	a3.next = &a4;

	a4.prev = &a3;
	a4.next = &a5;

	a5.prev = &a4;

	// Declaring second linked list
	DoubleLinkedList b1 = {NULL, 3, NULL};
	DoubleLinkedList b2 = {NULL, 8, NULL};
	DoubleLinkedList b3 = {NULL, 6, NULL};
	DoubleLinkedList b4 = {NULL, 4, NULL};
	DoubleLinkedList b5 = {NULL, 7, NULL};

	// Connecting the second linked list
	b1.next = &b2;
	
	b2.prev = &b1;
	b2.next = &b3;
	
	b3.prev = &b2;
	b3.next = &b4;
	
	b4.prev = &b3;
	b4.next = &b5;
	
	b5.prev = &b4;

	// Printing first linked list
	printf("First linked list:\n");
	print_forward(&a1);

	// Printing second linked list
	printf("Second linked list:\n");
	print_forward(&b1);

	printf("\n");

	// Printing sum of first linked list
	const int a_sum = linked_sum(&a1);
	printf("Sum of first linked list: %d\n", a_sum);

	// Printing sum of second linked list
	const int b_sum = linked_sum(&b1);
	printf("Sum of second linked list: %d\n", b_sum);

	printf("\n");

	// Printing mean of first linked list
	const float a_mean = linked_mean(&a1);
	printf("Mean of first linked list: %.2f\n", a_mean);

	// Printing mean of second linked list
	const float b_mean = linked_mean(&b1);
	printf("Mean of second linked list: %.2f\n", b_mean);

	printf("\n");

	// Scaling a1 by a factor of 3
	linked_scale(&a1, 3);
	printf("a1 scaled by 3:\n");
	print_forward(&a1);

	// Scaling b1 by a factor of 6
	linked_scale(&b1, 6);
	printf("b1 scaled by 6:\n");
	print_forward(&b1);

	printf("\n");

	// Decrementing both linked lists by 1 and printing their contents
	linked_decrement(&a1);
	linked_decrement(&b1);
	
	printf("Linked lists decremented by 1\n");
	print_forward(&a1);
	print_forward(&b1);

	return 0;
}

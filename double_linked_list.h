#include <stdio.h>

struct _double_linked_list {
	struct _double_linked_list *prev;
	int value;
	struct _double_linked_list *next;
};

typedef struct _double_linked_list DoubleLinkedList;

void print_forward(DoubleLinkedList *node);
void print_backward(DoubleLinkedList *node);

void add_node(DoubleLinkedList *base_node, DoubleLinkedList *new_node);
void add_at_head(DoubleLinkedList *head_node, DoubleLinkedList *new_node);

void rm_node(DoubleLinkedList *base_node);
void rm_at_head(DoubleLinkedList *base_node);

int linked_sum(DoubleLinkedList *root_node);
float linked_mean(DoubleLinkedList *root_node);
void linked_scale(DoubleLinkedList *root_node, int a);
void linked_decrement(DoubleLinkedList *root_node);

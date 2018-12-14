
#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H

#include <stdlib.h>

typedef struct node {
    int value;
    struct node * next_node;

} node_t ;

void proper_push_back(node_t ** head, int value);
node_t * delete_head(node_t*head, int value);
node_t insert_after_node(node_t *head,int node_number, int value);
void print_nodes(node_t * head);
node_t * proper_add_to_begin(node_t ** head,int value);
int if_its_empty(node_t *head);
#endif //LINKED_LIST_LINKED_LIST_H

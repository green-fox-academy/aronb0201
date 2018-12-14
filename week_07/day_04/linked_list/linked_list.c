


#include <stdio.h>
#include "linked_list.h"



void proper_push_back(node_t **head, int value) {
    node_t *new_node = malloc(sizeof(node_t));

    if (*head == NULL) {
        new_node->value = value;
        new_node->next_node = NULL;
        *head = new_node;
        printf("%d", new_node->value);
    } else {
        node_t *p = *head;
        while (p->next_node != NULL) {
            p = p->next_node;

        }
        new_node->next_node = NULL;
        p->next_node = new_node;
        new_node->value = value;

    }

}

node_t insert_after_node(node_t *head, int node_number, int value) {
    node_t *p = head;

    while (p->value != node_number) {
        p = p->next_node;
    }
    node_t *new_node = malloc(sizeof(node_t));
    new_node->value = value;
    new_node->next_node = p->next_node;
    p->next_node = new_node;
    return *head;


}

void print_nodes(node_t *head) {
    node_t *p = head;
    while (p != NULL) {
        printf("%d\n", p->value);
        p = p->next_node;
    }
}

node_t *proper_add_to_begin(node_t **head, int value) {
    node_t *new_node = malloc(sizeof(node_t));
    new_node->value = value;
    new_node->next_node = *head;
    *head = new_node;
    return *head;
}

int if_its_empty(node_t *head) {
    node_t *p = head;
    if (p != NULL) {
        return 0;
    } else {
        return 1;
    }
}

node_t * delete_head(node_t*head, int value){
    node_t *new_node = malloc(sizeof(node_t));
    node_t * p = new_node;
    p->next_node = new_node;
    p->value =value;
    head = new_node;
    printf("anyadat");
    return head;


}

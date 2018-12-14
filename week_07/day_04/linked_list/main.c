#include <stdio.h>
#include "linked_list.h"
#include <stdlib.h>


int main() {

    node_t *head = NULL;
    proper_push_back(&head, 67);
    proper_push_back(&head, 55);
    proper_push_back(&head, 77);
    proper_push_back(&head, 88);
    proper_push_back(&head, 99);
    proper_push_back(&head, 444);


    insert_after_node(head, 88, 567);
    node_t *p = head;
    while (p != NULL) {
        printf("value: %d\n", p->value);
        p = p->next_node;
    }

    print_nodes(head);

    proper_add_to_begin(&head, 123);
    print_nodes(head);

    printf("%d", if_its_empty(head));

    delete_head(head, 987);
    print_nodes(head);

    return 0;
}


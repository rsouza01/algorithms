#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "../include/lists.h"


void main() {

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    LINKED_LIST* list = ll_init();

    ll_insert(list, alloc_node_value(1));
    ll_insert(list, alloc_node_value(10));
    ll_insert(list, alloc_node_value(9));
    ll_insert(list, alloc_node_value(7));

    ll_visit_elements(list, &print_node);

    //free(list);

}

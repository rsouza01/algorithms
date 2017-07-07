#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "../include/lists.h"

NODE_VALUE_PTR alloc_node_value(int);
void print_node(void* );


/**
    Prints a node_value

    @element    the value to be printed.
*/
void print_node(void* element) {

    NODE_VALUE* nv = element;

    printf("Value = %d\n", nv->value);
}

/**
    Allocates a NODE_VALUE

    @value  the value for the NODE_VALUE object.
*/
NODE_VALUE_PTR alloc_node_value(int value) {

    NODE_VALUE_PTR new_node = malloc(sizeof(NODE_VALUE));

    new_node->value = value;

    return new_node;
}



void main() {

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    LINKED_LIST* list = ll_init();

    ll_insert(list, alloc_node_value(1));
    ll_insert(list, alloc_node_value(10));
    ll_insert(list, alloc_node_value(9));
    ll_insert(list, alloc_node_value(7));

    ll_visit_elements(list, &print_node);

    NODE_PTR node = ll_search(list, alloc_node_value(7));

    //free(list);

}

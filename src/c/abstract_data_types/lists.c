#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "../include/lists.h"


/**
    Returns an allocated list
*/
LINKED_LIST* ll_init() {

    LINKED_LIST* list = malloc(sizeof(LINKED_LIST));
    list->head = NULL;
    list->tail = NULL;
    return list;

}

void ll_release(LINKED_LIST* list) { }

void ll_search(LINKED_LIST* list, void* item) { }

void ll_delete(LINKED_LIST* list, NODE* el) { }

/**
    @list the list to be transversed
    @nv
*/
void ll_insert(LINKED_LIST* list, NODE_VALUE_PTR nv) {

    assert(nv != NULL && list != NULL);

    NODE_PTR new_node = malloc(sizeof(NODE));

    new_node->element = nv;
    new_node->next = list->head;

    list->head = new_node;

    printf("head(%d) = %p\n", nv->value, list->head);
}

/**
    Visits all elements of a list, performing a function received as parameter.

    @list the list to be transversed
    @function the operation to be performed to each element of the list
*/
void ll_visit_elements(LINKED_LIST* list, void (*function)(void*) ) {

    assert(function != NULL && list != NULL);

    NODE_PTR node = list->head;
    NODE_VALUE_PTR nv = node->element;

    printf("=======================================================\n");
    printf("head = %p, next = %p, value = %d\n", node, node->next, nv->value);
    printf("=======================================================\n");
    printf("=======================================================\n");

    while(node != NULL) {

        nv = node->element;
        //printf("node = %p, next = %p, value = %d\n", node, node->next, nv->value);

        function(nv);

        assert(node != NULL);

        NODE_VALUE_PTR nv = node->element;

        node = node->next;

        //printf("node.ptr (next) = %p\n", node);
        printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    }
}

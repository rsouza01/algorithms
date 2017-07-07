#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


typedef struct _linked_list LINKED_LIST;
typedef struct _node NODE, *NODE_PTR;
typedef struct _node_value NODE_VALUE, *NODE_VALUE_PTR;

struct _linked_list{

    NODE_PTR head;
    NODE_PTR tail;

};


struct _node{

    void* element;
    NODE_PTR next;

};

struct _node_value{
    int value;
};


LINKED_LIST* ll_init();
void ll_release(LINKED_LIST* list);

void ll_insert(LINKED_LIST* list, NODE_VALUE_PTR el);

void ll_search(LINKED_LIST* list, void* item);
void ll_delete(LINKED_LIST* list, NODE* el);

void ll_visit_elements(LINKED_LIST* list, void (*function)(void*) );

NODE_VALUE_PTR alloc_node(int value);

#endif

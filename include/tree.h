#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    char data;
    struct Node *left;
    struct Node *right;
};

struct Node *create_tree(char _data, struct Node *_left, struct Node *_right);
void print_node(struct Node *_node);
int count_node(struct Node *_node);

#endif
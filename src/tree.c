#include "../include/tree.h"

bool is_empty(struct Node *_node)
{
    if (_node == NULL)
    {
        return true;
    }
    return false;
}

struct Node *create_tree(char _data, struct Node *_left, struct Node *_right)
{
    struct Node *_node = (struct Node *)calloc(1, sizeof(struct Node));
    _node->data = _data;
    _node->left = _left;
    _node->right = _right;
    return _node;
}

void print_node(struct Node *_node)
{
    if (_node != NULL)
    {
        printf("%c\n", _node->data);
        print_node(_node->left);
        print_node(_node->right);
    }
    else
    {
        puts("This node is empty.");
    }
}

int count_node(struct Node *_node)
{
    return 1;
}
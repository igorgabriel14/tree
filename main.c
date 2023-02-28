#include <stdio.h>
#include <stdlib.h>
#include "./include/tree.h"

int main()
{
    struct Node *tree = create_tree('A', create_tree('B', NULL, create_tree('C', NULL, NULL)), NULL);
    print_node(tree);
    printf("%i\n", count_node(tree));
    return 0;
}
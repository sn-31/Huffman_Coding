#include <stdio.h>
#include "queue.h"

void printTree(Node *root, int space) {
    if (!root) return;
    space += 5;
    printTree(root->right, space);
    printf("\n");
    for (int i = 5; i < space; i++) printf(" ");
    printf("%c(%d)\n", root->ch, root->freq);
    printTree(root->left, space);
}


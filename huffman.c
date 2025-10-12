#include <stdio.h>
#include <stdlib.h>
#include "huffman.h"

Node* buildHuffmanTree(PriorityQueue *pq) {
    while (pq->size > 1) {
        Node *left = dequeue(pq);
        Node *right = dequeue(pq);

        Node *merged = createNode('-', left->freq + right->freq);
        merged->left = left;
        merged->right = right;

        enqueue(pq, merged);
    }
    return dequeue(pq);
}

void generateCodes(Node *root, char *code, int depth) {
    if (!root) return;
    if (!root->left && !root->right) {
        code[depth] = '\0';
        printf("%c : %s\n", root->ch, code);
        return;
    }
    code[depth] = '0';
    generateCodes(root->left, code, depth + 1);
    code[depth] = '1';
    generateCodes(root->right, code, depth + 1);
}


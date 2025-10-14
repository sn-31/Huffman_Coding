#include <stdio.h>
#include "input.h"
#include "queue.h"
#include "huffman.h"

extern void printTree(Node*, int);

int main() {
    InputChar arr[MAX_CHARS];
    int n;
    getInput(arr, &n);

    PriorityQueue pq;
    initQueue(&pq);

    for (int i = 0; i < n; i++)
        enqueue(&pq, createNode(arr[i].ch, arr[i].freq));

    Node *root = buildHuffmanTree(&pq);

    printf("\nHuffman Codes:\n");
    char code[100];
    generateCodes(root, code, 0);

    printf("\nTree Structure:\n");
    printTree(root, 0);
    return 0;
}


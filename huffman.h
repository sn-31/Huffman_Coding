#ifndef HUFFMAN_H
#define HUFFMAN_H

#include "queue.h"

Node* buildHuffmanTree(PriorityQueue *pq);
void generateCodes(Node *root, char *code, int depth);

#endif


#include <stdlib.h>
#include "queue.h"

Node* createNode(char ch, int freq) {
    Node* node = malloc(sizeof(Node));
    node->ch = ch;
    node->freq = freq;
    node->left = node->right = NULL;
    return node;
}

void initQueue(PriorityQueue *pq) {
    pq->size = 0;
}

void enqueue(PriorityQueue *pq, Node *node) {
    pq->nodes[pq->size++] = node;
    for (int i = pq->size - 1; i > 0; i--) {
        if (pq->nodes[i]->freq < pq->nodes[i - 1]->freq) {
            Node *tmp = pq->nodes[i];
            pq->nodes[i] = pq->nodes[i - 1];
            pq->nodes[i - 1] = tmp;
        }
    }
}

Node* dequeue(PriorityQueue *pq) {
    if (pq->size == 0) return NULL;
    return pq->nodes[--pq->size];
}


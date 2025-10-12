#ifndef QUEUE_H
#define QUEUE_H

typedef struct Node {
    char ch;
    int freq;
    struct Node *left, *right;
} Node;

typedef struct {
    Node* nodes[100];
    int size;
} PriorityQueue;

Node* createNode(char ch, int freq);
void enqueue(PriorityQueue *pq, Node *node);
Node* dequeue(PriorityQueue *pq);
void initQueue(PriorityQueue *pq);

#endif


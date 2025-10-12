#ifndef INPUT_H
#define INPUT_H

#define MAX_CHARS 100

typedef struct {
    char ch;
    int freq;
} InputChar;

int getInput(InputChar arr[], int *n);

#endif


#include <stdio.h>
#include "input.h"

int getInput(InputChar arr[], int *n) {
    printf("Enter number of characters: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Enter character and frequency: ");
        scanf(" %c %d", &arr[i].ch, &arr[i].freq);
    }
    return 0;
}


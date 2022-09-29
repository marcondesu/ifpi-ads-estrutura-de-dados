#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
    
};

int main() {
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 5;
    head->next = NULL;

    struct Node *current = (struct Node*)malloc(sizeof(struct Node));
    current->data = 6;
    current->next = NULL;
    head->next = current;

    current = (struct Node*)malloc(sizeof(struct Node));
    current->data = 7;
    current->next = NULL;
    

}

#include<stdio.h>
#include<stdlib.h> 

struct linked {
    int data;
    struct linked *next;
};

void insertatbegin(struct linked **head, int num) {
    struct linked *new = (struct linked *) malloc(sizeof(struct linked));
    if (new == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    new->data = num;
    new->next = NULL;
    if (*head == NULL) {
        *head = new;        
    } else {
        new->next = *head;
        *head = new;
    }
}




int main() {
    struct linked *head = NULL; // Initialize head to NULL
    insertatbegin(&head, 10);
    insertatbegin(&head, 20);
    insertatbegin(&head, 30);
    insertatbegin(&head, 40);

    
    printList(head);

    return 0;
}

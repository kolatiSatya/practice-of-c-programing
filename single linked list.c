#include <stdio.h> 
#include <stdlib.h> 
typedef struct Node { 
    int data; 
    struct Node* next; 
} Node; 
Node* head = NULL; 
void insertAtBeginning(int data) { 
    Node* newNode = (Node*)malloc(sizeof(Node)); 
    newNode->data = data; 
    newNode->next = head; 
    head = newNode; 
} 
void insertAtEnd(int data) { 
    Node* newNode = (Node*)malloc(sizeof(Node)); 
    newNode->data = data; 
    newNode->next = NULL; 
    if (head == NULL) { 
        head = newNode; 
        return; 
    } 
    Node* temp = head; 
    while (temp->next != NULL) { 
        temp = temp->next; 
    } 
    temp->next = newNode; 
} 
void insertAtPosition(int data, int position) { 
    Node* newNode = (Node*)malloc(sizeof(Node)); 
    newNode->data = data; 
    if (position == 1) { 
        newNode->next = head; 
        head = newNode; 
        return; 
    } 
    Node* temp = head; 
    int i; 
    for (i = 1; i < position - 1 && temp != NULL; i++) { 
        temp = temp->next; 
    } 
    if (temp == NULL) { 
        printf("Position out of range.\n"); 
        free(newNode); 
        return; 
    } 
    newNode->next = temp->next; 
    temp->next = newNode; 
} 
void deleteAtBeginning() { 
    if (head == NULL) { 
        printf("List is empty.\n"); 
        return; 
    } 
    Node* temp = head; 
    head = head->next; 
    free(temp); 
} 
void deleteAtEnd() { 
    if (head == NULL) { 
        printf("List is empty.\n"); 
        return; 
    } 
    if (head->next == NULL) { 
        free(head); 
        head = NULL; 
        return; 
    } 
    Node* temp = head; 
    while (temp->next->next != NULL) { 
        temp = temp->next; 
    } 
    free(temp->next); 
    temp->next = NULL; 
} 
void deleteAtPosition(int position) { 
    if (head == NULL) { 
        printf("List is empty.\n"); 
        return; 
    } 
    if (position == 1) { 
        Node* temp = head; 
        head = head->next; 
        free(temp); 
        return; 
    } 
    Node* temp = head; 
    int i; 
      for ( i = 1; i < position - 1 && temp != NULL; i++) { 
        temp = temp->next; 
    } 
    if (temp == NULL || temp->next == NULL) { 
        printf("Position out of range.\n"); 
        return; 
    } 
    Node* delNode = temp->next; 
    temp->next = temp->next->next; 
    free(delNode); 
} 
void search(int data) { 
    Node* temp = head; 
    int position = 1; 
    while (temp != NULL) { 
        if (temp->data == data) { 
            printf("Data found at position %d\n", position); 
            return; 
        } 
        temp = temp->next; 
        position++; 
    } 
    printf("Data not found in the list.\n"); 
} 
void display() { 
    Node* temp = head; 
    if (temp == NULL) { 
        printf("List is empty.\n"); 
        return; 
    } 
    while (temp != NULL) { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    } 
    printf("NULL\n"); 
} 
int main() { 
    int choice, data, position; 
    while (1) { 
        printf("\n1. Insert at beginning\n2. Insert at end\n3. Insert at position\n4. Delete at beginning\n5. Delete at end\n6. Delete at position\n7. Search\n8. Display\n9. Exit\n");
    
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
        switch (choice) { 
            case 1: 
                printf("Enter data to insert: "); 
                scanf("%d", &data); 
                insertAtBeginning(data); 
                break; 
            case 2: 
                printf("Enter data to insert: "); 
                scanf("%d", &data); 
                insertAtEnd(data); 
                break; 
            case 3: 
                printf("Enter data to insert: "); 
                scanf("%d", &data); 
                printf("Enter position: "); 
                scanf("%d", &position); 
                insertAtPosition(data, position); 
                break; 
            case 4: 
                deleteAtBeginning(); 
                break; 
            case 5: 
                deleteAtEnd(); 
                break; 
            case 6: 
                printf("Enter position: "); 
                scanf("%d", &position); 
                deleteAtPosition(position); 
                break; 
            case 7: 
                printf("Enter data to search: "); 
                scanf("%d", &data); 
                search(data); 
                break; 
            case 8: 
                display(); 
                break; 
            case 9: 
                exit(0); 
            default: 
                printf("Invalid choice.\n"); 
        } 
    } 
    return 0; 
} 


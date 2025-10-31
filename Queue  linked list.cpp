#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* front = NULL;
struct Node* rear = NULL;
void enqueue(int ele) {
    Q* newNode = (Q*) mallocsizeof(Q);
    newNode->data = ele;
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("%d enqueued to the queue\n", ele);
}
void dequeue() {
    if (front == NULL) {
        printf("Queue is Empty!\n");
        return;
    }
    Q* temp = front;
    x=temp->data;
    printf("%d dequeued from the queue\n", temp->data);
    front = front->next;
    if (front == NULL) {
        rear = NULL; // Queue is now empty
    }
    free(temp);
    return x;
}
void peek() {
    if (front == NULL) {
        printf("Queue is Empty!\n");
    } else {
        printf("Front element: %d\n", front->data);
    }
}
void display() {
    if (front == NULL) {
        printf("Queue is Empty!\n");
        return;
    }

    struct Node* temp = front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    int choice, ele;

    while (1) {
        printf("\n--- Queue Using Linked List ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
        case 1:
            printf("Enter value to enqueue: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

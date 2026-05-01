#include <iostream>
using namespace std;

#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        cout << "Queue Overflow\n";
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        cout << "Inserted: " << value << endl;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow\n";
    } else {
        cout << "Deleted: " << queue[front] << endl;
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty\n";
    } else {
        cout << "Queue Elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while (choice != 4);

    return 0;
}
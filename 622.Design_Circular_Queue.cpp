class MyCircularQueue {
    int *arr;
    int front;
    int rear;
    int size;

public:
    MyCircularQueue(int k) {
        size = k;
        arr = new int[size];
        front = rear = -1;
    }

    bool enQueue(int value) {
        if ((front != 0 && front == rear + 1) || (front == 0 && rear == size - 1)) {
            return false; // Queue is full
        } else if (front == -1) {
            front = rear = 0; // First element to push
        } else if (rear == size - 1 && front != 0) {
            rear = 0; // Maintain cyclic nature
        } else {
            rear++; // Normal flow
        }

        arr[rear] = value; // Push inside the queue
        return true;
    }

    bool deQueue() {
        if (front == -1) {
            return false; // Queue is empty
        }

        int ans = arr[front];
        arr[front] = -1;
        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0; // Maintain cyclic nature
        } else {
            front++; // Normal flow
        }

        return true;
    }

    int Front() {
        if (front == -1) {
            return -1; // Queue is empty
        }
        return arr[front];
    }

    int Rear() {
        if (rear == -1) {
            return -1; // Queue is empty
        }
        return arr[rear];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (front != 0 && front == rear + 1) || (front == 0 && rear == size - 1);
    }
};

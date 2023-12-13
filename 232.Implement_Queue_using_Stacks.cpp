class MyQueue {
private:
    stack<int> first;
    stack<int> second;

public:
    MyQueue() {}

    void push(int x) {
        first.push(x);
    }

    int pop() {
        if (empty()) {
            return -1; 
        }

        if (second.empty()) {
            // Move elements from first stack to second stack
            while (!first.empty()) {
                second.push(first.top());
                first.pop();
            }
        }

        int removedItem = second.top();
        second.pop();
        return removedItem;
    }

    int peek() {
        if (empty()) {
            return -1; 
        }

        if (second.empty()) {
            // Move elements from first stack to second stack
            while (!first.empty()) {
                second.push(first.top());
                first.pop();
            }
        }

        return second.top();
    }

    bool empty() {
        return first.empty() && second.empty();
    }
};
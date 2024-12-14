#include <iostream>
using namespace std;

class CircularQueue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    // Constructor
    CircularQueue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueue operation
    bool enqueue(int value)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "Queue is full" << endl;
            return false;
        }
        else if (front == -1)
        { // First element to push
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }

        arr[rear] = value;
        return true;
    }

    // Dequeue operation
    int dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is empty!" << endl;
            return -1; // To indicate the queue is empty
        }

        int ans = arr[front];
        arr[front] = -1;
        if (front == rear)
        { // Single element is present
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0; // Maintain cyclic nature
        }
        else
        {
            front++;
        }
        return ans;
    }

    // Destructor
    ~CircularQueue()
    {
        delete[] arr;
    }
};

int main()
{
    CircularQueue q(6); // Initialize a circular queue with size 5

    // Demonstrate enqueue operation
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    // Attempt to enqueue into a full queue
    q.enqueue(60);

    // Demonstrate dequeue operation
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    // Add more elements
    q.enqueue(60);
    q.enqueue(70);

    // Dequeue remaining elements
    while (q.dequeue() != -1)
        ;

    return 0;
}

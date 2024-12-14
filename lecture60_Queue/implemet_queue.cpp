#include <iostream>

using namespace std;

class Queue
{
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    // Constructor
    Queue()
    {
        size = 10001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    // Check if the queue is empty
    bool isEmpty()
    {
        return qfront == rear;
    }

    // Add an element to the queue
    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full!" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    // Remove and return the front element from the queue
    int dequeue()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    // Return the front element without removing it
    int front()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }

    // Print all elements in the queue
    void printQueue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            cout << "Queue elements: ";
            for (int i = qfront; i < rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    // Destructor to free allocated memory
    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    // Print all elements in the queue
    q.printQueue();

    cout << "Dequeued element: " << q.dequeue() << endl;
    q.printQueue();

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}

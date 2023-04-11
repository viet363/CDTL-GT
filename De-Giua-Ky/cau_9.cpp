//hang doi 
#include <iostream>
#define MAX_SIZE 10

using namespace std;

class Queue {
    private:
        int a[MAX_SIZE];
        int front, rear;

    public:
        Queue() {
            front = -1;
            rear = -1;
        }

        bool isFull() {
            if (front == 0 && rear == MAX_SIZE - 1) 
				return true;
            if (front == rear + 1) 
				return true;
            return false;
        }

        bool isEmpty() {
            if (front == -1)
				 return true;
            return false;
        }

        void enQueue(int element) {
            if (isFull()) {
                cout << "Hang doi day"<<endl;
            } else {
                if (front == -1) front = 0;
                rear = (rear + 1) % MAX_SIZE;
                a[rear] = element;
                cout << "Phan tu duoc them vao: " << element << endl;
            }
        }

        int deQueue() {
            int element;
            if (isEmpty()) {
                cout << "Hang doi trong "<<endl;
                return -1;
            } else {
                element = a[front];
                if (front == rear) {
                    front = -1;
                    rear = -1;
                } else {
                    front = (front + 1) % MAX_SIZE;
                }
                cout << "Phan tu duoc loai bo: " << element << endl;
                return element;
            }
        }

        void display() {
            int i;
            if (isEmpty()) {
                cout << "Hang doi trong "<<endl;
            } else {
                cout << "Hang doi hien tai:"<<endl;
                for (i = front; i != rear; i = (i + 1) % MAX_SIZE) {
                    cout << a[i] << " ";
                }
                cout << a[i] << endl;
            }
        }
};

int main() {
    Queue q;
    q.enQueue(41);
    q.enQueue(23);
    q.enQueue(4);
    q.enQueue(14);
    q.enQueue(56);
    q.enQueue(1);

    q.display();

    q.enQueue(55);
    q.display();

    q.deQueue();
    q.display();

    return 0;
}


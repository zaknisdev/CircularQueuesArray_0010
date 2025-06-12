#include <iostream>
using namespace std;

class Queues {
    int FRONT, REAR, max = 5;
    int queue_array[5];

    public: 
        Queues() {
            FRONT = -1;
            REAR = -1;
        }
    
    void insert() {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << endl;

        if (FRONT == -1) {
            FRONT = 0;
            REAR = 0;
        }
        else {
            if (REAR == max - 1)
                REAR = 0;
            else  
                REAR = REAR + 1;
        }
        queue_array[REAR] = num;
    }

    void remove() {
        if (FRONT == -1) {
            cout << "Queue underflow\n";
            return;
        }
        cout << "\nElement deleted from the queue is: " << queue_array[FRONT] << "\n";

    }
}

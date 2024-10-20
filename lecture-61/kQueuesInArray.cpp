#include<iostream>
using namespace std;


class kQueue{
    private:
        int n;
        int k;
        int *arr;
        int *front;
        int *rear;
        int *next;
        int freespot;
    public:
        kQueue(int n, int k){
            this->n = n;
            this->k = k;
            arr = new int[n];
            front = new int[k];
            rear = new int[k];
            next = new int[n];
            for(int i=0; i<n; i++){
                front[i] = -1;
                rear[i] = -1;
            }
            for(int i=0; i<n-1; i++){
                next[i] = i+1;
            }
            next[n-1] = -1;
            freespot = 0;
        }

        void enqueue(int data, int qn){
            if(freespot == -1){
                cout<<"Queue is full"<<endl;
                return;
            }

            //get the index where u can insert
            int index = freespot;

            //update freespot from next
            freespot = next[index];

            //check weather it is the first elemet of thet queue
            if(front[qn-1] == -1){
                front[qn-1] = index;
            }
            else{
                //link the prev last element of the queue to the new element in the next
                next[rear[qn-1]] = index; 
            }
            // update the curr index of next
            next[index] = -1;

            // update rear
            rear[qn-1] = index;
            arr[index] = data;
        }

        int dequeue(int qn){
            //check weather queue is empty
            if(front[qn-1] == -1){
                cout<<"Queue is empty"<<endl;
                return -1;
            }

            int index = front[qn-1];
            front [qn-1] = next[index];
            next [index] = freespot;
            freespot = index;
            return arr[index];
        }

};
int main() {
    kQueue q(10, 3);
    q.enqueue(10, 1);   
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);   
    cout << q.dequeue(1) << " dequeued from queue number 1" << endl;
    cout << q.dequeue(2) << " dequeued from queue number 2" << endl;
    cout << q.dequeue(1) << " dequeued from queue number 1" << endl;
    return 0;
}
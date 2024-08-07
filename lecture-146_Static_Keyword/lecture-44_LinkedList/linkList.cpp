#include<iostream>
using namespace std;

class node {
    public:
        int data;
        node* next;

        node(int data){
            this->data = data;
            this->next = NULL;
        }
        ~node(){
            int val = this->data;
            if(this->next != NULL){
                delete(next);
                this->next=NULL;
            }
        }
};

void IH(int data, node* &head){
    node* temp = new node(data);
    temp -> next = head;
    head = temp;
}

void IT(int data , node* & tail){
    node* temp = new node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(int position, int data, node* & head, node* &tail){
    node* curr = head;
    int count = 1;
    //for position one
    if(position == 1){
        IH(data,head);
        return;
    }

    while(count < position-1){
        curr = curr -> next;
        count++;
    }
    if(curr->next == NULL){
        IT(data,tail);
        return;
    }
    node* nodeToInsert = new node(data);
    nodeToInsert->next = curr->next;
    curr->next = nodeToInsert;
}

void Print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteAtPosition(int postion, node* &head){
    if(postion ==1){
        node* temp = head;
        head = head -> next;
        delete temp;
        return;
    }
    node* curr = head;
    node* prev = NULL;
    int count = 1;
    while(count < postion){
        prev=curr;
        curr = curr-> next;
    }
    prev->next = curr->next;
    curr->next=NULL;
    delete(curr);
}
int main() {
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    IH(20,head);
    IT(20,tail);
    insertAtPosition(3,20,head,tail);
    deleteAtPosition(4,head);
    Print(head);
    return 0;
}
// /*
// Following is the class structure of the Node class:

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node()
//     {
//         this->data = 0;
//         next = NULL;
//     }
//     Node(int data)
//     {
//         this->data = data; 
//         this->next = NULL;
//     }
//     Node(int data, Node* next)
//     {
//         this->data = data;
//         this->next = next;
//     }
// };
// */

// Node *findMiddle(Node *head) {
//     // Write your code here
//     Node* fast = head;
//     Node* slow = head;
//     int count = 0;
//     while(fast!=NULL){
//         fast = fast->next;
//         count++;
//         if(count%2==0){
//             slow = slow->next;
//         }
//         if(fast==NULL){

//             return slow;
//         }
//         fast = fast->next;
//         count++;
//         if(count%2==0){
//             slow = slow->next;
//         }
//         if(fast==NULL){

//             return slow;
//         }
//     }
// }


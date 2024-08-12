//	Write your code here.
	// if(head == NULL){
	// 	return false;
	// }
	// if(head -> next == NULL){
	// 	return false;
	// }
	// map<Node*, bool> visited;
	// Node* temp = head;
	// while(temp!=NULL){

	// 	if(visited[temp] == true){
	// 		return true;
	// 	}
	// 	visited[temp] = true;
	// 	temp = temp->next;
	// }
	// return false;

    //optimised method

    // if(head->next ==NULL){
	// 	return false;
	// }
	// Node* fast=head;
	// Node* slow=head;
	// while(true){
	// 	fast=fast->next;
	// 	fast=fast->next;
	// 	slow=slow->next;
	// 	if(slow==fast){
	// 		return true;
	// 	}

	// }
	// return false;
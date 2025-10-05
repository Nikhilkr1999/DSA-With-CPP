#include<iostream>
using namespace std;
int count = 0;
struct Node{
	int data;
	Node *next = NULL;
};
void insertNode(Node *&head){
	Node *temp = head;
	Node *newNode = new Node;
	int val;
	cout<<"Enter the data to insert\n";
	cin>>val;
	newNode->data = val;
	if(temp == NULL){
		head = newNode;
	}
	else{
		while(temp->next != NULL){
			temp = temp -> next;
		}
		temp->next = newNode;
	}
	count++;
}

void deleteNode(Node *&head){
	Node *prev = NULL, *temp = head;
	
	if(temp == NULL){
		cout<<"There is no node to be delete\n";
	}
	if(count == 1){
		head = temp->next;
		delete temp;
		count--;
	}
	else {
		while(temp->next != NULL){
			prev = temp;
			temp = temp->next;
		}
		count--;
		cout<<"The node is deleted now and the count is "<<count<<"\n";
	}
}

void deleteGivenNode(Node *&head, int locn){
	Node *prev = NULL, *temp = head;
	int cot = 1;
	if(temp == NULL || locn < 1){
		cout<<"There is no node to be delete";
	}
	if(locn == 1){
		head = head->next;
		delete temp;
		count--;
		return;
	}
	else{
		while(temp -> next != NULL){
			temp = temp->next;
			cot++;
			if(cot == locn) break;
		}
		if(cot == locn){
			prev = temp->next;
			count--;
			delete temp;
		}
		else cout<<"Node not found\n";
	}
}

void displayNode(Node *head){
	Node *temp = head;
	cout<<"The given data are \n";
	while(temp != NULL){
		cout<<temp->data <<" ";
		temp = temp->next;
	}
}
int main(){
	Node *head = NULL;
	int choice;
	while(1){
		cout<<"\nEnter the choice\n"
			<<"1. insertNode\n"
			<<"2. deleteNode\n"
			<<"3. delete the given node\n"
			<<"4. display all data\n"
			<<"5. Exit\n";
		cin>>choice;
		switch(choice){
			case 1:
				insertNode(head);
				cout<<"The Node count is : "<<count<<" \n";
				break;
			case 2:
				deleteNode(head);
				cout<<"The Node count is : "<<count;
				break;
			case 3:
				int locn;
				cout<<"Enter the lonc\n";
				cin>>locn;
				if(locn > count){
					cout<<"Node is not there to be deleted\n";
					cout<<"The Node count is : "<<count<<"\n";
				}
				else deleteGivenNode(head,locn);
				break;
			case 4:
				displayNode(head);
				break;
			case 5:
				exit(1);
			default : 
				cout<<" Enter the valilid option\n";
		}
	
	}
	return 0;		
}
#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

class MyStack{
	private : 
		int size=0; 
		Node *head;
	public:
		
		MyStack(){
			head = new Node();
			head->data=0;
			head->next=NULL;	
		}
		
		void push(int val){
			cout<<"I am push\n";
			Node *temp=new Node();
			temp->data=val;
			temp->next=head;
			head=temp;
			size++;
		}
		int pop(){
			if (isEmpty()) {
		        cout << "Stack is empty." << endl;
		        return -1; // Return a sentinel value or handle the error appropriately.
		    }
			Node* t1;
			t1=head;
			head=head->next;
			size--;
			int poppedElement = t1->data;
			delete t1;
			return poppedElement;
		}
		
		int top(){
			return head->data;
			
		}
		int getSize(){
			return size;
		}
		
		bool isEmpty() {
		    return size == 0;
		}
		
};

int main(){
	MyStack mS;
	int option;
	while(1){
		cout<<"Please select the option given below:-"<<endl;
		cout<<"press 1 to push\n";
		cout<<"press 2 to pop\n";
		cout<<"press 3 to see the top most element\n";
		cout<<"press 4 to get size\n";
		cout<<"press 5 to quit\n\n";
	
		cin>>option;
		
		if(option==5){
			return 0;
		}
		switch(option){
			case 1:
				int val;
				cout<<"Enter the data\n";
				cin>>val;
				mS.push(val);
				break;
			
			case 2:
				int data;
				data=mS.pop();
				cout<<"the pop element is:-"<<data<<endl;
				break;
			
			case 3:
				int topd=mS.top();
				cout<<"the top element is:-"<<topd<<endl;
				break;
			
			case 4:
				int siz=mS.getSize();
				cout<<"the size is:- " <<siz;
				break;
				
			default:
				cout<<"wrong op";
	       } 
		}
	return 0;
}
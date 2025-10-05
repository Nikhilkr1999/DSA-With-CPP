#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        vector<Node*> children;

        Node(int val){
            data = val;
        }

};
void displayData(Node*root){
    cout<<root->data;
    cout<<endl;
    for(auto i : root->children){
        displayData(i);
    }
}
int main(){
    Node* root = new Node(5);

    Node* child1 = new Node(10);
    Node* child2 = new Node(15);
    Node* child3 = new Node(20);

    // push the all child into the root node;
    root->children.push_back(child1);
    root->children.push_back(child2);
    root->children.push_back(child3);

    //insert the child data into child
    child1->children.push_back(new Node(25));
    child1->children.push_back(new Node(25));

    child2->children.push_back(new Node(35));

    child3->children.push_back(new Node(40));
    child3->children.push_back(new Node(45));
    child3->children.push_back(new Node(50));
    
    cout<<"The data is given"<<endl;
    displayData(root);
    cout<<"Thank you!!!"<<endl;
    return 0;
}
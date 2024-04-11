#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data = data;
        this->next =NULL;
    }
};
void print(Node*head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}
int main(){
    //statically
    // Node n1(1);
    // Node*head = &n1;
    // Node n2(2);
    // n1.next= &n2;
    // Node n3(3);
    // n2.next = &n3;
    // Node n4(4);
    // n3.next = &n4;
    // Node n5(5);
    // n4.next = &n5;
    // cout<<n1.data<<"->"<<n2.data<<"->"<<n3.data<<"->"<<n4.data<<"->"<<n5.data;

    //Dynamically
    Node*n1 = new Node(1);
    Node*head = n1;
    Node*n2 = new Node(2);
    n1->next = n2;
    Node*n3 = new Node(3);
    n2->next = n3;
    Node*n4 = new Node(4);
    n3->next = n4;
    Node*n5 = new Node(5);
    n4->next = n5;
    // cout<<n1->data<<"->"<<n2->data<<"->"<<n3->data<<"->"<<n4->data<<"->"<<n5->data;
    // cout<<head->data<<"->";
    // head = head->next;
    // cout<<head->data<<"->";
    // head = head->next;
    // cout<<head->data<<"->";
    // head = head->next;
    // cout<<head->data<<"->";
    // head = head->next;
    // cout<<head->data;
    print(head);
    return 0;
}
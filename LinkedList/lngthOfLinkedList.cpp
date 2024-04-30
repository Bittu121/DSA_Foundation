#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
Node*takeInput(){
    int data;
    cout<<"Enter data";
    cin>>data;
    Node*head = NULL;
    while(data!=-1){
        Node*newNode = new Node(data);
        if(head==NULL){
            head = newNode;
        }else{
            Node*temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin>>data;
    }
    return head;
}
void print(Node*head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->next;
    }
}

// int lengthOfLinkedList(Node*head){
//     Node*temp = head;
//     int count=0;
//     while(temp!=NULL){
//         temp = temp->next;
//         count++;
//     }
//     return count;
// }

// void printithNode(Node*head,int pos){
//     int count=0;
//     Node*temp = head;
//     while(count<pos){
//         if(temp!=NULL){
//             temp=temp->next;
//             count++;
//         }
//     }
//     if(temp!=NULL){
//         cout<<temp->data<<" ";
//     }

// }

Node* insertNode(Node*head,int pos,int data){
    Node*newNode = new Node(data);
    int count=0;
    Node*temp = head;
    if(pos==0){
        newNode->next = head;
        head=newNode;
        return head;
    }
    while(temp!=NULL && count<pos-1){
        temp = temp->next;
        count++;
    }
    if(temp!=NULL){
        Node*a = temp->next;
        temp->next = newNode;
        newNode->next= a;
    }
    return head;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Node*head = takeInput();
        // cout<<lengthOfLinkedList(head);
        // print(head);
        // int pos;
        // cin>>pos;
        // printithNode(head,pos);
        int data;
        cin>>data;
        int pos;
        cin>>pos;
        insertNode(head,pos,data);
        print(head);
    }
    return 0;
}
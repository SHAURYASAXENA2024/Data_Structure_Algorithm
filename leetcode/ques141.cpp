#include<iostream>
using namespace std;
class hello {};
class node {
    public:
    int data;
    node* next;
    node(int v){
        data=v;
        next=NULL;
    }
};
class list{
    public:
    node* head;
    node* tail;
    list(){
        head=tail=NULL;
    }
    void push_back(int val){
        node* newnode = new node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    void print(){
        node* temp=head;
        while(temp!=NULL){
            cout << temp->data << endl;
            temp=temp->next;
        }
    }
    bool hasCycle(list* l1){
        node* temp=l1->head;
        if(temp==NULL){
            return false;
        }
        while(temp->next!=NULL){
            
        }
    }
};
int main()
{
return 0;
}
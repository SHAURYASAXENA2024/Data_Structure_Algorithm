#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    public:
    node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    node* head;
    node* tail;
    public:
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
            newnode=tail;
        }
    }
    void print(){
        node* temp=head;
        while(temp!=NULL){
            cout << temp->data << endl;
            temp=temp->next;
        }
    }
};
class solution : public node , public list {
    public:
    void reorderList(list* head){
        while(head!=NULL){
            
        }
    }

};
int main()
{
    return 0;
}
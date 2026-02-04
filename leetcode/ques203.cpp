#include<iostream>
using namespace std;
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
    list* removeElement(list* l, int val){
        list* l1 = new list();
        node* temp=head;
        node* prev;
        node* curr;
        while(temp!=NULL){
            if(val==head->data){
            head=head->next;
            delete head;
        }
        else if(temp->data==val){
            
        }
    }
    }
};
int main()
{
    return 0;
}
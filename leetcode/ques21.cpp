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
    list* merge(list* l1, list* l2){
        list* l3 = new list();
        node* temp=l1->head;
        node* temp2=l2->head;
        if(l1->head==NULL && l2->head==NULL){
            return nullptr;
        }
        


    }
};
int main()
{
return 0;
}
#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node* next;
    node(int value){
        data=value;
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
    cout << "NULL\n" << endl;
}
list* addTwoNumber(list* l1, list* l2){
    list* l3 = new list();
    node* temp1=l1->head;
    node* temp2=l2->head;
    if(l1->head==NULL && l2->head==NULL){
        cout << "list is empty" << endl;
    }
    if(l1->head==NULL || l2->head==NULL){
        l3->push_back(temp1->data+0);
    }
    while(temp1!=NULL && temp2!=NULL){
        l3->push_back(temp1->data+temp2->data);
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return l3;
}
};
int main()
{
    list lu,lo;
    lu.push_back(2);
    lu.push_back(3);
    lu.push_back(4);
    lu.print();
    lo.push_back(5);
    lo.push_back(6);
    lo.push_back(4);
    lo.print();
    list* ld;
    ld=lu.addTwoNumber(&lu,&lo);
    ld->print();
    return 0;
}
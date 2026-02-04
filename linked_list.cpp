#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    private:
    node* head;
    node* tail;
    public:
    list(){
        head=tail=NULL;
    }
    void push_back(int val){
        node* newnode= new node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    void push_front(int val){
        node* x= new node(val);
        if(head==NULL){
            head=tail=x;
        }
        else{
            head->next=x;
            head=x;
        }
    }
    void print(){
        node* temp=head;
        while(temp!=NULL){
            cout << temp->data << "->" ;
            temp=temp->next;
        }
        cout << "NULL" << endl;
    }
    void search(int val){
        node* temp=head;
        int f=0;
        while(temp!=NULL){
            if(temp->data==val){
                f=1;
                cout << "FOUND" << endl;
                break;
            }
            temp=temp->next;
        }
    }
    void pop_front(){
        if(head==NULL){
            cout << "list is empty" << endl;
        }
        else{
            node* a =head;
            head=head->next;
            a->next=NULL;
            delete a;
        }
    }
    void pop_back(){
        if(head==NULL){
            cout << "list is empty" << endl;
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
        }
        else{
            node* a = head;
            while(a->next !=tail){
                a=a->next;
            }
            delete tail;
            tail=a;
            tail->next=NULL;
        }
    }
    void insert_node(int val, int pos){
        if(pos<0){
            cout << "invalid pos" << endl;
        }
        if(pos==0){
            push_front(val);
        }
        node* temp=head;
        for(int i=0; i<pos-1 && temp != NULL; i++){
            temp=temp->next;
        }
        if(temp==NULL){
            cout << "position out of range " << endl;
        }
        node* newnode = new node(val);
        newnode->next= temp->next;
        temp->next=newnode;
        if(temp==tail){
            tail=newnode;
        }
    }
    void delete_node(int val){
        if(head==NULL){
            cout << "list is empty" << endl;
        }
        if(head->data==val){
            pop_front();
            return ;
        }
        node* temp = head;
        while(temp->next != NULL && temp->next->data !=val){
            temp=temp->next;
        }
        if(temp->next==NULL){
            cout << "value not found" << endl;
            return ;
        }
        node* del = temp->next;
        temp->next= del->next;
        if(del == tail){
            tail=temp;
        }
        del->next= NULL;
        delete del;
    }
};
int main()
{
    list ll;
    ll.push_back(90);
    ll.push_back(89);
    ll.push_back(88);
    ll.push_back(87);
    ll.push_back(86);
    ll.print();
    ll.search(86);
    return 0;
}
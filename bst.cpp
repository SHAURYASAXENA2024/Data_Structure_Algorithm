#include<iostream>
using namespace std;
class bstnode {
    public:
    int data;
    bstnode* left;
    bstnode* right;
    bstnode(){}
    bstnode(int val){
        data=val;
        left=right=NULL;
    }
    void insert(bstnode* &bst, int v){
        if(bst == NULL){
            bst=new bstnode(v);
        }
        else if(v>bst->data){
            insert(bst->right,v);
        }
        else{
            insert(bst->left,v);
        }
    }
    // print the nodes in the ascednig order
    void inorder(bstnode* &bst){
        if(bst == NULL){
            return ;
        }
        inorder(bst->left);
        cout << bst->data << endl;
        inorder(bst->right);
    }
    void PreOrder(bstnode* &bst){
        if(bst==NULL){
            return ;
        }
        cout << bst->data << endl;
        PreOrder(bst->left);
        PreOrder(bst->right);
    }
    void PostOrder(bstnode* &bst){
        if(bst==NULL){
            return ;
        }
        PostOrder(bst->left);
        PostOrder(bst->right);
        cout << bst->data << endl;
    }
    void search(bstnode* &bst, int val){
        bstnode* temp= bst;
        while(temp != NULL){
            if(temp->data==val){
                cout << "TRUE" << endl;
            }
            else if(val>temp->data){
                temp=temp->right;
            }
            else{
                temp=temp->left;
            }
        }
        cout << "FALSE" << endl;
    }
};
int main()
{
    return 0;
}
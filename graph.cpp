#include<iostream>
using namespace std;
class node {
    public:
    int vertex;
    node* next;
    node(int v){
        vertex = v;
        next = NULL;
    }
};
class Graph{
    private:
    int v;
    node** adj;
    public:
    Graph(int vertices){
        v=vertices;
        adj= new node*[v];
        for(int i=0; i<v; i++){
            adj[i] = nullptr;
        }
    }
    void addEdge(int v , int u){
        if(u<0 || u>=v || v<0 || v>=u){
            cout << "invalid edge" << endl;
            return ;
        }
        node* newnode = new node(v);
        newnode->next=adj[u];
        adj[v]=newnode;

        newnode = new node(u);
        newnode->next=adj[v];
        adj[v]=newnode;
    }
    void printGraph(){
        for(int i=0; i<v; i++){
            cout << i << ":" ;
            node* temp = adj[i];
            while(temp){
                cout << temp->vertex << "->" ;
                temp=temp->next;
            }
            cout << "NULL\n";
        }
    }
};
int main()
{
    return 0;
}   
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
        node* newnode = new node()
    }
}
int main()
{
    return 0;
}   
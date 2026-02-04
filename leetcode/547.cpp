#include<iostream>
#include<vector>
using namespace std;
class solution {
    private:
    void dfs(int node, vector<int> adjls[], int vis[]){
        vis[node]=1;
        for(auto it:adjls[node]){
            if(!vis[it]){
                dfs(it,adjls,vis);
            }
        }
    }
    public:
    int findcircleNum(vector<vector<int>>& isConnected){
        vector<int> adjLis[isConnected.size()];
        for(int i=0; i<isConnected.size(); i++){
            for(int j=0; j<isConnected.size(); j++){
                if(isConnected[i][j] ==1 && i!=j){
                    adjLis[i].push_back(j);
                    adjLis[j].push_back(i);
                }
            }
        }
        int vis[isConnected.size()]={0};
        int cnt=0;
        for(int i=0; i<isConnected.size(); i++){
            if(!vis[i]){
                cnt++;
                dfs(i,adjLis,vis);
            }
        }
        return cnt;
    }
};
int main()
{
    return 0;
}
class Solution {
private:
    void dfs(int node, vector<int> adj[], vector<int>& vis) {
        vis[node] = 1;
        for (auto it : adj[node]) {
            if (!vis[it]) {
                dfs(it, adj, vis);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> adj[n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                }
            }
        }

        vector<int> vis(n, 0);
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                cnt++;
                dfs(i, adj, vis);
            }
        }
        return cnt;
    }
};

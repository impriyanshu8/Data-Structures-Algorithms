#include<iostream>
#include<vector>
#include<queue>
using namespace std ;

// Function to return breadth first traversal of the graph
vector<int> bfsOfgraph(vector<int> adj[] ,int n){
    vector<int> visited(n+1,0);
    queue <int> q;
    vector<int> bfs;
    visited[1] = 1;
    q.push(1);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it : adj[node] ){
                if(!visited[it]){
                    visited[it] = 1;
                    q.push(it);

                }
            }
        }
                return bfs;
}

// To print adjacency list 
void displayList(int n , vector<int> adj[]){
    cout << "Adjacency List:" << endl;
    for (int j = 1; j <= n; j++) {
        cout << j << ": ";
        for (int neighbor : adj[j]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
}
// to create adjacency list 
void createadjacencylist( int m , vector<int> adj[]){
    for(int i=0;i<m;i++){
        int u, v;
        cout<<"Enter the nodes between which edges exists: "<<endl;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
int main(){
    int n, m ;
    cout<<"Enter the number of nodes : ";
    cin>>n;
    cout<<"Enter the number of edges: ";
    cin>>m;
    
vector<int> adj[n + 1]; // 1-based indexing

createadjacencylist(m, adj);
displayList(n, adj);

vector<int> bfs = bfsOfgraph(adj, n);
cout << "\nBFS Traversal starting from node 1: ";
for(int node : bfs){
    cout << node << " ";
}
cout << endl;

return 0;
}
#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    int n, m ;
    cout<<"Enter the number of nodes : ";
    cin>>n;
    cout<<"Enter the number of edges: ";
    cin>>m;
    vector<vector<int>> adj (n+1, vector<int>(n+1,0));
    for(int i=0;i<m;i++){
       int u , v ;
       cout<<"Enter the nodes between which edges exists: "<<endl;
       cin>> u >> v ;
        adj[u][v] = 1 ;
        adj[v][u] = 1 ;
    }

    for(int i=1; i<=m ; i++){
        for(int j=1 ;j<=n; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
        
    }
    return 0 ;
}
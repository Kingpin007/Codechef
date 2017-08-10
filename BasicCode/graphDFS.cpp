class Graph{
    int n;
    list<int> *adj;
public:
    Graph(int n){
        this->n = n;
        adj = new list<int>[n];
    }

    void addEdge(int u,int v){
        adj[u].push_back(v);
    }

    int DFSUtil(int u,int v,bool* visited){
        visited[u] = true;
        cout<<u<<" ";
        if(u==v)
            return v;
        else{
            list<int>::iterator i;
            for(i = adj[u].begin();i!= adj[u].end();i++){
                if(!visited[*i]){
                    cout<<"From node: "<<u<<" not visited: "<<*i<<endl;
                    system("pause");
                    return u*DFSUtil(*i,v,visited);
                }
            }
        }
    }

    int DFS(int u,int v){
        int product = 1;
        bool *visited = new bool[n];
        for(int i=0;i<v;i++) visited[i] = false;
        product = DFSUtil(u,v,visited);
        return product;
    }

};

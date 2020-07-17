#include<iostream>
#include<list>
using namespace std;

class graph
{
    list<int> *adj;
    int V;
public:
    graph(int V)
    {
        this->V=V;
        adj=new list<int>[V];
    }

    void edge(int v,int w)
    {
        adj[v].push_back(w);
    }

    void bfs(int s)
    {
        bool *visited=new bool[V];
        for(int i=0;i<V;i++)
        {
            visited[i]=false;
        }
        list<int> queue;

        visited[s]=true;
        queue.push_back(s);
        list <int>::iterator i;
        while(!queue.empty())
        {
            s=queue.front();
            cout<<s<<" ";
            queue.pop_front();

            for(i=adj[s].begin();i!=adj[s].end();i++)
            {
                if(visited[*i]!=true)
                {
                   visited[*i]=true;
                   queue.push_back(*i);

                }
            }

        }
    }
};

int main()
{
    graph g(4);
    g.edge(0,1);
    g.edge(0,2);
    g.edge(1,2);
    g.edge(2,0);
    g.edge(2,3);
    g.edge(3,3);
    g.bfs(2);
    return 0;
}

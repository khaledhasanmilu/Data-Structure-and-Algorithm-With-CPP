
#include<bits/stdc++.h>
using namespace std;

class UnionFind
{
public:
    UnionFind(int size)
    {
        parent.resize(size);
        rank.resize(size, 0);
        for (int i = 0; i < size; ++i)
        {
            parent[i] = i;
        }
    }

    int find(int u)
    {
        if (parent[u] != u)
        {
            parent[u] = find(parent[u]);
        }
        return parent[u];
    }

    bool unionSets(int u, int v)
    {
        int rootU = find(u);
        int rootV = find(v);
        if (rootU != rootV)
        {
            if (rank[rootU] > rank[rootV])
            {
                parent[rootV] = rootU;
            }
            else if (rank[rootU] < rank[rootV])
            {
                parent[rootU] = rootV;
            }
            else
            {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
            return true;
        }
        return false;
    }

private:
    vector<int> parent;
    vector<int> rank;
};

struct Edge
{
    int u, v, weight;
};

bool compareEdges(const Edge &a, const Edge &b)
{
    return a.weight < b.weight;
}

vector<Edge> kruskal(int n, vector<Edge> &edges)
{
    sort(edges.begin(), edges.end(), compareEdges);
    UnionFind uf(n + 1);
    vector<Edge> mstEdges;

    for (const auto &edge : edges)
    {
        if (uf.unionSets(edge.u, edge.v))
        {
            mstEdges.push_back(edge);
        }
    }

   
    if (mstEdges.size() != n - 1)
    {
        return {};
    }

    return mstEdges;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<Edge> edges(m);

    for (int i = 0; i < m; ++i)
    {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }

    vector<Edge> result = kruskal(n, edges);

    if (result.empty())
    {
        cout << "No solution" << endl;
    }
    else
    {
        sort(result.begin(), result.end(), [](const Edge &a, const Edge &b)
             { return a.u < b.u || (a.u == b.u && a.v < b.v); });
        for (const auto &edge : result)
        {
            cout << edge.u << "," << edge.v << endl;
        }
    }

    return 0;
}
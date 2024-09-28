#include <bits/stdc++.h>
using namespace std;
struct Edge {
    int u, v, weight;
};
// Function to print the shortest path to each vertex
void printSolution(const vector<int>& dist, const vector<int>& parent, int V) {
    cout << "Vertex\tDistance from Source\tPath" << endl;
    for (int i = 0; i < V; ++i) {
        cout << i << "\t" << dist[i] << "\t\t\t";
        int p = i;
        while (p != -1) {
            cout << p << " ";
            p = parent[p];
        }
        cout << endl;
    }
}
// Bellman-Ford algorithm
bool bellmanFord(const vector<Edge>& edges, int V, int source) {
    vector<int> dist(V, INT_MAX);
    vector<int> parent(V, -1); // To store the shortest path
    // Initialize source distance to 0
    dist[source] = 0;
    // Relax all edges |V| - 1 times
    for (int i = 0; i < V - 1; ++i) {
        for (const auto& edge : edges) {
            int u = edge.u;
            int v = edge.v;
            int w = edge.weight;
            if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                parent[v] = u;
            }
        }
    }
    // Check for negative-weight cycles
    for (const auto& edge : edges) {
        int u = edge.u;
        int v = edge.v;
        int w = edge.weight;

        if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
            cout << "No solution. Negative-weight cycle detected." << endl;
            return false;
        }
    }
   printSolution(dist, parent, V);
    return true;
}
int main() {
    int V, E, source;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;
    vector<Edge> edges(E);
    cout << "Enter the edges (u v weight):" << endl;
    for (int i = 0; i < E; ++i) {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }
    cout << "Enter the source vertex: ";
    cin >> source;
    if (!bellmanFord(edges, V, source)) {
        cout << "No shortest path solution due to negative-weight cycle." << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// /* ---------- Disjoint Set Union (Union-Find) ---------- */
// class DSU {
// public:
//     vector<int> parent, rank;

//     DSU(int n) {
//         parent.resize(n);
//         rank.resize(n, 0);

//         for (int i = 0; i < n; i++)
//             parent[i] = i;
//     }

//     int find(int x) {
//         if (parent[x] != x)
//             parent[x] = find(parent[x]);
//         return parent[x];
//     }

//     bool unite(int a, int b) {
//         int rootA = find(a);
//         int rootB = find(b);

//         if (rootA == rootB)
//             return false;

//         if (rank[rootA] < rank[rootB])
//             parent[rootA] = rootB;
//         else if (rank[rootA] > rank[rootB])
//             parent[rootB] = rootA;
//         else {
//             parent[rootB] = rootA;
//             rank[rootA]++;
//         }

//         return true;
//     }
// };

// struct Edge {
//     int u, v, weight;
// };

// int kruskal(int V, vector<Edge>& edges) {
//     sort(edges.begin(), edges.end(),
//          [](Edge a, Edge b) {
//              return a.weight < b.weight;
//          });

//     DSU dsu(V);
//     int mstWeight = 0;
//     int edgesUsed = 0;

//     // 2. Process edges in sorted order
//     for (Edge e : edges) {
//         if (dsu.unite(e.u, e.v)) {
//             mstWeight += e.weight;
//             edgesUsed++;

//             // stop when MST has V - 1 edges
//             if (edgesUsed == V - 1)
//                 break;
//         }
//     }

//     return mstWeight;
// }

// int main() {
//     int V = 4;
//     vector<Edge> edges = {
//         {0, 1, 10},
//         {0, 2, 6},
//         {0, 3, 5},
//         {1, 3, 15},
//         {2, 3, 4}
//     };

//     cout << "Minimum Spanning Tree weight: "
//          << kruskal(V, edges) << endl;

//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;
#define V 5
#define INF 9999



void primMST(graph[V][V]){
    int parent[V];
    int key[V];
    bool selected[V];

    for(int i = 0; i < V; i++) {
        key[i] = INF;
        selected[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;

    for(int count=0; count < V-1; count++) {
        int u = findMin(key, selected);
        selected[u] = true;

        for(int v = 0; v < V ; v++) {
            if(graph[u][v] != 0 && !selected[v] && graph[u][v] < key[u]) {
                parent[v] = u;
                key[u] = graph[u][v];
            }
        }
    }

    printMST(parent, graph);
}

int main() {
    int graph[v][u] = {
        {2,8,9,10,5,10},
        {0,10,9,8,5,10},
        {0,4,3,1,5,10},
        {1,2,0,11,5,0},
        {2,0,9,9,5,0},
    }

    primMST(graph);
}
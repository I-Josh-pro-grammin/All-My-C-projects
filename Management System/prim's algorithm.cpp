#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
// (weight, vertex)

int prim(int V, vector<vector<pii>>& adj) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<bool> visited(V, false);

    int mstWeight = 0;
    int edgesUsed = 0;

    // Start from node 0
    pq.push({0, 0});  // {weight, vertex}

    while (!pq.empty() && edgesUsed < V) {
        auto [weight, node] = pq.top();
        pq.pop();

        if (visited[node])
            continue;

        visited[node] = true;
        mstWeight += weight;
        edgesUsed++;

        // Add all neighbors
        for (auto [nextWeight, nextNode] : adj[node]) {
            if (!visited[nextNode]) {
                pq.push({nextWeight, nextNode});
            }
        }
    }

    return mstWeight;
}

int main() {
    int V = 4;
    vector<vector<pii>> adj(V);

    // Add edges (undirected graph)
    adj[0].push_back({10, 1});
    adj[1].push_back({10, 0});

    adj[0].push_back({6, 2});
    adj[2].push_back({6, 0});

    adj[0].push_back({5, 3});
    adj[3].push_back({5, 0});

    adj[1].push_back({15, 3});
    adj[3].push_back({15, 1});

    adj[2].push_back({4, 3});
    adj[3].push_back({4, 2});

    cout << "Minimum Spanning Tree weight: "
         << prim(V, adj) << endl;

    return 0;
}

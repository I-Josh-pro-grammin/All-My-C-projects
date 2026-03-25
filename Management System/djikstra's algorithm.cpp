// IZERE Joshua
// Munezero Impano Christella
// Ndanyuzwe Shami Melissa

#include <iostream>
using namespace std;

#define INF 999

int V = 5;
int src = 0;

int cost[100][100] = {
    {0,   4,   INF, INF, INF},
    {4,   0,   8,   INF, INF},
    {INF, 8,   0,   7,   2  },
    {INF, INF, 7,   0,   9  },
    {INF, INF, 2,   9,   0  }
};

int dist[100];
bool visited[100] = {0};
int parent[100];

void init() {
  for(int i=0; i<V; i++) {
    parent[i] = i;
    dist[i] = INF;
  }
  dist[src] = 0;
}

int getNearest() {
  int minValue = INF;
  int minNode = 0;

  for(int i=0; i<V; i++) {
    if(!visited[i] && dist[i] < minValue) {
        minValue = dist[i];
        minNode = i;
    }
  }
  return minNode;
}

void dijkstra() {
  for(int i=0; i<V; i++) {
    int nearest = getNearest();
    visited[nearest] = true;

    for(int adj=0; adj<V; adj++) {
        if(cost[nearest][adj] != INF &&
           dist[adj] > dist[nearest] + cost[nearest][adj]) {

            dist[adj] = dist[nearest] + cost[nearest][adj];
            parent[adj] = nearest;
        }
    }
  }
}

void display() {
  cout << "Node\tCost\tPath\n";

  for(int i=0; i<V; i++) {
    cout << i << "\t" << dist[i] << "\t";

    int current = i;
    while(current != src) {
        cout << current << " <- ";
        current = parent[current];
    }
    cout << src << endl;
  }
}

int main() {

   init();
   dijkstra();
   display();

   return 0;
}

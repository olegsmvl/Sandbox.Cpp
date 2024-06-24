#include <iostream>
#include <limits>
#include <queue>
#include <vector>
using namespace std;

const int INF = numeric_limits<int>::max();

void dijkstra(int start, const vector<vector<pair<int, int>>> &graph,
              vector<int> &distances) {
  int n = graph.size();
  distances.assign(n, INF);
  distances[start] = 0;

  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      pq;
  pq.push({0, start});

  while (!pq.empty()) {
    int distance = pq.top().first;
    int vertex = pq.top().second;
    pq.pop();

    if (distance != distances[vertex])
      continue;

    for (const auto &edge : graph[vertex]) {
      int next_vertex = edge.first;
      int weight = edge.second;

      if (distances[vertex] + weight < distances[next_vertex]) {
        distances[next_vertex] = distances[vertex] + weight;
        pq.push({distances[next_vertex], next_vertex});
      }
    }
  }
}

int main() {

  int n, m;
  cout << "Enter the number of vertices and edges: ";
  cin >> n >> m;

  vector<vector<pair<int, int>>> graph(n);
  cout << "Enter the edges (start end weight):" << endl;
  for (int i = 0; i < m; ++i) {
    int u, v, w;
    cin >> u >> v >> w;
    graph[u].emplace_back(v, w);
    graph[v].emplace_back(u, w); // Если граф неориентированный
  }

  int start;
  cout << "Enter the start vertex: ";
  cin >> start;

  vector<int> distances;
  dijkstra(start, graph, distances);

  cout << "Shortest distances from vertex " << start
       << " to all other vertices:" << endl;
  for (int i = 0; i < n; ++i) {
    if (distances[i] == INF) {
      cout << "Vertex " << i << ": "
           << "INF" << endl;
    } else {
      cout << "Vertex " << i << ": " << distances[i] << endl;
    }
  }

  return 0;
}

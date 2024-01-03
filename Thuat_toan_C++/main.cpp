#include<iostream>
#include<vector>
#include<queue>
#include<climits>

using namespace std;

struct Vertex {
	int id;
	int distance;
};

struct CompareVertex {
	bool operator() (const Vertex&v1, const Vertex&v2) {
		return v1.distance > v2.distance;
	}
};

void Dijkstra(vector<vector<int>> &graph, int start) {
	int n = graph.size();
	vector<int>distances(n, INT_MAX);
	vector<bool>visited(n, false);
	priority_queue<Vertex, vector<Vertex>, CompareVertex> p;
	distances[start] = 0;
	p.push({start, 0});
	while(!p.empty()) {
		Vertex current = p.top();
		p.pop();
		int u = current.id;
		if(visited[u]) {
			continue;
		}
		visited[u] = true;
		for(int v=0;v<n;v++) {
			if(graph[u][v] != 0 && !visited[v]) {
				int newDistance = distances[u] + graph[u][v];
				if(newDistance < distances[v]) {
					distances[v] = newDistance;
					p.push({v, newDistance});
				}
			}
		}
	}
	
	for(int i = 0; i<n; i++) {
		cout << "khoang cach tu " << start<< " den " << i << " la " << distances[i] << endl;	
	}
}

int main() {
	int n;
	cout << "Nhap so dinh: ";
	cin >> n;
	vector<vector<int>> graph(n, vector<int>(n, 0));
	cout << "Nhap ma tran ke cua do thi: " << endl;
	for(int i =0;i<n; i++) {
		for(int j= 0;j<n;j++) {
			cin >> graph[i][j];
		}
	}
	
	int start;
	cout << "Nhap dinh xuat phat: ";
	cin >> start;
	Dijkstra(graph, start);
	return 0;
}
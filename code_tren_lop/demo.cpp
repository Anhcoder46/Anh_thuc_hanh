#include <iostream>
#include <limits.h>

using namespace std;

const int MAX = 100; // Maximum number of vertices

int n, m; // Number of rows and columns of the matrix
int adj[MAX][MAX]; // Weighted adjacency matrix
int dist[MAX]; // Distance from the source to other vertices
bool visited[MAX]; // Visited vertices
int src; // Source vertex

void input() {
    cout << "Nhap so hang va cot cua ma tran: ";
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Nhap trong so cua canh (" << i << ", " << j << "): ";
            cin >> adj[i][j];
        }
    }
}

void init() {
    for (int i = 0; i < n; i++) {
        dist[i] = INT_MAX;
        visited[i] = false;
    }
}

void dijkstra() {
    dist[src] = 0;

    for (int i = 0; i < n; i++) {
        int u = -1;

        for (int v = 0; v < n; v++) {
            if (!visited[v] && (u == -1 || dist[v] < dist[u])) {
                u = v;
            }
        }

        visited[u] = true;

        for (int v = 0; v < n; v++) {
            if (!visited[v] && adj[u][v] > 0 && dist[u] != INT_MAX && dist[u] + adj[u][v] < dist[v]) {
                dist[v] = dist[u] + adj[u][v];
            }
        }
    }
}

void output() {
    for (int i = 0; i < n; i++) {
        cout << "Khoang cach tu dinh nguon den dinh " << i << " la: " << dist[i] << endl;
    }
}

int main() {
    input();
    init();
    src = 0;
    dijkstra();
    output();
    return 0;
}
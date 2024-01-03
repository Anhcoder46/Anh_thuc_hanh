#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Định nghĩa cấu trúc đỉnh
struct Vertex {
    int id;
    int distance;
};

// Định nghĩa toán tử so sánh cho hàng đợi ưu tiên
struct CompareVertex {
    bool operator()(const Vertex& v1, const Vertex& v2) {
        return v1.distance > v2.distance;
    }
};

// Hàm tìm đường đi ngắn nhất bằng thuật toán Dijkstra
void Dijkstra(vector<vector<int>>& graph, int start) {
    int n = graph.size();
    vector<int> distances(n, INT_MAX); // Lưu khoảng cách ngắn nhất từ đỉnh start đến các đỉnh khác
    vector<bool> visited(n, false); // Đánh dấu các đỉnh đã được xét
    priority_queue<Vertex, vector<Vertex>, CompareVertex> pq; // Hàng đợi ưu tiên để chọn đỉnh có khoảng cách nhỏ nhất
    distances[start] = 0; // Khoảng cách từ start đến chính nó là 0
    pq.push({start, 0});
    while (!pq.empty()) {
        Vertex current = pq.top();
        pq.pop();
        int u = current.id;
        if (visited[u]) {
            continue;
        }
        visited[u] = true;
        for (int v = 0; v < n; v++) {
            if (graph[u][v] != 0 && !visited[v]) {
                int newDistance = distances[u] + graph[u][v];
                if (newDistance < distances[v]) {
                    distances[v] = newDistance;
                    pq.push({v, newDistance});
                }
            }
        }
    }
    // In ra khoảng cách ngắn nhất từ đỉnh start đến các đỉnh khác
    for (int i = 0; i < n; i++) {
        cout << "Khoang cach tu " << start << " den " << i << " la: " << distances[i] << endl;
    }
}

int main() {
    int n; // Số đỉnh
    cout << "Nhap so dinh: ";
    cin >> n;
    vector<vector<int>> graph(n, vector<int>(n, 0)); // Ma trận kề của đồ thị
    // Nhập ma trận kề của đồ thị
    cout << "Nhap ma tran ke cua do thi:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }
    int start; // Đỉnh xuất phát
    cout << "Nhap dinh xuat phat: ";
    cin >> start;
    Dijkstra(graph, start);
    return 0;
}
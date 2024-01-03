#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <functional>

using namespace std;

// Định nghĩa cấu trúc của một đỉnh trong đồ thị
struct Vertex {
    int index; // chỉ số của đỉnh
    int distance; // khoảng cách từ đỉnh nguồn đến đỉnh này

    Vertex(int i, int d) : index(i), distance(d) {}
};

// Định nghĩa cấu trúc của một cạnh trong đồ thị
struct Edge {
    int start; // đỉnh xuất phát
    int end; // đỉnh kết thúc
    int weight; // trọng số của cạnh

    Edge(int s, int e, int w) : start(s), end(e), weight(w) {}
};

// Hàm tìm đường đi ngắn nhất bằng thuật toán Dijkstra
void Dijkstra(vector<vector<Edge>>& graph, int source) {
    int numVertices = graph.size();
    vector<int> distances(numVertices, INT_MAX);
    vector<bool> visited(numVertices, false);

    distances[source] = 0;

    priority_queue<Vertex, vector<Vertex>, function<bool(Vertex, Vertex)>> pq(
        [](Vertex v1, Vertex v2) {
            return v1.distance > v2.distance;
        }
    );
    pq.push(Vertex(source, 0));
    while (!pq.empty()) {
        Vertex current = pq.top();
        pq.pop();
        int currentIndex = current.index;
        int currentDistance = current.distance;
        if (visited[currentIndex]) {
            continue;
        }

        visited[currentIndex] = true;

        for (Edge edge : graph[currentIndex]) {
            int neighborIndex = edge.end;
            int neighborDistance = currentDistance + edge.weight;

            if (neighborDistance < distances[neighborIndex]) {
                distances[neighborIndex] = neighborDistance;
                pq.push(Vertex(neighborIndex, neighborDistance));
            }
        }
    }

    cout << "Khoang cach tu dinh nguon den cac dinh khac:\n";
    for (int i = 0; i < numVertices; i++) {
        cout << "Dinh " << i << ": " << distances[i] << endl;
    }
}

int main() {
    int numVertices, numEdges;
    cout << "Nhap so dinh cua do thi: ";
    cin >> numVertices;
    cout << "Nhap so canh cua do thi: ";
    cin >> numEdges;
    vector<vector<Edge>> graph(numVertices, vector<Edge>());

    cout << "Nhap thong tin cho tung canh:\n";
    for (int i = 0; i < numEdges; i++) {
        int start, end, weight;
        cout << "Canh thu " << i + 1 << ":\n";
        cout << "Dinh bat dau: ";
        cin >> start;
        cout << "Dinh ket thuc: ";
        cin >> end;
        cout << "Trong so: ";
        cin >> weight;

        graph[start].push_back(Edge(start, end, weight));
    }

    int source;
    cout << "Nhap dinh nguon: ";
    cin >> source;

    Dijkstra(graph, source);

    return 0;
}
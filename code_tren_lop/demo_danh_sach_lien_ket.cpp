#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};

class LinkedList {
 private:
  Node* head;
  int size;

 public:
  LinkedList();
  ~LinkedList();

  void add(int data);
  void insert(int position, int data);
  void update(int oldData, int newData);
  void remove(int data);
  bool contains(int data);
  int findPosition(int data);
  Node* search(int data);
  void print();
};

LinkedList::LinkedList() : head(nullptr), size(0) {}

LinkedList::~LinkedList() {
  Node* current = head;
  Node* next;

  while (current != nullptr) {
    next = current->next;
    delete current;
    current = next;
  }
}

void LinkedList::add(int data) {
  Node* newNode = new Node{data, nullptr};

  if (head == nullptr) {
    head = newNode;
  } else {
    Node* current = head;
    while (current->next != nullptr) {
      current = current->next;
    }
    current->next = newNode;
  }

  size++;
}

void LinkedList::insert(int position, int data) {
  if (position < 0 || position > size) {
    cout << "Khong tim thay vi tri de chen." << endl;
    return;
  }

  Node* newNode = new Node{data, nullptr};

  if (position == 0) {
    newNode->next = head;
    head = newNode;
  } else {
    Node* current = head;
    for (int i = 0; i < position - 1; ++i) {
      current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
  }

  size++;
}

void LinkedList::update(int oldData, int newData) {
  Node* current = head;

  while (current != nullptr && current->data != oldData) {
    current = current->next;
  }

  if (current != nullptr) {
    current->data = newData;
  } else {
    cout << "Khong tim thay phan tu can cap nhat." << endl;
  }
}

void LinkedList::remove(int data) {
  if (head == nullptr) {
    return;
  }

  Node* current = head;
  Node* previous = nullptr;

  while (current != nullptr && current->data != data) {
    previous = current;
    current = current->next;
  }

  if (current == nullptr) {
    return;
  }

  if (previous == nullptr) {
    head = current->next;
  } else {
    previous->next = current->next;
  }

  delete current;
  size--;
}

bool LinkedList::contains(int data) {
  if (head == nullptr) {
    return false;
  }

  Node* current = head;

  while (current != nullptr && current->data != data) {
    current = current->next;
  }

  return current != nullptr;
}

int LinkedList::findPosition(int data) {
  Node* current = head;
  int position = 0;

  while (current != nullptr && current->data != data) {
    current = current->next;
    position++;
  }

  if (current == nullptr) {
    return -1;  // Element not found
  }

  return position;
}

Node* LinkedList::search(int data) {
  Node* current = head;

  while (current != nullptr && current->data != data) {
    current = current->next;
  }

  return current;
}

void LinkedList::print() {
  if (head == nullptr) {
    return;
  }

  Node* current = head;

  while (current != nullptr) {
    cout << current->data << " ";
    current = current->next;
  }

  cout << endl;
}

int main() {
  LinkedList list;

  int n, num, position;

  cout << "Nhap n: ";
  cin >> n;

  cout << "Nhap " << n << " so de them vao danh sach lien ket:" << endl;
  for (int i = 0; i < n; ++i) {
    cin >> num;
    list.add(num);
  }

  cout << "In danh sach: ";
  list.print();

  cout << "Nhap so can chen vao danh sach: ";
  cin >> num;
  cout << "Nhap vi tri can chen (0-n): ";
  cin >> position;
  list.insert(position, num);

  cout << "Danh sach sau khi chen: ";
  list.print();

  int oldData, newData;
  cout << "Nhap so co trong danh sach can cap nhat: ";
  cin >> oldData;
  cout << "Nhap gia tri moi: ";
  cin >> newData;
  list.update(oldData, newData);

  cout << "Danh sach sau khi cap nhat: ";
  list.print();

  cout << "Nhap so can xoa: ";
  cin >> num;
  list.remove(num);

  cout << "Danh sach sau khi xoa: ";
  list.print();

  cout << "Nhap so can tim kiem: ";
  cin >> num;
  Node* result = list.search(num);

  if (result != nullptr) {
    cout << "Tim thay phan tu tai vi tri: " << list.findPosition(num) << endl;
  } else {
    cout << "Khong tim thay phan tu." << endl;
  }
  return 0;
}
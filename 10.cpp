#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
  // ==========================================
  // 1. VECTOR OPERATIONS (Dynamic Array)
  // ==========================================
  cout << "--- VECTOR OPERATIONS ---" << endl;
  vector<int> v;

  // Insertion at the end
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);

  // Displaying elements
  cout << "Vector elements: ";
  for (int x : v) {
    cout << x << " ";
  }
  cout << endl;

  // Direct access via index
  cout << "Element at index 1: " << v[1] << endl;

  // Deletion from the end
  v.pop_back();
  cout << "After pop_back(): ";
  for (int x : v) {
    cout << x << " ";
  }
  cout << endl;

  // ==========================================
  // 2. LIST OPERATIONS (Doubly Linked List)
  // ==========================================
  cout << "\n--- LIST OPERATIONS ---" << endl;
  list<int> l;

  // Insertion at both ends
  l.push_back(20);
  l.push_front(10); // Inserts at the beginning
  l.push_back(30);

  // Displaying elements
  cout << "List elements: ";
  for (int x : l) {
    cout << x << " ";
  }
  cout << endl;

  // Deletion from the front
  l.pop_front();
  cout << "After pop_front(): ";
  for (int x : l) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}

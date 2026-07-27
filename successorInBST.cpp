#include <bits/stdc++.h>
using namespace std;

/*class Node {
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data) : data(data), left(nullptr), right(nullptr) {}
};*/

class solution{
public :
    Node* successor(Node* root, int target) {
        Node* succ = nullptr;
        Node* current = root;

        while (current != nullptr) {
            if (current->data > target) {
                // Potential successor found
                succ = current;
                // Move left to see if there's a smaller node still greater than target
                current = current->left;
            } else {
                // Move right if current value is <= target
                current = current->right;
            }
        }

        return succ;
    }
};

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
public:
    Node* predecessor(Node* root, int target) {
        Node* pred = nullptr;
        Node* curr = root;

        while (curr != nullptr) {
            if (curr->data == target) {
                // If left subtree exists, predecessor is the maximum value in the left subtree
                if (curr->left != nullptr) {
                    Node* temp = curr->left;
                    while (temp->right != nullptr) {
                        temp = temp->right;
                    }
                    pred = temp;
                }
                break;
            } else if (target < curr->data) {
                // Target is in the left subtree, so move left
                curr = curr->left;
            } else {
                // Target is in the right subtree, current node could be a potential predecessor
                pred = curr;
                curr = curr->right;
            }
        }

        return pred;
    }
};

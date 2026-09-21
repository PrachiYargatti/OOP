#include<bits/stdc++.h>
using namespace std;

/*class Node {
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data) : data(data), left(nullptr), right(nullptr) {}
};*/

class solution {
public:
    Node* lowestCommonAncestor(Node* root, int p, int q) {
        // Traverse the tree based on BST properties
        while (root != nullptr) {
            // If both p and q are smaller than root, LCA lies in left subtree
            if (p < root->data && q < root->data) {
                root = root->left;
            }
            // If both p and q are greater than root, LCA lies in right subtree
            else if (p > root->data && q > root->data) {
                root = root->right;
            }
            // If p and q lie on different sides (or one equals root->data), root is LCA
            else {
                return root;
            }
        }
        return nullptr;
    }
};

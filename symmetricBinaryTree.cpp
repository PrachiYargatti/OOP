#include <bits/stdc++.h>
using namespace std;

/*
class Node {
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data) : data(data), left(nullptr), right(nullptr) {}
};
*/

class solution{
public:
    bool isMirror(Node* t1, Node* t2) {
        // If both nodes are null, they are symmetric
        if (t1 == nullptr && t2 == nullptr) {
            return true;
        }
        
        // If only one of them is null, they are not symmetric
        if (t1 == nullptr || t2 == nullptr) {
            return false;
        }
        
        // Check three conditions:
        // 1. Current nodes have equal values
        // 2. Left child of t1 mirrors Right child of t2
        // 3. Right child of t1 mirrors Left child of t2
        return (t1->data == t2->data) 
            && isMirror(t1->left, t2->right) 
            && isMirror(t1->right, t2->left);
    }
    
    bool symmetric(Node* root) {
        if (root == nullptr) {
            return true;
        }
        return isMirror(root->left, root->right);
    }
};

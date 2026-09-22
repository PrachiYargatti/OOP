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
private:
    // Helper function to perform inorder traversal of a BST
    void inorder(Node* root, vector<int>& result) {
        if (root == nullptr) {
            return;
        }
        inorder(root->left, result);
        result.push_back(root->data);
        inorder(root->right, result);
    }

public:
    // Function to return a list containing elements of both BSTs in sorted order
    vector<int> mergeBSTs(Node* root1, Node* root2) {
        vector<int> bst1, bst2;
        
        // Step 1: Store inorder traversals of both trees
        inorder(root1, bst1);
        inorder(root2, bst2);
        
        // Step 2: Merge two sorted arrays
        vector<int> mergedResult;
        int i = 0, j = 0;
        int n1 = bst1.size();
        int n2 = bst2.size();
        
        while (i < n1 && j < n2) {
            if (bst1[i] <= bst2[j]) {
                mergedResult.push_back(bst1[i]);
                i++;
            } else {
                mergedResult.push_back(bst2[j]);
                j++;
            }
        }
        
        // Append remaining elements of bst1
        while (i < n1) {
            mergedResult.push_back(bst1[i]);
            i++;
        }
        
        // Append remaining elements of bst2
        while (j < n2) {
            mergedResult.push_back(bst2[j]);
            j++;
        }
        
        return mergedResult;
    }
};

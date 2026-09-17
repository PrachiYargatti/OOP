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

class solution {
private:
    Node* findMin(Node* root) {
        while (root && root->left != nullptr) {
            root = root->left;
        }
        return root;
    }

public:
    Node* deletionBST(Node* root, int target) {
        if (root == nullptr) {
            return nullptr;
        }

        // Search for the node to delete
        if (target < root->data) {
            root->left = deletionBST(root->left, target);
        } else if (target > root->data) {
            root->right = deletionBST(root->right, target);
        } else {
            // Node found

            // Case 1: Leaf node or single child
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            // Case 2: Node with two children
            // Find the in-order successor (smallest node in the right subtree)
            Node* temp = findMin(root->right);

            // Copy the successor's data to this node
            root->data = temp->data;

            // Delete the in-order successor
            root->right = deletionBST(root->right, temp->data);
        }

        return root;
    }
};

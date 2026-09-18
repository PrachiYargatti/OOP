#include <bits/stdc++.h>
using namespace std;

/* 
class Node {
public:
    int data;
    Node *left, *right;
    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
}; 
*/

class solution {
private:
    bool validate(Node* node, long long minVal, long long maxVal) {
        if (node == nullptr) {
            return true;
        }

        if (node->data <= minVal || node->data >= maxVal) {
            return false;
        }

        return validate(node->left, minVal, node->data) && 
               validate(node->right, node->data, maxVal);
    }

public:
    bool validBST(Node* root) {
        return validate(root, LLONG_MIN, LLONG_MAX);
    }
};

#include<bits/stdc++.h>
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
public:
    Node* insertionBST(Node* root, int target) {
        if(root == nullptr) return new Node(target);
        
        if(target < root->data){
            root->left = insertionBST(root->left, target);
        }
        else{
            root->right = insertionBST(root->right, target);
        }
        return root;
    }
};

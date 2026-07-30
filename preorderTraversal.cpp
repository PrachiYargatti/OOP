#include<bits/stdc++.h>
using namespace std;
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};
*/
class solution {
public:
    void preorder(Node* root) {
        if(root == nullptr) return;
    
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
};

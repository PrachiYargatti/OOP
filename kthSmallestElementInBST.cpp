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
    int result = -1;
    int count = 0;
    void inorder(Node* root, int k){
        if(root == nullptr || count >= k) return;
        
        inorder(root->left, k);
        count++;
        if(count == k){
            result = root->data;
            return;
        }
        
        inorder(root->right, k);
    }

public:
    int kthSmallest(Node* root, int k) {
        count = 0;
        inorder(root, k);
        return result;
    }
};

#include<bits/stdc++.h>
using namespace std;

/*
class Node {
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int value, Node* next_Address, Node* prev_Address){
            data = value; 
            next = next_Address; 
            prev = prev_Address;
        }
        Node(int value){
           data = value;
           next = nullptr;
           prev = nullptr;
        }
};
*/

class solution {
public:
    Node* arrayToDLL(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return nullptr;
        Node* head = new Node(arr[0]);
        Node* cur = head;
        
        for(int i=1;i<=n-1;i++){
            Node* temp = new Node(arr[i]);
            temp->prev = cur;
            cur->next = temp;
            cur = temp;
        }
        
        return head;
    }

};

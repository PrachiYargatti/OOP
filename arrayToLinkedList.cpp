#include <bits/stdc++.h>
using namespace std;

/*
class Node {
    public:
        int data;
        Node* next;
    public:
        Node(int value, Node* address){
            data = value;
            next = address;
        }
    public:
        Node(int value){
            data = value;
            next = NULL;
        }
    public:
        Node(){
            data = 0;
            next = NULL;
        }
};
*/

class solution {
public:
    Node* arrayToLL(int n, int arr[]){
        Node* head = new Node(arr[0]);
        Node* cur = head;
        
        for(int i=1;i<n;i++){
            Node* temp = new Node(arr[i]);
            cur->next = temp;
            cur = temp;
        }
        
        return head;
    }
};

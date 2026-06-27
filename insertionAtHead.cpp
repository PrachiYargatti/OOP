#include<bits/stdc++.h>
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
};
*/

class solution {
public:
    Node* insertionAtHead(Node* head, int a) {
        //Write your code here...
        Node* n = new Node(a, head);
        return n;
    }

};

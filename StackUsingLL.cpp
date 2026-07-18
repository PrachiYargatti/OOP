#include<bits/stdc++.h>
using namespace std;
/*
class Node {
public:
    int data;
    Node* next;
    Node(int data, Node* next = nullptr) : data(data), next(next) {}
};
*/
class solution {
public:
    Node* top;
    solution() {
        // Write code to initialize top pointer
        top = nullptr;
    }

    void push(int x) {
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
    }

    int pop() {
        if(empty()) return -1;
        Node* temp = top;
        int poppedvalue = temp->data;
        top = top->next;
        delete temp;
        return poppedvalue;
    }

    int topOp() {
        // Write code for top operation
        if(empty()) return -1;
        return top->data;
    }

    bool empty() {
        // Write code for empty operation
        return top == nullptr;
    }
};

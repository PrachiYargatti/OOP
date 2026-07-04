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
    Node* insertBeforeKthNode(Node* head, int k, int a) {
        if(k == 0) {
            Node* n = new Node(a, head, nullptr);
            return n;
        }
        Node* temp = head;
        int count = 0;
        while(temp != nullptr) {
            if(count == k) break;
            count++;
            temp = temp->next;
        }
        Node* back = temp->prev;
        Node* n = new Node(a, temp, back);
        temp->prev = n;
        back->next = n;
        return head;
    }

};

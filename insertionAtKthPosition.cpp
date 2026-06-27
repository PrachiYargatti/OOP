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
    Node* insertionAtKthPosition(Node* head, int k, int data) {
        if(head == nullptr){
            if(k==0){
                Node* n = new Node(data);
                return n;
            }
            if(k!=0) return nullptr;
        }
        if(k==0){
            Node* n = new Node(data, head);
            return n;
        }
        Node* temp = head;
        int count=0;
        while(temp != nullptr){
            if(count == k-1){
                Node* n = new Node(data);
                n->next = temp->next;
                temp->next = n;
                break;
            }
            count++;
            temp = temp->next;
        }
        return head;
    }

};

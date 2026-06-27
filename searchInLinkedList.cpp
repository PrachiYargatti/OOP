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
    int searchInLL(Node* head, int k) {
        Node* temp = head;
        
        while(temp != nullptr){
            if(temp->data == k) return 1;
            temp = temp->next;
        }
        
        return 0;
    }

};

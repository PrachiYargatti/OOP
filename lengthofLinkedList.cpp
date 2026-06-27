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
    int lengthofLL(Node* head) {
        Node* temp = head;
        int count=0;
        while(temp != nullptr){
            count++;
            temp=temp->next;
        }
        return count;
        
    }

};

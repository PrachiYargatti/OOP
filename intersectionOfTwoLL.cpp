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
    Node* intersectionOfTwoLL(Node* head1, Node* head2){
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
            if(temp1 == temp2) return temp1;
            if(temp1 == nullptr) temp1 = head2;
            if(temp2 == nullptr) temp2 = head1;
        }
        return temp1;
    }

};

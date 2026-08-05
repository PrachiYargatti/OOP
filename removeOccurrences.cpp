#include <bits/stdc++.h>
using namespace std;

/*
struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};
*/

class solution {
public:
    Node* removeOccurrences(Node* mainList, Node* subList) {
        Node* dummy = new Node(0);
        dummy->next = mainList;
        
        Node* prev = dummy;
        Node* curr = mainList;
        
        while(curr!=nullptr){
            Node* temp1 = curr;
            Node* temp2 = subList;
            while(temp1 != nullptr && temp2 != nullptr && temp1->data == temp2->data){
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            if(temp2 == nullptr){
                prev->next = temp1;
                curr = temp1;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return dummy->next;
    }
};

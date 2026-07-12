#include <bits/stdc++.h>
using namespace std;

/*
class Node {
    public:
        int data;
        Node* next;
        
        Node(): data(0), next(nullptr) {}
        Node(int data) : data(data), next(nullptr) {}
        Node(int data, Node* next) : data(data), next(next) {}
};
*/

class solution {
public:
    Node *detectCycle(Node *head) {
        Node* temp = head;
        map<Node*, int> m;
        
        while(temp!=nullptr){
            if(m.find(temp) != m.end()){
                return temp;
            }
            m.insert({temp,0});
            temp = temp->next;
        }
        return nullptr;
    }
};

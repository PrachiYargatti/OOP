#include <bits/stdc++.h>
using namespace std;
/*
class Node {
public:
    int data;
    Node* next;
    Node() : data(0), next(nullptr) {}
    Node(int data, Node* next) : data(data), next(next) {}
    Node(int data) : data(data), next(nullptr) {}
};
*/ 
class solution {
public:
    Node* frequencyList(Node* head) {
        Node* cur = head;
        unordered_map<int, int> map;
        
        while(cur!=nullptr){
            map[cur->data]++;
            cur=cur->next;
        }
        
        vector<int> freq;
        for(auto pair: map){
            freq.push_back(pair.second);
        }
        
        sort(freq.begin(),freq.end());
        
        Node* dummy = new Node(0);
        Node* tail = dummy;
        
        for(int val:freq){
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        Node* resultHead = dummy->next;
        delete dummy;
        return resultHead;
    }
};

#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;
};

class MyList{
    private: Node* head;
    public: MyList(){
        head = nullptr;
        this->traverse();
    }
    // Insert at begining
    void insert(int i){
        Node* newNode = new Node;
        newNode->data = i;
        newNode->next = head;
        head = newNode;
        this->traverse();
    }

    void remove(int r){
        Node* temp = head;
        Node* prev = nullptr;
        while(temp !=nullptr && temp->data != r){
            prev = temp;
            temp = temp->next;
        }
        if(temp == nullptr){
            cout<<"Element not Found in List"<<endl;
            return;
        }
        if(prev == nullptr){
            head = temp->next;
        }
        else {
            prev->next = temp->next;
        }
        delete temp;
        this->traverse();
    }
     // Traverse and display the list
    void traverse() {
        Node* temp = head;
        std::cout << "List elements: ";
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main(){
    MyList ml;
    ml.insert(5);
    ml.insert(10);
    ml.insert(15);
    ml.remove(10);
    return 0;
}

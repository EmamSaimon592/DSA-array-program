#include <iostream>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(int value) {
        this->val = value;
        this->next = nullptr;
    }

    node(node* next) {
        this->next = next;
    }
};

class LinkedList {
public:
    node* head;
    node* tail;

    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insertatposition(int value, int position) {
        node* newNode = new node(value);

        if (position < 1) {
            cout << "Invalid position!" << endl;
            return;
        }

        if (position == 1) {
            newNode->next = head;
            head = newNode;
            if (tail == nullptr) {
                tail = newNode;
            }
            return;
        }

        node* temp = head;
        int count = 1;

        while (temp != nullptr && count < position - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == nullptr) {
            cout << "Position out of range!" << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;

        if (newNode->next == nullptr) {
            tail = newNode;
        }
    }

    void deleteFromPosition(int position) {
        if (head == nullptr || position < 1) {
            cout << "List is empty or invalid position!" << endl;
            return;
        }

        if (position == 1) {
            node* toDelete = head;
            head = head->next;
            if (head == nullptr) {
                tail = nullptr;
            }
            delete toDelete;
            return;
        }

        node* temp = head;
        int count = 1;

        while (temp->next != nullptr && count < position - 1) {
            temp = temp->next;
            count++;
        }

        if (temp->next == nullptr) {
            cout << "Position out of range!" << endl;
            return;
        }

        node* toDelete = temp->next;
        temp->next = toDelete->next;

        if (temp->next == nullptr) {
            tail = temp;
        }

        delete toDelete;
    }

    void printList() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insertatposition(10, 1);
    ll.insertatposition(20, 2);
    ll.insertatposition(15, 2);
    ll.printList(); // 10 -> 15 -> 20 -> NULL

    ll.deleteFromPosition(2);
    ll.printList(); // 10 -> 20 -> NULL

    return 0;
}

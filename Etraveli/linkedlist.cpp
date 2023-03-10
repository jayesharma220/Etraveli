#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void push(Node* head, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = head->next;
    head->next = new_node;
}

void printNthFromLast(Node head, int n) {
    Node m_node = head;
    Node r_node = head;
    int count = 0;

    while (count < n) {
        if (r_node.next == NULL) {
            cout << n << " is greater than the number of nodes in the list" << endl;
            return;
        }
        r_node = *(r_node.next);
        count++;
    }

    while (r_node.next != NULL) {
        m_node = *(m_node.next);
        r_node = *(r_node.next);
    }

    if (m_node.next != NULL) {
        cout << "Node number " << n << " from last is " << m_node.next->data << endl;
    }
}



#include <iostream>
using namespace std;

struct myLinkedList {
    int num;
    myLinkedList* next; //thdhwdfh theres variable next in my linkedlist poinnter
};

myLinkedList* head = nullptr; //the head ws initialized to null first

// Function to insert a number into the list
void insert() {
    myLinkedList* newNum = new myLinkedList;
    cin >> newNum->num;
    newNum->next = nullptr;

    if (head == nullptr) {
        head = newNum; // Set head if the list is empty
    } else {
        myLinkedList* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next; // theres a kind of loop here, like, to set the current to head
        }
        temp->next = newNum;
    }
}

//reversing functionnnn!!!!
void reverse() {
    myLinkedList* prev = nullptr;
    myLinkedList* cur = head;
    myLinkedList* next = nullptr;

    while (cur != nullptr) {
        next = cur->next; // store the next node
        cur->next = prev; // reversing next to prev
        prev = cur;       // move prev to current
        cur = next;       // move current to next
    }
    head = prev; //an update to show head of the reversed listt
}

void print() {
    myLinkedList* temp = head;

    while (temp != nullptr) {
        cout << temp->num << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl; //when the temp->next is a null, print NULL
}

int main() {
    int n;
    cout << "============================" << endl;
    cout << "      Reverse ur list       " << endl;
    cout << "============================" << endl;
    cout << "  Enter number of ur integer: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "  Enter integer " << i + 1 << ": ";
        insert();
    }

    cout << endl;
    cout << "  Ur List      : ";
    print();

    reverse();

    cout << "  Reversed List: ";
    print();
    cout << endl;

    cout << "  Thanks! " << endl;

    return 0;
}

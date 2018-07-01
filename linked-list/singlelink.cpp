#include<bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int d = 0) {
        this->data = d;
        this->next = NULL;
    }
};

class List {
    Node *head;
public:
    List() {
        head = NULL;
    }

    void insert_begin(int);

    void insert_end(int);

    void insert_after(int, int);

    void delete_begin();

    void delete_end();

    void display();


};

void List::insert_begin(int num) {
    Node *newnode = new Node(num);
    if (head == NULL)
        head = newnode;
    else {
        Node *temp = head;
        head = newnode;
        head->next = temp;
    }
}

void List::insert_end(int num) {
    Node *newnode = new Node(num);
    if (head == NULL)
        head = newnode;
    else {
        Node *cur = head;
        while (cur->next = NULL)
            cur = cur->next;
        cur->next = newnode;
    }
}

void List::insert_after(int num, int pos) {
    Node *cur = head;
    Node *newnode = new Node(num);
    for (int i = 1; i < pos + 1; i++) {
        cur = cur->next;
    }
    newnode->next = cur->next;
    cur->next = newnode;
}

void List::delete_end() {
    Node *cur = head;
    Node *previous = head;
    while (cur->next != NULL) {
        previous = cur;
        cur = cur->next;
    }
    previous->next = NULL;
    delete cur;
}

void List::display() {
    Node *cur = head;
    while (cur) {
        cout << "Data: " << cur->data << endl;
        cur = cur->next;
    }
}

void List::delete_begin() {
    if (head == NULL)
        cout << "List is emppty" << endl;
    else {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    List singleLL;
    int d;
    cout << "input: ";
    cin >> d;
    singleLL.insert_begin(d);
    singleLL.display();
    cout << "input: ";
    cin >> d;
    singleLL.insert_begin(d);
    singleLL.display();
    cout << "data";
    cin >> d;
    int pos;
    cin >> pos;
    singleLL.insert_after(d, pos);
    singleLL.display();
    cout << "deletion" << endl;
    singleLL.delete_begin();
    singleLL.display();
    return 0;
}
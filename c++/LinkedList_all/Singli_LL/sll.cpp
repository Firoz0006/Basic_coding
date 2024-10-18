// #include <iostream>
// #include <cstdlib> // for malloc and free
#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node* next;
};

node* addAtBeg(node* head, int data) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL) {
       //cerr << "Memory allocation failed\n";
        return head; // Return the original head if memory allocation fails
    }
    temp->data = data;
    temp->next = head;
    head = temp;
    return head;
}

int main() {
    node* head = NULL; // Initialize an empty list
    head = addAtBeg(head, 10);
    head = addAtBeg(head, 20);
    head = addAtBeg(head, 30);

    // Print the list to verify the additions
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // Free the allocated memory
    while (head != NULL) {
        node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

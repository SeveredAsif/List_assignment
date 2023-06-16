#include<bits/stdc++.h>

using namespace std;

class List {
  public: struct Node {
    int value;
    Node * next;
  };

  Node * head;
  Node * tail;
  Node * curr;
  Node * box;

  void init(int a,int b) {
    head = new Node;
    tail = new Node;
    curr = new Node;

    head -> next = nullptr;
    tail -> next = nullptr;
    curr -> next = nullptr;
    head -> next = tail;
    curr = head;
  }

  void insert(int data) {
    Node * item = new Node;
    item -> value = data;
    item -> next = curr -> next;
    curr -> next = item;
    if (curr == tail)
      curr -> next = tail;
  }
  int currPos() {
    int pos = 0;
    Node * it = head;
    while (it != nullptr && it!=curr) {
      pos++;
      it = it -> next;
    }
    return pos;
  }
  int length() {
    int len = 0;
    Node * it = head -> next;
    while (it -> next != nullptr ) {
      len++;
      it = it -> next;
    }
    return len;
  }
  int remove() {
    Node * removable = curr -> next;
    curr -> next = curr -> next -> next;
    int val = removable->value;
    delete removable;
    return val;
  }
  void movetoStart() {
    curr = head;
  }
  void movetoEnd() {
    Node *it;
    for(it=head;it!=nullptr;it=it->next){
      if(it->next->next == tail){
        curr = it;
        break;
      }
    }
  }
  void prev() {
    Node * it;
    for (it = head; it != nullptr; it = it -> next) {
      if (it -> next == curr) {
        curr = it;
        break;
      }
      else if (it==curr){
        curr=it;
        break;
      }
    }
  }
  void next() {
    if(curr->next->next!=tail) curr = curr -> next;
  }
  void moveToPos(int pos) {
    int count = 0;
    Node * it;
    for (it = head; it != NULL; it = it -> next) {
      
      if (count == pos) {
        curr = it;
        break;
      }
      count++;
    }
  }
  int getValue() {
    if (curr != nullptr && curr -> next != nullptr)
      return curr -> next -> value;
    return -1;
  }
  void print()
  {
      int pos = currPos();
      cout << "<";
      movetoStart();
      int len = length();
      for (int i = 0; i <= len; i++) {
        if (i == pos) {
          if(len!=0) cout << "|";
        }
        if (i != len) cout << getValue();
        if (i < len - 1) {
          cout << ",";
        }
        next();
      }
      moveToPos(pos);
      cout << ">" << endl;
  }  
  void append(int a);
  int Search (int a);
  void clear();
};

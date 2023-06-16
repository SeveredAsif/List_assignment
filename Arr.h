

#include<bits/stdc++.h>

using namespace std;

class List {
  private: int * p = NULL;
  int * q;
  int * it;
  int count;
  int len;
  public: //List() {
  //   p = new int[5];
  //   it = p;
  //   count = 5;
  // }
  // List(int n) {
  //   p = new int[n];
  //   it = p;
  // }
  // ~List() {
  //   delete[] p;
  // }
  int length() {
    // int length = 0;
    // while (p[length] != -999) {
    //   length++;
    // }
    return len;
  }
  void insert(int a) {
    if (len == count-1) {
      q = new int[count * 2];
      for (int i = 0; i < count; i++) q[i] = p[i];
      count = count * 2;
      int index = it - p;
      p = new int[count];
      for (int i = 0; i < count; i++) p[i] = q[i];
      it = p + index;
    }
    int index = it - p;
    int currentLength = len;
    for (int i = currentLength; i > index; i--) {
      p[i] = p[i - 1];
    }
    p[index] = a;
    index = it - p;
    len++;
    //p[len] = -999;
  }

  int remove() {
    len--;
    //int len = length();
    int index = it - p;
    int removedElement = p[index];
    for (int i = index; i < len; i++) {
      p[i] = p[i + 1];
    }
    //p[len - 1] = -999;
    return removedElement;
  }
  void movetoStart() {
    it = p;
  }
  void movetoEnd() {
    it = p + length();
  }
  void prev() {
    it--;
  }
  void next() {
    it++;
  }
  int currPos() {
    return it - p;
  }
  void moveToPos(int pos) {
    it = p + pos;
  }
  int getValue() {
    return p[it - p];
  }
  void init(int n, int m) {
    p = new int[n];
    it = p;
    count = n;
    len = 0;
  }
  void print()
  {
      int pos = currPos();
      cout << "<";
      movetoStart();
      int len = length();
      for (int i = 0; i <= len; i++) {
        if (i == pos) {
          cout << "|";
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
  void clear();
  int Search(int a);
};



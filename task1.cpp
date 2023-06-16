#include"LL.h"
#include<iostream>
using namespace std;

int main() {
  List a;
  int K, X;
  cin >> K >> X;
  a.init();
  for (int i = 0; i < K; i++) {
    int input;
    cin >> input;
    a.insert(input);
    a.next();
  }
  a.movetoStart();
      int pos = a.currPos();
      cout << "<";
      a.movetoStart();
      int len = a.length();
      for (int i = 0; i <= len; i++) {
        if (i == pos) {
          cout << "|";
        }
        if (i != len) cout << a.getValue();
        if (i < len - 1) {
          cout << ",";
        }
        a.next();
      }
      a.moveToPos(pos);
      cout << ">" << endl;  
  while (1) {
    int Q, P;
    cin >> Q >> P;
    if (Q == 0) {
      break;
    } else if (Q == 1) {
      a.insert(P);
      a.print();
      int pos = a.currPos();
      cout << "<";
      a.movetoStart();
      int len = a.length();
      for (int i = 0; i <= len; i++) {
        if (i == pos) {
          cout << "|";
        }
        if (i != len) cout << a.getValue();
        if (i < len - 1) {
          cout << ",";
        }
        a.next();
      }
      a.moveToPos(pos);
      cout << ">" << endl;
    } else if (Q == 2) {
      int x = a.remove();
      cout<<"removed value: "<<x<<endl;
      a.print();
      int pos = a.currPos();
      cout << "<";
      a.movetoStart();
      int len = a.length();
      for (int i = 0; i <= len; i++) {
        if (i == pos) {
          cout << "|";
        }
        if (i != len) cout << a.getValue();
        if (i < len - 1) {
          cout << ",";
        }
        a.next();
      }
      a.moveToPos(pos);
      cout << ">" << endl;
    } else if (Q == 3) {
      a.movetoStart();
      a.print();
      int pos = a.currPos();
      cout << "<";
      a.movetoStart();
      int len = a.length();
      for (int i = 0; i <= len; i++) {
        if (i == pos) {
          cout << "|";
        }
        if (i != len) cout << a.getValue();
        if (i < len - 1) {
          cout << ",";
        }
        a.next();
      }
      a.moveToPos(pos);
      cout << ">" << endl;
    } else if (Q == 4) {
      a.movetoEnd();
      a.print();
      int pos = a.currPos();
      cout << "<";
      a.movetoStart();
      int len = a.length();
      for (int i = 0; i <= len; i++) {
        if (i == pos) {
          cout << "|";
        }
        if (i != len) cout << a.getValue();
        if (i < len - 1) {
          cout << ",";
        }
        a.next();
      }
      a.moveToPos(pos);
      cout << ">" << endl;
    } else if (Q == 5) {
      a.prev();
      a.print();
      int pos = a.currPos();
      cout << "<";
      a.movetoStart();
      int len = a.length();
      for (int i = 0; i <= len; i++) {
        if (i == pos) {
          cout << "|";
        }
        if (i != len) cout << a.getValue();
        if (i < len - 1) {
          cout << ",";
        }
        a.next();
      }
      a.moveToPos(pos);
      cout << ">" << endl;
    } else if (Q == 6) {
      a.next();
      a.print();
      int pos = a.currPos();
      cout << "<";
      a.movetoStart();
      int len = a.length();
      for (int i = 0; i <= len; i++) {
        if (i == pos) {
          cout << "|";
        }
        if (i != len) cout << a.getValue();
        if (i < len - 1) {
          cout << ",";
        }
        a.next();
      }
      a.moveToPos(pos);
      cout << ">" << endl;
    } else if (Q == 7) {
      int x=a.length();
      cout<<"length is "<<x<<endl;
      a.print();
      int pos = a.currPos();
      cout << "<";
      a.movetoStart();
      int len = a.length();
      for (int i = 0; i <= len; i++) {
        if (i == pos) {
          cout << "|";
        }
        if (i != len) cout << a.getValue();
        if (i < len - 1) {
          cout << ",";
        }
        a.next();
      }
      a.moveToPos(pos);
      cout << ">" << endl;
    } else if (Q == 8) {
      int pos = a.currPos();
      cout<<"current position is: "<<pos<<endl;
      a.print();
      cout << "<";
      a.movetoStart();
      int len = a.length();
      for (int i = 0; i <= len; i++) {
        if (i == pos) {
          cout << "|";
        }
        if (i != len) cout << a.getValue();
        if (i < len - 1) {
          cout << ",";
        }
        a.next();
      }
      a.moveToPos(pos);
      cout << ">" << endl;

    } else if (Q == 9) {
      a.moveToPos(P);
      a.print();
      int pos = a.currPos();
      a.movetoStart();
      cout << "<";
      a.movetoStart();
      int len = a.length();
      for (int i = 0; i <= len; i++) {
        if (i == pos) {
          cout << "|";
        }
        if (i != len) cout << a.getValue();
        if (i < len - 1) {
          cout << ",";
        }
        a.next();
      }
      a.moveToPos(pos);
      cout << ">" << endl;
    } else if (Q == 10) {
      int x = a.getValue();
      cout<<"value is : "<<x<<endl;
      a.print();
      int pos = a.currPos();
      cout << "<";
      a.movetoStart();
      int len = a.length();
      for (int i = 0; i <= len; i++) {
        if (i == pos) {
          cout << "|";
        }
        if (i != len) cout << a.getValue();
        if (i < len - 1) {
          cout << ",";
        }
        a.next();
      }
      a.moveToPos(pos);
      cout << ">" << endl;
    }
  }

}

//#include"Arr.h"
#include"LL.h"
#include<iostream>
using namespace std;

int main() {
  List a;
  int K, X;
  cin >> K >> X;
  a.init(X,K);
  for (int i = 0; i < K; i++) {
    int input;
    cin >> input;
    a.insert(input);
    a.moveToPos(a.length());
  }
  a.movetoStart();
  a.print();  
  while (1) {
    int Q, P;
    cin >> Q >> P;
    if (Q == 0) {
      break;
    } else if (Q == 1) {
      a.insert(P);
      a.print();
    } else if (Q == 2) {
      int x = a.remove();
      cout<<"removed value: "<<x<<endl;
      a.print();
    } else if (Q == 3) {
      a.movetoStart();
      a.print();
    } else if (Q == 4) {
      a.movetoEnd();
      a.print();
    } else if (Q == 5) {
      a.prev();
      a.print();
    } else if (Q == 6) {
      a.next();
      a.print();
    } else if (Q == 7) {
      int x=a.length();
      cout<<"length is "<<x<<endl;
      a.print();
    } else if (Q == 8) {
      int pos = a.currPos();
      cout<<"current position is: "<<pos<<endl;
      a.print();
    } else if (Q == 9) {
      a.moveToPos(P);
      a.print();
    } else if (Q == 10) {
      int x = a.getValue();
      cout<<"value is : "<<x<<endl;
      a.print();
  }

}
}

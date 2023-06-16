#include"LL.h"
#include<iostream>
using namespace std;

void List ::append(int a) {
    int curr = currPos();
    moveToPos(length());
    insert(a);
    moveToPos(curr);
  }

void List::clear(){
  movetoStart();
  while(length()){
    cout<<getValue()<<endl;
    remove();
    //next();
  }
}
int List::Search(int a){
  int l = length();
  int pos = currPos();
  movetoStart();
  for (int i=0;i<l;i++){
      if(getValue()==a){
        moveToPos(pos);
        return i;
      }
      next();
  }
  return -1;
}


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
  a.print();  
  while (1) {
    int Q, P;
    cin >> Q >> P;
    if (Q == 0) {
      break;
    } else if (Q == 1) {
      a.append(P);
      a.print();
    } else if (Q == 2) {
      a.clear();
      a.print();
      a.moveToPos(0);
    } else if (Q == 3) {
      int s = a.Search(P);
      cout<<s<<endl;
      int pos = a.currPos();
      a.print();
    } 

  }
} 

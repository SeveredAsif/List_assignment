#include"LL.h"
#include<iostream>
#include<string>
using namespace std;

void print(List* CRS,int Y){
    for(int i=0;i<Y;i++){
        int l = CRS[i].length();
        CRS[i].movetoStart();
        while(l--){
            cout<<CRS[i].getValue()<<"\t";
            CRS[i].next();
        }
        cout<<endl;
 
    }
}

int main(){
    int X,Y,Z;
    cin>>X>>Y>>Z;
    List *CRS = new List[Y];
    for(int i=0;i<Y;i++){
        CRS[i].init();
    }
    int M = Y;
    while(M--){
        int index;
        int car;
        char c;
        
        cin>>index;
        index -= 1;
        cin.get(c);
        
        while(c!='\n'){
            cin>>car;
            CRS[index].insert(car);
            CRS[index].next();
            cin.get(c);
        }
    }
    print(CRS,Y);

    while(1){
        char cmd[100];
        cin>>cmd;
        if (strcmp(cmd,"req")==0){
            int flag = 0;
            for(int i=0;i<Y;i++){
                if(CRS[i].length()!=0){
                    flag = 1;
                    CRS[i].movetoStart();
                    CRS[i].remove();
                    print(CRS,Y);
                    break;
                }
            }
            if(flag==0){
                cout<<"No cars are available"<<endl;
            }
        }
        if(strcmp(cmd,"ret")==0){
            int serial;
            cin>>serial;
            int flag =0;
            for(int i = Y-1;i>=0;i--){
                if(CRS[i].length()<Z){
                    flag =1;
                    CRS[i].movetoEnd();
                    CRS[i].insert(serial);
                    print(CRS,Y);
                    break;
                }
            }
            if(flag==0){
                cout<<"All garages are full"<<endl;
            }
        }
        if (strcmp(cmd,"end")==0){
            break;
        }
    }
    delete[] CRS;
}

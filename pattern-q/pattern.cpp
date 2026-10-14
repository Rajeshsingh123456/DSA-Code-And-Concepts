//square pattern ex=
//1 2 3 4
//1 2 3 4
//1 2 3 4
//1 2 3 4
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n =4; // 4 ka pattern hai 
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){

            cout<<j;
        }
         cout<<endl;
    }
   

// same q  in character form

int a=4;// 4 ka pattern hai 
for(int i=0;i<a; i++){
    char ch='A';// A le liya  
    for(int i=0;i<n;i++){
        cout<<ch;
        ch =ch+1;
    }
    cout<<endl;
}




return 0;


}

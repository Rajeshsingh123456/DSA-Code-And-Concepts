// flody's triangle pattern 
// 1
// 2 3
// 4 5 6
// 7 8 9 10

//logic = outer loop = i=1 to n tak 
//inner loop = i=1 hai toh 1 print only ek column  toh j<=i tak chalega 
// continue number increase thats why ek variable num usme =1 se start or loop ke baad +1 .

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    int num=1; 
    for(int i=1; i<=n;i++){  
        for(int j=1 ; j<=i; j++){
            cout<<num<<" ";
            num++ ;
        }
        cout<<endl;
    }

    // same q but character wise
    int a= 4;
    char ch='A'; // character chahiye isliye int ki jagah char data type use 
    for(int i=1; i<=a; i++){
        for(int j=1; j<=i; j++){
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
}
}
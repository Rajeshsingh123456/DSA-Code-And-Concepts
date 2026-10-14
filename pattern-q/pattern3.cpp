// triangle pattern 
// *
// * *
// * * * 
// * * * *


//logic  = outer loop  n times  
// inner loop  //1 line me ek start so j =1 se  chlega i tak  
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }
      cout<<endl;
    }

// same q print number 
// 1
// 22
// 333
// 4444

// logic outer loop = 1 to n tk i=1 hoga toh vaha 1 print karna ahai i =2 hai 2 do baar i=2 toh 2 chheze print toh simple print me i 
 int b=3;
 for(int i=1; i<=b; i++){
    for(int j=1;j<=i; j++){
        cout<<i;
    }
    cout<<endl;
}
    
// same q with character
int a=4;
char ch='A';
for(int i=1; i<=a;i++){
    for(int j=1; j<=i; j++){
        cout<<ch;
        ch++;
    }
    cout<<endl;
}

    return 0;
}
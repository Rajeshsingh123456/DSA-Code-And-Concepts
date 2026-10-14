//square pattern ex=
//1 2 3 4
//1 2 3 4
//1 2 3 4
//1 2 3 4


// trick sabse pehle line kitni line tak jana hai outer loop ho jayega then us ek line me kya kya print karna hai .
#include<bits/stdc++.h>
using namespace std;


//logic 
//outer loop =run in n times
//inner loop= ek  line me kya kya print karana hai ya kaam karna hai 
int main(){
    int n =4; // 4 ka pattern hai 
    for(int i=1;i<n;i++){ // outer loop
        for(int j=1;j<n;j++){ // inner loop 

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



// same q same pattern print start
// inner loop me cout<"*"; kar do thats shit.



return 0;


}

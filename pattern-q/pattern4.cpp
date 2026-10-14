// reverse triangle patter 
// 1
// 2 1
// 3 2 1
// 4 3 2 1
//logic 
// outer loop = n=4 hai toh 1 to n tak 
// inner loop = i=0 le toh  toh vaha sirf 1 print karna hai toh i +1 hoga  i=2 hai toh vaha 2 print karne hai reverse me bs cout kar denge j ko 

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n=4;
    for (int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){  // i=0 liya hai isliye j=i+1 lyuki 1 print karna hai direct i =1 lete toh j=i le lete bs 
            cout<<j <<" ";
        }
        cout<<endl;
    }


    // same with character 
    int a=4;
    char ch='A'; // small a and capital a are different .
    
    for (int i = 0; i < 4; i++) {
        for (int j = i; j >= 0; j--) {
            cout << char(ch + j) << " ";  // char likha taki no value na aaye no or character value + toh charcter value aayegi 
            // or ch humne A liya hai j=0 hai toh simple a+0=a aayega isliye char(a+j) kiya char na lgate toh num print hoga
            //Kyunki ch + j me C++ character ko uski ASCII value mein convert karke addition karta hai.
        }
        cout << endl;
    }

   


}
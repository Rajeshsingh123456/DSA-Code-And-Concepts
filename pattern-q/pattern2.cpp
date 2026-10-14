//square pattern
//1 2 3
//4 5 6
//7 8 9  pehle me reset next line me ho rha tha isme baar continue ho rha hai

#include<bits/stdc++.h>
using namespace std;
 int main(){

    int n=3;
    int num =1; // ek variable le lenge jisme 1 hogi value
    for(int i=0;i<n; i++){
        for(int j=0; j<n; j++){
         cout<<num <<" "; // 1 print ho jayeg
         num++;    // then num ki value 2 ho jayegi  or 1  ,1 value badhte rhegi.

        }
        cout<<endl;
    }

// same q in character wise 
// A B C 
//D E F
//G H I
int b=3;
char ch='A'; // characeter single quetos me likhte hai 
 for (int i= 0; i<b; i++){
    for(int j=0; j<b; j++){
        cout<<ch<<" ";
        ch++ ;// character hai usko ek plus kar rhe hai a se b b se c 
    }
    cout<<endl;
 }


    return 0;
 }
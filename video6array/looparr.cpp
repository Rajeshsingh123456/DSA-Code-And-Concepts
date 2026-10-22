//LOOPS IN ARRAY
/* for ex 100 size ka data hai 100 bar cout nhi karna uske badle loop ka use hoga loop chlega 0 se size-1 tak
important 
array.size(); => ye array ka size btana hai find out karta hai vector me (use in leetcode gfg) .
sizeof(marks)/sizeof(int);// ye bhi array ka size btata hai agar humne array create akara hai toh tan int isliye data type ke size ko divide karege tab jakar array ka size aayega vrna array or data tpe dono ka size aa jayega


*/
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n=7; //size of array .
    int marks[n]={12,34,4,54,56,76,87}; //array 
for(int i=0; i<n; i++){   // i=0 se start huaa or n-1 tak jayega.
    cout<<marks[i]<<" "; // // Har index ka element print hoga
}


//takes array elemnt from user 
int s=5;
int arr[s]; //array bnaya jiska size 5 hai ab isme element user dalega 
cout<<"enter the element of array "; //  ye print hoga phele or user ko ek prompt ki tarah milega ki ye kaam karna hai 
for(int i=0; i<s; i++){ // array ke 0 se 4 tak index me jayega 
    cin>>arr[i];  //or user se element lega 
}
for(int i=0; i<s; i++){
    cout<<arr[i]<<" "; // user se element mile unko print kara dega .
}


}
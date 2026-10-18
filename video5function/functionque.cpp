//calculate the n factorial using function
/* n! = 5! = 1*2*3*4*5=120
*/
#include<bits/stdc++.h>
using namespace std;
 int facto(int n){
    int factorial =1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
 }

 // q 2 =>Check a number is  Even or Odd
 int evenodd(int a){
  if(a%2==0){
    return 1; //int returntype hai isliye 1 ya 0 return. ya agar return nhi void lga ke sidhe cout kar do call kar do 
    // ya fir returntype string le lo or return me even odd likh toh main me calll kar do easy way.
  }else{
    return 0;
  }
}
 
// q=3 square of number  => no ki power =2 .
// logic =>Square = number × number Square of 5	=5^2 = 5 *5=25 


int square(int b){// bek no paass parameter paass kar rhe hai
  return b*b;    
}


 int main(){
    cout<<facto(5)<<endl; //function call
    /*int facto(int n) → function create and number receive karta hai. factorial = 1 → multiplication ki initial value.
for loop → 1 se n tak multiply karta hai.return factorial → calculated answer wapas bhejta hai. cout << facto(5) → returned answer print karta hai.*/
  int result = evenodd(34); // function caall kiya or ek variable me store kiya 
 if(result==1){ // variable ka use kiya condition lga ke return ko print kara diya 
    cout<<"even";
 } else{
    cout<<"odd";
 }

 cout<<endl<<square(5);

 }

// ARRAY QUESTIONS

// calculate the sum of all the element of array?
/* logic=> ek sum varible bna sakte hai jisko 0 rakh sakte hai 
array ke har ek index  me jayenge using loop 0 to n-1tak 
hume sum print karna hai isliye cout<<arr[i] nhi karege vaha sum me jo sum ki current value hogi + arr[i]kar denge .
it means sum ki cureent value jo hogi vo or array ke i=0 se n tak jo jo value hunge unka +  
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0; // sum varibale value =0 ho.
     int arr[5]={2,4,5,6,10}; // array create kar diya jiska size 5 hai 

     for(int i=0; i<5 ;i++){ //array ke har ek index ke elemnet me jayega.array size 5 hai isliye i<5
        sum=sum+arr[i];

     }
 cout<<sum <<endl; // sum kivalue end me jo aai vo print .

 //agar average nikalna hai toh cout<<sum/sizeofarray kar do average aa jayega .

 // calculate the product of all the element of the array 

 int product =1; // product always 1 kyuki 0 hoga toh sab 0 ho jayega * me.

 int prr[3]={2,4,5};
 for(int i=0; i<3; i++){
    product=product*prr[i];
 }
 cout<<product;

}
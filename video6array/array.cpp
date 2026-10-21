// ARRAY => array linear data structure hai ,same data type ke multiple element (value) store karna 
/* Example: Alag-alag 5 variables banane ki jagah ek array bana sakte hain.
int marks[5] = {70, 80, 90, 60, 85};
Yahan marks naam ke array mein 5 integer values hain.

Index hamesha 0 se start hota hai.Index aur element alag hote hain. Index position batata hai, element us position par rakhi value hoti hai.
   
*/

//Array declare aur initialize karna Declaration ka matlab array banana, aur initialization ka matlab usmein values rakhna. or
//Array ke elements access karna Kisi particular index ki value nikalne ke liye arr[index] use karte hain.
#include<bits/stdc++.h>
using namespace std;
int main(){
// int arr[5]; 5 integers size  ka array banaya .int arr[5] ka matlab 5 elements ki jagah hai, indexes 0 se 4 tak.
// int a[] = {1, 2, 3}; // Size automatically 3 hoga

int nums[5] = {10, 20, 30, 40, 50}; // nums karke array create or array me Values store ki

cout <<nums[0] << endl; // First element: 10
    cout <<nums[2] << endl; // Third element: 30
    cout <<nums[4] << endl; // Last element: 50



     return 0;
}
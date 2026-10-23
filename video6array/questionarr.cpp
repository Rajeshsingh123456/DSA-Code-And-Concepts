// ARRAY QUESTIONS

//LINEAR SEARCH q=>find the element of X in the array .take array and X as input .

/*  logic => x input: User se woh number lenge jise search karna hai.flag = false: Shuru mein maan liya ki number array mein nahi mila.
First for loop: Array ke 5 elements input user se liye .Second for loop: Har element ko x se compare karege — arr[i] == x.
Agar mil gaya: flag = true karo aur break se loop rok do.Last if-else: Agar flag true hai toh number present hai, warna present nahi hai.  */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number you want to search: ";
    cin>>x;  // Jis element ko search karna hai, uski value input lo

    int n=5;
    int arr[n];

    cout<<"Enter elements of array: ";

    // Initially maan rahe hain ki x array mein present nahi hai 
    bool flag = false;

    //  Array ke 5 elements input liye user se 
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //  Array ke har element ko x se compare karo
    for(int i=0; i<n; i++){

        // Agar current element x ke equal hai
        if(arr[i] == x){

            flag = true;  // Matlab x array mein mil gaya flag true kar diya 

            break;  // Element mil gaya, ab loop rok do
        }
    }

    //  Flag ki value check karege 
    if(flag == true){
        cout<<x<<" is present in array"; //flag true hai toh x ki value hai array me 
    }
    else{
        cout<<x<<" is not present in array";
    } // dry run kar lo.



    
}
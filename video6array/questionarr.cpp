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

    cout<<"Enter elements of array\n";

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
        cout<<x<<" is present in array\n"; //flag true hai toh x ki value hai array me 
    }
    else{
        cout<<x<<" is not present in array\n";
    } // dry run kar lo.



// question 2 => find the smallest value out of all the element in the array 
/* LOGIC =>smallest = INT_MAX => Initially smallest ki value sabse badi integer value rakhenge. First for loop => User se array ke 7 elements input lenge.
Second for loop => Array ke har element ko smallest se compare karenge.Agar array ka current element smallest se chhota hai,
toh smallest = array[i] kar denge. Loop complete hone ke baad smallest mein array ka  sabse chhota element hoga.Finally smallest ko print kar denge.

same for maximum  =>maximum = INT_MIN => Initially SABSE chooti vlue rakhi hai 
*/

int s=7;
int array[s]; 
cout<<"enter the element of array\n";
int maximum=INT_MIN; // maximum ko sabse chhota eleement maan rhe hai 

int smallest=INT_MAX; // isme integer ki sabse badi value hogi 

for(int i=0;i<s; i++){
    cin>>array[i]; // user se array eleemnt lene ke liye 
}
for(int i=0; i<s; i++){  // Array ke har element ko smallest se compare karenge.
    if(array[i]<smallest){ // smallest me max integer value hai toh arr[i]less then hi hoga true hoga 
        smallest =array[i]; // true toh smallest me arr[i] 0ki value then chcek arr[1]index with smallest.
    } 
    
    if(array[i]>maximum){ //Agar current element maximum se bada hai jo hoga hi hoga maximum me sabse chhota element hai 
        maximum=array[i];
    }
}
cout<<"smallest ="<<smallest; // smallest value print kar denge 
    cout<<"maximum ="<<maximum; // maximum value print kar dega 
}
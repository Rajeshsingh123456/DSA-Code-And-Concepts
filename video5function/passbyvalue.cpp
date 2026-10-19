// pass by value => jab function ko variable bhejte hai uski copy jati hai function ko .
//original varible (main function ke under wala variable) chnage nhi hota .simple value ki copy pass hoti hai.
/*
working of function
Main function mein variables bane.int x = 10;int y = 20; Yahan x aur y original variables hain.
Function call hua. sum(x, y);Ab x aur y ki copies sum() function ke parameters a aur b mein jayengi.
then Sum calculate hoga.
return a + b; Matlab 10 + 20 = 30, aur 30 wapas main() mein return hoga

*/
#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b){
    return a+b;
}
// chnge the copy varibale values.
int chngeValue(int c,int d){// c or d me v,h ki copies jayenge c=10 d=20
    c=c+10;// c=10+10=20
    d=d+5; // d=20+5=25
    return c+d; // sum toh  c+d 20+25 =45 hi jayega but yaha c,d ki value 20,25 hai but  c ,d ko cout kiya main me toh c or d ki value 10,20 hi hogi
}

int main(){
    int x=10;
    int y=20;
    cout<<sum(x,y)<<endl;



    int c=10;
    int d=20;
    cout<<chngeValue(c,d);
    cout<<endl<<c <<endl; // c,d ki value  same rhegi 10 ,20 kyuki original value nhi copy value jati hai iski ko pass by value bolte hai 
    cout<<d;



}
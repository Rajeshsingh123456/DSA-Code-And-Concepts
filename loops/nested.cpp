// nested loop => loop inside loop is called nested loop  (loop ke undarloop ka use) 

/* print star in 5 line and every line has 5 start
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5; 
    for(int i=0; i<n; i++){ 
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
//logic 
//outer loop = run in n times (basically ye har ek line me jata hai)
//inner loop= ek  line me kya kya print karana hai ya kaam karna hai 

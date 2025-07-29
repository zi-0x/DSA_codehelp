 /* print the following pattern
    1234554321
    1234  4321
    123    321
    12      21
    1        1
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        for(int space=1;space<i;space++)
            cout<<"  ";
        for(int k=n-i+1;k>=1;k--){
            cout<<k;
        }
        cout<<endl;
    }
}
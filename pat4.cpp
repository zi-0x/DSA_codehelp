/* Print the folowing pattern:
   123
   456
   789
*/

#include <iostream>
using namespace std;
int main(){
int n;
cin>> n;
int ixj=1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ixj<<" ";
            ixj++;
        }
        cout<<endl;
    }
}
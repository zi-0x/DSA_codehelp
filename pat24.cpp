/* print the following pattern
      1
     121
    12321
   1234321
*/

#include <iostream>
using namespace std;
int main(){
      int n;
      cin >> n;
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++)
            cout<<" ";
      for(int j=1;j<=i;j++){
        cout << j;
      }
      for(int k=i-1;k>=1;k--){
            cout<<k;}
      cout << endl;
    }

}
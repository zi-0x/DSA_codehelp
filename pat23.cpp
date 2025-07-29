/* print the following pattern
      1
     23
    345
   4567
*/

#include <iostream>
using namespace std;
int main(){
      int n;
      cin >> n;
    for(int i=1;i<=n;i++){
        for(int space=0;space<n-i;space++)
            cout<<" ";
      for(int j=1;j<=i;j++){
        cout << j+i-1;
      }
      cout << endl;
    }

}
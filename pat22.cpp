/* print the following pattern
   1234
    234
     34
      4
*/

#include <iostream>
using namespace std;
int main(){
      int n;
      cin >> n;
    for(int i=1;i<=n;i++){
        for(int space=1;space<i;space++)
            cout<<" ";
      for(int j=1;j<=n-i+1;j++){
        cout << j+i-1;
      }
      cout << endl;
    }

}
/* Print the folowing pattern:
   A
   BB
   CCC
   DDDD
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
     char ch='A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch<< " ";
        }
        ch++;
        cout << endl;
    }
}
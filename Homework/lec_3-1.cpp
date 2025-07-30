//sum of all even numbers till n

#include <iostream>
using namespace std;    

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    int i=0;
    while (i<=n){
       sum=sum+i;
       i=i+2; 
    }
    cout << "Sum of all even numbers till " << n << " is: " << sum << endl;
    return 0;
}
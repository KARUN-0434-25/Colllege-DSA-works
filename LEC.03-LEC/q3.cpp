//Calculate the sum of odd numbers from 1 to n.
#include<iostream>
using namespace std;
int main(){

   int n;
   cout << "INPUT THE VALUE N i.e. = ";
   cin >> n;

   int oddsum=0;

   for(int i=1; i<=n; i++){
    if(i%2!=0){
        oddsum+=i;
    }
   }
   cout << "THE SUM OF FIRST " << n << " ODD NUMBERS = " << oddsum << endl;
   return 0;

}
//Calculate the sum of numbers from 1 to n.
#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout << "ENTER THE VALUE OF N( number upto which u need the sum). Ans: ";
    cin >> n;

    int sum=0;

    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout << "THE SUM FROM 1 TO " << n << " = " << sum ;
    return 0;
}
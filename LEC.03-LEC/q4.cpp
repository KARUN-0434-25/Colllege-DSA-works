//Check if a number is prime or not .
#include<iostream>
using namespace std;
int main(){
    int checkNumber;
    cout << "INPUT THE NUMBER THAT NEED TO BE CHECK = ";
    cin >> checkNumber;

    for(int i=1 ; i<=1; i++){
        if(checkNumber%2==0 &&  checkNumber%3==0 && checkNumber%4==0 && checkNumber%5==0 && checkNumber%7==0 && checkNumber%9==0  && checkNumber%10!=0 && checkNumber%checkNumber==0){
            cout << "THE " << checkNumber << " IS PRIME NUMBER !";}}
        }else{
            cout << "THE " << checkNumber << " IS NOT A PRIME NUMBER !";        
        }
    }
    return 0;
}
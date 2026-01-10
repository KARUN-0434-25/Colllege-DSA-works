//Find character lowercase or uppercase.
#include<iostream>
using namespace std;
int main(){
    char find;
    cout << "ENTER THE CHARACTER ? Ans: ";
    cin >> find;

    if(find>='A' && find<='Z' ){
        cout << "THE ENETRED CHARACTER IS CAPITAL CHARACTER !!";
    }else if (find>='a' && find<='z'){
        cout << "THE ENTERED CHARCHARACTER IS SMALL CHARACTER !!";
    }else{
        cout << "pleas type this and input the charater Ans : (g++ q1.cpp && .\a.exe)";
    }
    
    return 0;
}
// Question: Given  a stack of size N ,impement PUSH and POP operation following the LIFO (Last in first out)principle.Handle overflow and underflow condion, and display the final content of the stack . Also, given an infix expresion ,convert it into its equivalent postfix expression using a stak by  following operator  precedence and associativity rules. Finally, evaluate the genereated postfix wxpression using a stack and display the computed result.
// Stack Implemettions--using array
#include <bits/stdc++.h>
using namespace std;
class Stack {
    int arr[20];
    int size;
    int top;
    public:
    Stack(int N) {
        size = N;
        top = -1;
    }
    void push(int val) {
        if (top == size - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = val;
    }
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top] << endl;
        top--;
    }
    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }

        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};
int main() {
    int N;
    cin >> N;

    Stack s(N);

    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.push(40);
    s.pop();
    s.display();

    return 0;
}
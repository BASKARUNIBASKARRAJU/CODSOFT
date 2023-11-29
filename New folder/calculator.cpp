#include<bits/stdc++.h>
using namespace std;
int main() {
    bool k=true;
    while(k){
    double first_number, second_number, answer;
    char operation;
    cout<<"Enter the first number: ";
    cin>>first_number;
    cout<<"Enter the second number: ";
    cin>>second_number;
    cout<<"Choose an operation (+ for addition, - for subtraction, * for multiplication, / for division): "<<endl;
    cout<<"enter 'N' if you don't have any other operation to perform "<<endl;
    cin>>operation;
    
    switch(operation) {
        case '+':
            answer=first_number+second_number;
            cout<<"Result: "<<first_number<<" + "<<second_number<<" = "<<answer<<endl;
            break;
        case '-':
            answer=first_number-second_number;
            cout<<"Result: "<<first_number<<" - "<<second_number<<" = "<<answer<<endl;
            break;
        case '*':
            answer=first_number*second_number;
            cout<<"Result: "<<first_number<<" * "<<second_number<<" = "<<answer<<endl;
            break;
        case '/':
            if(second_number!=0) {
                answer=first_number/second_number;
                cout<< "Result: " << first_number << " / "<<second_number<<" = "<<answer<<endl;
            } else {
                cout<<"Error: Division by zero is not allowed."<<endl;
            }
            break;
        case 'N':
            k=false;
            break;
        default:
            cout<<"Invalid operation code. Please enter +, -, *, or /."<<endl;
            break;
    }
   }
    
    return 0;
  }


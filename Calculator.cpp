#include <iostream>
#include <cmath>
int main() {
using std::cin;
using std::cout;
using std::endl;
using std::string;
char operat;
double number1;
double number2;
double result;

cout<<"--------------------CALCULATOR----------------------"<<endl;



    cout<<"Enter the first number: ";
    cin>>number1;
    cout<<"Enter the second number: ";
    cin>>number2;
    cout<<"Enter ur operator (+ - * /): ";
    cin>>operat;
   
switch(operat){
        case '+': 
        result=number1+number2;
        cout<<number1<<operat<<number2<<"="<<result<<endl;
        break;

        case '-':
        result=number1-number2;
        cout<<number1<<operat<<number2<<"="<<result<<endl;
        break;

        case '*':
        result=number1*number2;
        cout<<number1<<operat<<number2<<"="<<result<<endl;
        break;

        case '/':
        if(number2==0){
            cout<<"Error: Division by zero is not allowed."<<endl;
            break;  
        }
        result=(double)number1/number2;
        cout<<number1<<operat<<number2<<"="<<result<<endl;
        break;

        default:
        cout<<"Invalid operator"<<endl;
}
cout<<"-----------------------------------------------"<<endl;


return 0;
}
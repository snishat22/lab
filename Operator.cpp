#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int result, op1, op2;

    //===================BINARY OPERATOR=================//
    op1=5;
    op2=7;
    //sum = operand1 + operand2
    result = op1 + op2;

    cout << "Addition : "<< result <<endl;
    cout << "Subtraction : "<< 2 - 3 <<endl;
    cout << "Multiplication : "<< 2 * 3 <<endl;


     /*
        int / int => int        integer division
        float / int => float    real division
        int / float => float    real division
        float / float => float  real division
    */

    cout << "Integer Division : "<< 2 / 3 <<endl;

    cout << "Real Division : "<< 2.0 / 3 <<endl;
    cout << "Real Division : "<< 2 / 3.0 <<endl;
    cout << "Real Division : "<< 2.0 / 3.0 <<endl;

    cout << "Modulus : "<< 9 % 12 <<endl; //this operator is used to find out remainder

    //===================UNARY OPERATOR=================//
    result = -result;
    cout <<"Sign Change : "<< result<<endl;

    result = +result;
    cout <<"Sign Change : "<< result <<endl;

    //Power Calculation

    cout<<"Square Calculation : "<< pow(5,2) <<endl;
    cout<<"Cube Calculation : "<< pow(5,3) <<endl;
    cout<<"Any power Calculation : "<< pow(1,5) <<endl;

    cout<<"Square root Calculation : "<< pow(25,1/2.0) <<endl;
    cout<<"Cube root Calculation : "<< pow(27,1/3.0) <<endl;
    cout<<"Any root Calculation : "<< pow(225,1/5.0) <<endl;


return 0;
}

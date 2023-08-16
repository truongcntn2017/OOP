#include<iostream>

using namespace std;
//Our generic function
//use addresses of the variables in the delcaration of the function

template<typename T>
T sumTwo(T  a,T  b)
{
    //Note  that the sum is a variable type T. This means whatever 
    //variable type is passed in
   //will become the variable type for sum.
    T  sum;
    sum = a + b;
    return sum;
}

int main(){
    int a, b;

    cin >> a >> b;
    cout<<"Sum = "<<sumTwo(a, b)<<endl;
}
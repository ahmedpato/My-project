// By : Ahmed Mohammed Ali / 20184020


/* 
Question : 
Using vector, write a program that asks the user to enter 5 integer numbers and shows the following:

Summation, subtraction, multiplication, and
division of the numbers.

Average, max, min.

Print numbers in a sorted sequence.




*/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{  
    vector<int> numbers;
    
    cout<<"Enter 5 Numbers :"<<endl; 
    int input = 0;
    for(int i=0 ; i<5 ; i++){
        cin>>input;
        numbers.push_back(input);
    }
    // print Vector 
    cout<<"The Vector Is :"<<endl;
    for(int i=0 ; i<numbers.size(); i++){
        cout<<numbers[i]<<endl;
    }
    int sub ; 
    sub = numbers[0];
    for(int i=1 ; i<numbers.size(); i++){
        sub -= numbers[i];
    }
    cout<<"The Subtraction of Vector Is :"<<sub<<endl;
    cout<<"The Summation Of Vector Is :"<< accumulate(numbers.begin(),numbers.end() , 0)<<endl;
    cout<<"The Muliplication Of Vector :"<< accumulate(numbers.begin(),numbers.end(),1,multiplies<int>())<<endl;

    float div;
    div = numbers[0];
    for(int i=1 ; i<numbers.size() ; i++){
        div /= numbers[i];
    }
    cout<<"The Division Of Vector Is :"<<div<<endl;
    cout<<"The Min Number In Vector :"<< *min_element(numbers.begin(),numbers.end())<<endl;
    cout<<"The Max Number In Vector :"<< *max_element(numbers.begin(),numbers.end())<<endl;  
}

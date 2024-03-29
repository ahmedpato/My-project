// By : Ahmed Mohammed Ali / 20184020 .

/*
Question : 

Using stack, write a program that represents a web browser which will show the following menu to the user:

1-Enter website (the user will enter a website i.e. www.google.com and the website will be saved in the web browser history stack).

2-Show all history.

3-Delete all history.

4-Exit.


*/
#include <iostream>
#include <string>
#include <stack>

using namespace std;

void Insert_Web(stack<string> & web)
{
    string input;
    cout<<"Enter Website :"; cin>>input;
    web.push(input);
}

void Show_All(stack<string> web)
{
    while(!web.empty())
    {
        cout<<" "<<web.top();
        web.pop();
    }
    cout<<endl;
}

void Delete_All(stack<string> & web)
{
    while(!web.empty())
    {
    web.pop();
    }
}
int main()
{
    stack<string> web;
    int choice;
    while(true)
    {
        cout<<"1_ Add ."<<endl;
        cout<<"2_ Show ."<<endl;
        cout<<"3_ Delete ."<<endl;
        cout<<"4_ Exit ."<<endl;
        cout<<"Enter Your Choice :"; cin>>choice;
        switch(choice)
        {
        case 1 : Insert_Web(web); break;
        case 2 : Show_All(web); break;
        case 3 : Delete_All(web); break;
        case 4 : exit(0); break;
        
        default:
            break;
        }
    }
}

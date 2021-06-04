// By : Ahmed Mohammed Ali / 20184020 .
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
        cout<<"Add"<<endl;
        cout<<"Show"<<endl;
        cout<<"Delete"<<endl;
        cout<<"Enter Your Choice :"; cin>>choice;
        switch(choice)
        {
        case 1 : Insert_Web(web); break;
        case 2 : Show_All(web); break;
        case 3 : Delete_All(web); break;
        
        default:
            break;
        }
    }
}
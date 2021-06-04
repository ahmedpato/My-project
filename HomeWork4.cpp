// By : Ahmed Mohammed Ali / 20184020 .

/*
Question : Using queue and strings,
write a program that solving gas cylinder queues problem in Libya by developing
a system that shows the following:


1.Register a customer name(in String).


2.Show how many customers.


3.Show all registered customers names.


*/
#include <iostream>
#include <queue>
#include <string>

using namespace std;
// Insert .
void Insert(queue<string> & customer)
{
    string name;
    cout<<"Enter Customer Name :"; cin>>name;
    customer.push(name);
}
// Size .
void Size(queue<string> customer)
{
    cout<<"The Size Of Customer Is :"<<customer.size()<<endl;
}
// Show
void Show(queue<string> customer)
{
    while(!customer.empty())
    {
        cout<<" "<<customer.front();
        customer.pop();
        
    }
    cout<<endl;
}
// Serving .

void Serving(queue<string> &customer)
{

    char choice;
    cout << "a_ Next customer ." << endl;
    cout << "b_ Return to main menu." << endl;
    cout << "Enter Your Choice :"; cin >> choice;
    while (choice == 'a')
    {
        cout << " " << customer.front();
        customer.pop();
        cout << "\ndo you want to serve next customer? a to contiue b to leave\n";
        cin >> choice;
    }
     if(choice == 'b')
    {
        return;
    }
    else {
        cout << "Sorry ! We Dont Have This input , Try Again ..." << endl;
    }

}

void main_menu(queue<string> customer)
{
    int choice;
    while(true)
    {
        cout<<"1_ Add Customer ."<<endl;
        cout<<"2_ Size ."<<endl;
        cout<<"3_ Show ."<<endl;
        cout<<"4_ Serving ."<<endl;
        cout<<"5_ Exit ."<<endl;
        cout<<"Enter Your Choice :"; cin>>choice;

        switch(choice)
        {
            case 1 : Insert(customer); break;
            case 2 : Size(customer); break;
            case 3 : Show(customer); break;
            case 4 : Serving(customer); break;
            case 5 : exit(0); break;
            default : break;
        }
    }
}

int main()
{
    queue<string> customer;
    main_menu(customer);
    
    return 0;
}

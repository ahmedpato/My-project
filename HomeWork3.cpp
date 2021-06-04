// By : Ahmed Mohammed Ali / 20184020 .
#include <iostream>

#include <string>

using namespace std;

 // Creat Node .
class node{
public:
    int id;
    string name;
    node* next;
};
// end Node

node * head = new node();

// Function To Insert Student .

void  Insert_Student(int id , string name){
    node * t = new node();
    t->id = id;
    t->name = name;
    t->next = NULL;

    if ((head==NULL)||(head->id >= t->id)){
        t->next = head;
        head = t;
    }
    else{
        node* c = head;
        while(c->next != NULL && c->next->id < t->id){
            c = c->next;
        }
        t->next = c->next;
        c->next = t;
    }
    cout<< "Student Inseart Successfully ."<<endl;
}

// Function To Search Student .
void Search_Student(int id){
    if(!head){
        cout<<"No Such Student Avialable ."<<endl;
        return;
    }
    else{
        node * p = head;
        while(p){
            if(p->id == id){
                cout<<"Student Id :"<<p->id<<endl;
                cout<<"Student Name :"<<p->name<<endl;
                return;
            }
            p = p->next;
        }
        if(p == NULL)
        cout<<"No Such Student Avalable ."<<endl;
    }
}


int main()
{
    head = NULL;
    int id;
    string name;

    while(true){
        cout<<"\n\n\nWelcome To Student Record ."<<endl;
        cout<<"1_ Insert Student ."<<endl;
        cout<<"2_ Search Student ."<<endl;
        cout<<"3_ Exit ."<<endl;
        cout<<"Enter Your Choice :";
        int choice;
        cin>>choice;
        if(choice == 1){
                cout<<"\nEnter Student Id :"; cin>>id;
                cout<<"Enter Student Name :"; cin>>name;
                Insert_Student(id,name);
        }
        else if(choice == 2){
            cout<<"\nEnter Id Number Of Student Whose Record u Want To Search :";
            cin>>id;
            Search_Student(id);
        }else if(choice == 3){
            exit(0);
        }else{
            cout<<"\nInvalid Choice Try Again ..."<<endl;
        }
    }
    return 0;
}
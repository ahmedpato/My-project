// By : Ahmed Mohammed Ali / 20184020
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    vector<int> num_student;
    int Material_Num = 0;
    cout<<"How many subjects does the student have? : "; cin>>Material_Num;
    cout<<"Enter the student's grades : "<<endl;
    int n;
    for(int i=0 ; i<Material_Num ; i++){
        cin>>n;
        num_student.push_back(n);
    }

    cout<<"The Number Of Subjects : "<<Material_Num<<endl;

    cout<<"The Student's Grades : ";
    for(int i=0 ; i<num_student.size() ; i++){
        cout<<num_student[i]<<", ";
    }
    
    cout<<"\nTotal Of Marks : ";
    float total;
    total = num_student[0];
    for(int i=1 ; i<num_student.size() ; i++){
        total+=num_student[i];
    }
    cout<<total<<endl;


    cout<<"Avrage Of Marks : ";
    float avg;
    avg = total / num_student.size();
    cout<<avg<<endl;

    cout<<"The Precentage Of Student's Total Marks : ";
    float precentage = (total /(num_student.size()*100))*100;
    float gpa;
    string g;
    if (precentage >= 85){
        gpa = 4;
        g = "A+";
    }else if(precentage >= 80){
        gpa = 3.7;
        g = "A+";
    }else if(precentage >= 75){
        gpa = 3.3;
        g = "B+";
    }else if(precentage >= 70){
        gpa = 3;
        g = "B";
    }else if(precentage >= 65){
        gpa = 2.7;
        g = "B-";
    }else if(precentage >= 60){
        gpa = 2.3;
        g = "C+";
    }else if(precentage >= 55){
        gpa = 2;
        g = "C";
    }else if(precentage >= 50){
        gpa = 1.7;
        g = "C-";
    }else if(precentage >= 45){
        gpa = 1.3;
        g = "D";
    }else if(precentage >= 40){
        gpa = 1;
        g = "D";
    }else{
        gpa = 0;
        g = "F";
    }
    cout<<precentage<<" %"<<endl;  
    cout<<"GPA of student total marks: "<<gpa<<endl;
    cout<<"Grade of student total marks: "<<g<<endl;
    return 0;
}
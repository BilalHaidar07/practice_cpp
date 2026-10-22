#include<iostream>
using namespace std;
class student
{public:
    string name;
    string age;
        int total_marks;
            float marks;
                float marks1;
                    float marks2;
                        float marks3;
                float percentage;
   
    void display()
    {
        cout<<"Name : "<<name <<endl;
            cout<<"age"<<endl;
                cout<<"marks"<<endl;
                    cin>>marks1;
                        cin>>marks2;
                            cin>>marks3;

                            total_marks = marks1 + marks2 +marks3 ;
                            cout<<"total marks"<<total_marks<<endl;
                            percentage = (total_marks/300.0)*100;
                            cout<<"percentage"<<percentage<<"%"<<endl;}
    };
int main()
{
    student n1;
    n1.name ="zohab";
    n1.age ="19";
    
    n1.display();

};

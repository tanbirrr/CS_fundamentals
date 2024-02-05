#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        student(int r,char s,int c,char* n)
        {
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }

};
int main()
{
    char name[100]="Rahim ullah";
    // student rahim(5,'A',11,name);
    student* rahim= new student(5,'A',11,name);
    (*rahim).roll=55;

    // int *a=new int;
    // *a=10;
    // cout<<*a<<endl;

    // cout<<(*rahim).name<<endl;
    // cout<<(*rahim).roll<<endl;
    // cout<<(*rahim).section<<endl;
    // cout<<(*rahim).cls<<endl;

    // shortcut upay 
    // arrow sign 
    // (*rahim). = rahim-> 
    cout<<rahim->name<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->section<<endl;
    cout<<rahim->cls<<endl;

    //delete an object
    delete rahim;

     cout<<rahim->name<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->section<<endl;
    cout<<rahim->cls<<endl;


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};
int main()
{
    student rahim;
    rahim.roll=9;
    rahim.cls=8;
    rahim.section='A';
    char nm[100]="Rahim Uddin";
    strcpy(rahim.name,nm);

    student ronaldo;
    ronaldo.roll=1;
    ronaldo.cls=10;
    ronaldo.section='C';
    char nm2[100]="Cristiano Roanldo";
    strcpy(ronaldo.name,nm2);

    cout<<ronaldo.roll<<endl;
    return 0;
}
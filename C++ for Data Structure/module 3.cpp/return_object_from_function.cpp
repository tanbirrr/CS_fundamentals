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
student fun()
{
    char name[100]="Ronaldo";
    student r(29,'c',7,name);
    return r;
}
int main()
{
    student rahim=fun();

    cout<<rahim.name<<endl;
    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.cls<<endl;
    return 0;
}
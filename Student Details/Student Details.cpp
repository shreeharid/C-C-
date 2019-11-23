#include<iostream>
using namespace std;
int j=0;
class studentinfo{
private :
    string name;
    int usn;
    int m1,m2,m3;
    float total,percentage;

public :
    studentinfo()
    {
        j++;
        cout<<"Enter the Information of student "<<j<<endl;
        cout<<"Enter the student name : "<<endl;
        cin>>name;
        cout<<"Enter the usn of the student : "<<endl;
        cin>>usn;
        cout<<"Enter the marks of the  three subjects : "<<endl;
        cin>>m1>>m2>>m3;
    }
    void calculate()
    {
        total=m1+m2+m3;
        percentage=(total/3);
    }
    void showdata()
    {
        cout<<"||||||||||||||||||||||||||||||||||||\n";
        cout<<"\tThe student name is : "<<name<<endl;
        cout<<"\tThe student usn is : "<<usn<<endl;
        cout<<"\tThe student marks for\n\tm1 : "<<m1<<"\n\tm2 is :"<<m2<<"\n\tm3 is :"<<m3<<endl;
        cout<<"\tThe Total is : "<<total<<endl<<"The percentage is :"<<percentage<<"%"<<endl;
        cout<<"||||||||||||||||||||||||||||||||||||\n";
    }
}; //class studentinfo defined to getinfo and calculate total and showdata
int main()
{
    int i,n;
    cout<<"Enter the number of students :"<<endl;
    cin>>n;
    studentinfo s[n]; //array of objects of class student
    for(i=0;i<n;i++)
    {
        s[i].calculate(); //call calculate()
        s[i].showdata(); //call showdata()
    }
}

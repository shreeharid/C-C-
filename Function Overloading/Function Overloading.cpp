#include<iostream>
using namespace std;
const float pi=3.14; //constant defined for pi
class area{
    float ar1,ar2,ar3;
public :
    void are(float r)
    {
        ar1=(pi*r*r);
    }
    void are(float n,float a,float b)
    {
        ar2=(n*a*b);
    }
    void are(float lr,float br)
    {
        ar3=(lr*br);
    }
    void display()
    {
        cout<<"Area of circle : "<<ar1<<endl;
        cout<<"Area of rectangle  : "<<ar3<<endl;
        cout<<"Area of triangle  : "<<ar2<<endl;
    }
}; //class area defined with fuction are with different number of arguments
int main()
{
    float lr,br,c,b,r;
    area a; //object instantiated of class area
    cout<<"Enter the radius : "<<endl;
    cin>>r;
    cout<<"Enter the length and breadth :"<<endl;
    cin>>lr>>br;
    cout<<"Enter the height and base :"<<endl;
    cin>>c>>b;
    a.are(r);
    a.are(0.5,c,b);
    a.are(lr,br);
    a.display(); //displaying answer
}

#include<iostream>
using namespace std;
class student
{
int roll;
public:
int setRoll(int x)
{
roll=x;
}
int getRoll()
{
cout<<"Roll Number: "<<roll<<endl;
}
};
class Test : public student
{
protected:
float t1,t2;
public:
int setMarks(float a,float b)
{
t1=a;
t2=b;
}
int getMarks()
{
cout<<"Marks obtained int test1: "<<t1<<endl;
cout<<"Marks obtained int test2: "<<t2<<endl;
}};
class Sports
{
protected:
    float sm;
public:
    int setSptsMarks(int y)
    {
        sm=y;
    }
    int getSptsMarks()
    {
        cout<<"Sports score: "<<sm<<endl;
    }
};
class Result:public Test,public Sports
{
    float total;
public:
    int display();
};
int Result::display()
{
    total=t1+t2+sm;
    getRoll();
    getSptsMarks();
    cout<<"Total Score: "<<total;
}
int main()
{
    Result r1;
    r1.setRoll(101);
    r1.setMarks(78.65,88.45);
    r1.setSptsMarks(65);
    r1.getMarks();
    r1.display();
}

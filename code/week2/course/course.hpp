/*main.hpp*/
/*main.hpp*/
/*header file for main.cpp*/
#include<iostream>
using namespace std;

class Course
{
    int grade[5];
    int id;
public:
    Course();
    void setId(int idin);
    void setGrade(int index, int gradeIn);
    int getId();
    int getGrade(int index);
    int getAvg();
    void printInfo();
};

Course::Course()
{
    for(int i=0;i<5;i++)
    {
        grade[i] = 0;
    }
    id = 0;
}

void Course::setId(int idin)
{
    id = idin;
}
void Course::setGrade(int index, int gradeIn)
{
    grade[index] = gradeIn;
}
int  Course::getId()
{
    return id;
}
int  Course::getGrade(int index)
{
    return grade[index];
}
int  Course::getAvg()
{
    int sum = 0;
    for(int i=0; i<5;i++)
        sum = sum + grade[i];
    return sum/5.0;
}
void Course::printInfo()
{
    cout<<id<<"\n";
    for(int i=0; i<5;i++)
        cout<<grade[i]<<" ";
}
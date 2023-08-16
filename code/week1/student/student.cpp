#include <iostream>

using namespace std;

class Student
{
        string name;
        int id;
        int gradDate;
    
    public:
        void setName(string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
        string getName();
        int getId();
        int getGradDate();
};

int main(){
    Student truong;
    truong.setName("truongtop14");
    truong.setId(1712195);
    truong.setGradDate(30);

    cout<<"Name = "<<truong.getName()<<endl;
    cout<<"Id = "<<truong.getId()<<endl;
    cout<<"Grad date = "<<truong.getGradDate()<<endl;

    return 0;
}

void Student::setName(string nameIn)
{
     name = nameIn;
}

void Student::setId(int idIn)
{
     id = idIn;
}

void Student::setGradDate(int gradDateIn)
{
     gradDate = gradDateIn;
}

string Student::getName()
{
     return name;
}

int Student::getId()
{
     return id; 
}

int Student::getGradDate()
{
     return gradDate;
}
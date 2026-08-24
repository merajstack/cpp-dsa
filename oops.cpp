#include <iostream>
#include <string>
using namespace std;


class Teacher{
    //properties // attrbutes
private:
double salary;
public:    
string name ;
string dept;
string subject;

//setter
void sets(double s){
    salary =s;
}
//getter
double gets(){
    return salary;
}
//methods/member functions
void changeDept(string newDept){
    dept = newDept;
}
};



int main (){
    Teacher t1;
    t1.name = "Meraj";
    t1.dept = "C++";
    t1.subject = "Prog";
    t1.sets(1000);
    
    cout<<t1.name<<endl;
// getting private value
    cout<<t1.gets()<<endl;
        return 0;
}
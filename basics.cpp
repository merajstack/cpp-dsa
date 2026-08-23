#include <iostream>
using namespace std;
int main(){
    // Declaring Datatype
    int a,b,sum,diff,prod,divs;
    string name;
    cout<<"Input Value of A: ";
    cin>>a;
    cout<<"Input Value of B:";
    cin>>b;
    cout<<"Enter Maths Operator: ";
    cin>>name;
    sum = a+b;
    diff = a-b;
    prod = a*b;
    divs = a/b;
    // Conditional Statements
    if (name == "sum"){
        cout << sum;
    }
    else if (name == "diff"){
        cout<<diff;
    }
    else if (name == "prod"){
        cout<<prod;
    }
    else if (name == "divs"){
        cout<<divs;
    }
    else{
        cout<<"Invalid Input"<<endl;
        cout<<"Please Input values in sum,diff,prod,divs";
    }
    // Switch Case 
    
}


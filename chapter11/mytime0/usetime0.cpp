//usetime0.cpp -- using the first draft of Time class
//compile usetime0.cpp and mytime0.cpp together
#include<iostream>
#include"mytime0.h"

int main(){
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2,40);
    Time fixing(5,55);
    Time total;

    cout<<"planning time = ";
    planning.Show();
    cout<<endl;

    cout<<"coding time = ";
    coding.Show();
    cout<<endl;

    cout<<"fixing time = ";
    fixing.Show();
    cout<<endl;

    //total = coding.Sum(fixing);
    total = coding + fixing;
    //operator notation
    //cout<<"coding.Sum(fixing) = ";
    cout<<"coding + fixing = ";
    total.Show();
    cout<<endl;

    Time morefixing(3,28);
    cout<<"more fixing time = ";
    morefixing.Show();
    cout<<endl;
    total = morefixing.operator+(total);
    //function notation
    cout<<"morefixing.operator+(total) = ";
    total.Show();
    cout<<endl;

    return 0;
}

#include<iostream>
#include<stdbool.h>
using namespace std;

bool checkIsLeapYear(int year){
    if(year % 400 == 0){
        return true;
    }
    if(year % 100 == 0){
        return false;
    }
    if(year % 4 == 0){
        return true;
    }
    return false;
}

int main()
{
    int year;
    cin>>year;
    if(checkIsLeapYear(year)){
        cout<<year<<" this year is leap year"<<endl;
    } else {
        cout<<year<<" this year is not a leap year"<<endl;
    }
}

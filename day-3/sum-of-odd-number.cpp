#include<iostream>
using namespace std;
class Odd{
public:
    int sum_of_Odd_number(){
        int n;
        int total =0;
        cin>>n;
        for (int i= 1; i <= n; i++){
            if(i%2 != 0){
               total = total+i;
            }

        }
        return total;
    }
};

int main(){
    Odd obj;
    int xyz = obj.sum_of_Odd_number();
    cout<<xyz<<endl;
}

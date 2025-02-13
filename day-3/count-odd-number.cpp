#include<iostream>
using namespace std;

class Odd{
public:
    int checkTotalOdd()
    {
        int n, total_odd = 0;
        cin>>n;
        for(int i = 1; i <= n; i++){
            if(i%2 != 0){
                total_odd += 1;
            }
        }
        return total_odd;
    }
};

int main(){
    Odd obj;
    int n_odd = obj.checkTotalOdd();
    cout<<"Total numbers of odd: "<<n_odd<<endl;
}

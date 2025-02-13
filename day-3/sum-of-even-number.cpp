#include<iostream>
using namespace std;
class Even{
public:
    int sum_of_Even_number(){
        int n;
        int total =0;
        cin>>n;
        for (int i= 1; i <= n; i++){
            if(i%2== 0){
               total = total+i;
            }

        }
        return total;
    }
};

int main(){
    Even obj;
    int xyz = obj.sum_of_Even_number();
    cout<<xyz<<endl;
}

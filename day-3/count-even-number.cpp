#include<iostream>
using namespace std;
class Even{
public:
    int checkEvennumber(){
        int n, total_even_number =0;
        cin>>n;
        for(int i=1; i<=n; i++){
            if(i%2 ==0){
                total_even_number += 1;

            }
        }
        return total_even_number;
    }
};

int main(){
    Even obj;
    int n_obj = obj.checkEvennumber();
    cout<<"Total number of even: "<<n_obj<<endl;
}

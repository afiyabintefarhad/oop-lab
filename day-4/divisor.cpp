#include<iostream>
using namespace std;
class prime{
public:
    int n;
    int isprime(){
        for (int i = 2; i <= n/2; i++){
            if (n%i == 0){
                cout<<i<<endl;
            }
        }
    }
};
int main(){
    prime obj;
    int x;
    cin>>x;
    obj.n = x;
    obj.isprime();
}

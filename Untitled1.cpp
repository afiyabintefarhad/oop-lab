#include<iostream>
#include<math.h>
using namespace std;
class Number{
public:
    int Prime()
    {
        int n, check=1;
        cin>>n;
        for(int i = 2; i <= sqrt(n); i++){
            if(n%i == 0){
                check = 0;
                break;

            }
        }
        return check;
    }
};
int main()
{
    Number obj;
    if(obj.Prime()==1){
        cout<<"Prime Number"<<endl;
    } else {
        cout<<"Not a Prime Number"<<endl;
    }
}

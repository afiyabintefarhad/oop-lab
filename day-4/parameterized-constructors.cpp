#include<iostream>
using namespace std;
class Point{
private:
    int x, y;
public:
    Point(int xl, int yl){
        x = xl;
        y = yl;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
int main()
{
    Point obj(10, 15);
    cout<<"1st Value = "<<obj.getX()<<endl;
    cout<<"2nd Value = "<<obj.getY()<<endl;

    return 0;
}

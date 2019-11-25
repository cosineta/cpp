#include <iostream>
using namespace std;
class CTyre  //轮胎类
{
private:
    int radius;  //半径
    int width;  //宽度
public:
    CTyre(int r, int w) : radius(r), width(w) {  //构造函数
        cout<<"CTyre contructor"<<endl;
    }
    ~CTyre(){                                //析构函数
        cout<<"CTyre contructor"<<endl;
    }
};
class CEngine  //引擎类
{
    public:
        CEngine(){
        cout<<"CEngine contructor"<<endl;
    }
    ~CEngine(){
        cout<<"CEngine contructor"<<endl;
    }
};
class CCar {  //汽车类(封闭类)
private:
    int price;  //价格
    CTyre tyre;
    CEngine engine;
public:
    CCar(int p, int tr, int tw);
    CCar(){
        cout<<"CCar contructor"<<endl;
    }
    ~CCar(){
        cout<<"CCar contructor"<<endl;
    }
};
CCar::CCar(int p, int tr, int tw) : price(p), tyre(tr, tw)
{
};
int main()
{
    CCar car;
    CCar car(20000, 17, 225);
    return 0;
}

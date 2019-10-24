#include <iostream>
#include <typeinfo>
using namespace std;
int main(void)
{
    // sample 1 
    cout << typeid(1.1f).name() << endl;  
    // sample 2 
    class Base1 {}; 
    class Derive1:public Base1 {}; 
    Derive1 d1; 
    Base1& b1 = d1; 
    cout << typeid(b1).name() << endl; // 输出"class Base1",因为Derive1和Base1之间没有多态性 
    // sample 3, 编译时需要加参数 /GR 
    class Base2 {  
        virtual void fun( void ) {} 
    }; 
    class Derive2:public Base2 { }; 
    Derive2 d2; 
    Base2& b2 = d2; 
    cout << typeid(b2).name() << endl; // 输出"class Derive2",因为Derive1和Base1之间有了多态性 
    // sample 4 
    class Derive22:public Base2 { }; // 指针强制转化失败后可以比较指针是否为零，而引用却没办法，所以引用制转化失败后抛出异常 
    Derive2* pb1 = dynamic_cast<Derive2*>(&b2); 
    cout << boolalpha << (0!=pb1) << endl; // 输出"true",因为b2本身确实是指向Derive2 
    Derive22* pb2 = dynamic_cast<Derive22*>(&b2);
    cout << boolalpha << (0!=pb2) << endl; // 输出"false",因为b2本身不是指向Derive22 
    try {  
        Derive2& rb1 = dynamic_cast<Derive2&>(b2);  
        cout << "true" << endl; 
    }catch( bad_cast ) { 
    cout << "false" << endl; } 
    try{  Derive22& rb2 = dynamic_cast<Derive22&>(b2);  cout << "true" << endl; } catch( ... ) // 应该是 bad_cast,但不知道为什么在VC++6.0中却不行？因为VC++6.0默认状态是禁用 RTTI 的，启用方式：project－>setting－>c/c++－>category->c++ Language 下面第二个复选框选中。 
    {  cout << "false" << endl; } return 0;}

#include <iostream>
class A {
public:
    int val;
    A(int v): val(v) {  }
    A& GetObj() { return *this; }
};

int main()
{
    A a(1);
    std::cout << a.val << std::endl;
    a.GetObj() = 2;
    std::cout << a.val << std::endl;
    A &r = a;
    r = 5;
    std::cout << a.val << std::endl;
    return 0;
}

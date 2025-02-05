#include <iostream>
using namespace std;

//静态成员

class Person{
public:
    //1.所有对象都共享同一份数据
    //2.编译阶段就分配了内存
    //3.类内声明,类外初始化操作
    static int m_A;

    //静态成员变量是有访问权限的

private:
    static int m_B;
};

int Person::m_A=100;
int Person::m_B=200;

void test01(){
    Person p;
    cout<<p.m_A<<endl;
    Person p2;
    p2.m_A=200;
    cout<<p.m_A<<endl;
    //cout<<p.m_B<<endl;
}

void test02(){
    //静态成员变量 不属于某个对象上,所有对象都共享该静态成员变量
    //因此静态成员变量有两种访问方式
    //1.通过对象访问
    //Person p;
    //cout<<p.m_A<<endl;
    //2.通过类名访问
    cout<<Person::m_A<<endl;
}

int main(){
    //test01();
    test02();
    return 0;
}
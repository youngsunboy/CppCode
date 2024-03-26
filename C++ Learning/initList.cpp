#include <iostream>
using namespace std;

//初始化列表
class Person{
public:
    int m_A;
    int m_B;
    int m_C;

    //传统初始化操作
    //Person(int a,int b,int c){
    //    m_A=a;
    //    m_B=b;
    //    m_C=c;
    //}

    //初始化列表初始化属性 注意":"
    Person(int a,int b,int c):m_A(a),m_B(b),m_C(c){

    }
};

void test01(){
    Person p(2004,58,165);
    cout<<"m_A = "<<p.m_A<<endl;
    cout<<"m_B = "<<p.m_B<<endl;
    cout<<"m_C = "<<p.m_C<<endl;
}
int main(){
    test01();
    return 0;
}
 #include<iostream>
 using namespace std;
 
 class A{
    public:
    void func{
        cout<<"hello world"<<endl;
    }
 };

 class B : public A{

 };

 int main(){
    B b;
    b.func();
 }
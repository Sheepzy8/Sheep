#include<iostream>
#include<string>

using namespace std;
int addtwonums(int a, int b)
{
    return a + b;
}
void printfsting(string &s)
{
    cout << s << endl;
}
int main(){
    cout << "hello world!" << endl;
    
    int a = 1;
    int b = 2;
    string s = "yangzhiyong is a smart boy, hahaha!";

    printfsting(s);
    cout << addtwonums(a, b);
    cout << "yangzhiyong i love you!" << endl;
}

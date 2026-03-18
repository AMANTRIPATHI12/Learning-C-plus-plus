#include <iostream>
#include <typeinfo>
#include <string>
#include <cxxabi.h>

using namespace std;
int main(){
    auto a = 2.2L;
    int b = 4;

    // cout << abi::__cxa_demangle(typeid(a).name(),0,0,nullptr);
    cout << typeid(a).name();
    return 0;
}

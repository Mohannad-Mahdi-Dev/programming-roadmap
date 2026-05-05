#include<iostream>
#include <Windows.h> // Required for SetConsoleOutputCP
#include <string>
using namespace std;


int main(){
    
SetConsoleOutputCP(65001);
    string name = "  مهند مهدي ";
    cout << name <<endl;

    return 0;
}
#include <iostream>
using namespace std ;

void printTableHeader() {

    
    cout <<"\n\n\t\t\t Multiplication Table From 1 to 10 \n\n"<<endl;


    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    
    cout << "\n___________________________________________________________________________________\n";

}

void PrintMultiplication() 
{
    printTableHeader();

    for(int i = 1 ; i <= 10 ; i++)
    {
        cout << i << " | " <<"\t";

    for(int x = 1 ; x <= 10 ; x++ )
    {
        cout << i * x << "\t";
    }
        cout <<endl;
    }

}
int main() {

    PrintMultiplication();
    
}

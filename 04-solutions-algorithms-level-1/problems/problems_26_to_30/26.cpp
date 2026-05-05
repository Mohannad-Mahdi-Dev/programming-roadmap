/*
    Print Numbers From 1 to N ;
*/
#include <iostream>
using namespace std ;

int ReadNumbers()
{
    int Number ;
    cout << "Enter The Number 1 to N ? "<<endl;
    cin >> Number ;
    return Number; 
}

void PrintRangeFrom1_to_N_UsingFor(int Number)
{
    cout << "Range pronted using For Statement:\n";
    for(int i = 1 ; i <= Number ; i++){

        cout << i <<endl;
    }
}

void PrintRangeFrom1_to_N_UsingWhile(int Number)
{
    int counter = 1;
    cout <<"Range pronted using while Statement:\n";
    while(counter <= Number){

        cout << counter <<endl;
        counter++;
    }
}

void PrintRangeFrom1_to_N_UsingDoWhile(int Number) {
    int counter = 1;
    cout << "\nRange printed using Do..While Statement:\n";
    if (Number < 1) return; 
    
    do {
        cout << counter << endl;
        counter++;
    } while (counter <= Number);
}
void PrintAllFunction(int Number)
{
    PrintRangeFrom1_to_N_UsingFor(Number);
    PrintRangeFrom1_to_N_UsingWhile(Number);
    PrintRangeFrom1_to_N_UsingDoWhile(Number);

}

int main(){
    
    int N = ReadNumbers();

    // PrintRangeFrom1_to_N_UsingFor(N); // Good used
    // PrintRangeFrom1_to_N_Using_While(N); 
    // PrintRangeFrom1_to_N_UsingDoWhile(N);

    PrintAllFunction(N);
    return 0;
}
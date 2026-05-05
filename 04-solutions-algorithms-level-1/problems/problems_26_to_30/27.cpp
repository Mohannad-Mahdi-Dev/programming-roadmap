/*
  PRINT NUMBER FROM N TO 1  
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

void PrintRangeFromNto_1_UsingFor(int Number)
{
    cout << "Range pronted using For Statement:\n";
    for(int i = Number ; i >= 1 ; i--){
        
        cout << i <<endl;
    }
}

void PrintRangeFromNto_1_UsingWhile(int Number)
{
    int counter = Number;
    cout <<"Range pronted using while Statement:\n";
    while(counter >= 1){
        
        cout << counter <<endl;
        counter--;

    }
}

void PrintRangeFromNto_1_UsingDoWhile(int Number) {

    int counter = Number;
    cout << "\nRange printed using Do..While Statement:\n";
    // if (counter > 1) return; 
    
    do {
        cout << counter << endl;
        counter--;
    } while (counter >= 1);
}
void PrintAllFunction(int Number)
{
    PrintRangeFromNto_1_UsingFor(Number);
    PrintRangeFromNto_1_UsingWhile(Number);
    PrintRangeFromNto_1_UsingDoWhile(Number);

}

int main(){
    
    int N = ReadNumbers();

//    PrintRangeFromNto_1_UsingFor(N);
//     PrintRangeFromNto_1_UsingWhile(N);
//     PrintRangeFromNto_1_UsingDoWhile(N);
    PrintAllFunction(N);
    return 0;
}
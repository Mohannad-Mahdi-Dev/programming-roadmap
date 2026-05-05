// Solve the following problems of 
// Write Programs to do the following :
// #33, #34, #36, #44, #45.
#include<iostream>
using namespace std; 


// #33 :
/*
    Problem:
    Write a program to ask the user to enter:
    • Grade
    Then print the grade as follows:
    • 90 – 100 Print A
    • 80 – 89 Print B
    • 70 – 79 Print C
    • 60 – 69 Print D
    • 50 – 59 Print E
    • Otherwise Print F
    Example Inputs:
    95
    Outputs
    A
*/
// $34 :
/*
    Problem: emportant 
    Write a program to ask the user to enter:
    • TotalSales
    The commission is calculated as one percentage * the total sales amount, all you need is to decide which percentage
    to use of the following:
    • > 1000,000  Percentage is 1%
    • > 500K to 1M  Percentage is 2%    
    • > 100K – 500K  Percentage is 3%
    • > 50K to 100K  Percentage is 5%
    • Otherwise  Percentage is 0%
    Example Inputs:
    110,000
    Outputs
    3,300
*/
// #36 :
/*
    Problem:
    Write a program to ask the user to enter:
    • Number1
    • Number 2
    • OperationType
    Then perform the calculation according to the Operation Type as follows:
    • “+” : add the two numbers.
    • “-” : Subtract the two numbers.
    • “*” : Multiply the two numbers.
    • “/” : Divide the two numbers.
    Example Inputs:
    10
    20
    *
    Outputs
    200
*/
// #44
/*
    Problem:
    Write a program to ask the user to enter:
    • Day
    Then print the day as follows:
    • 1 Print Sunday
    • 2 Print Monday
    • 3 Print Tuesday
    • 4 Print Wednesday
    • 5 Print Thursday
    • 6 Print Friday
    • 7 Print Saturday
    • Otherwise print “Wrong Day” and ask the use to enter the day again.
    Example Inputs:
    6
    Outputs
    Its Friday
*/
// #45
/*
    Problem:
    Write a program to ask the user to enter:
    • Month
    Then print the day as follows:
    • 1 Print January
    • 2 Print February
    • 3 Print March
    • 4 Print April
    • 5 Print May
    • 6 Print June
    • 7 Print July
    • 8 Print August
    • 9 Print September
    • 10 Print October
    • 11 Print November
    • 12 December
    • Otherwise print “Wrong Month” and ask the use to enter the Month again.
    Example Inputs:
    11
    Outputs
    November
*/

int main(){

//Question 33

    int grades ;
    
    cout << "Plase Enter The Grades : " <<endl;
    cin >> grades;

    if(grades >= 90 && grades <=100)
    {
        cout << " A " <<endl;
    }else if(grades >= 80 && grades <90)
    {
        cout << " B " <<endl;
    }else if (grades >= 70 && grades <80)
    {
        cout << " C " <<endl;
    }else if (grades >= 60 && grades <70)
    {
        cout << " D " <<endl;
    }else if (grades >= 50 && grades <59)
    {
        cout << " E " <<endl;
    }else 
    {
        cout << " F " <<endl;
    }

    //Question 34

    double TotalSale , Percentage;

    cout << "enter The TotalSale : " <<"\n";
    cin >> TotalSale ;

    if(TotalSale >= 1000000)
    {
        Percentage = 0.01;
    }else if(TotalSale >= 500000)
    {
        Percentage = 0.02;
    }else if(TotalSale >= 100000)
    {
        Percentage = 0.03;
    }else if(TotalSale >= 50000)
    {
        Percentage = 0.04;
    }else {
        
        Percentage = 0.0;
    }
    
    double TotalComission = TotalSale * Percentage;
    cout << " Total Comission = " << TotalComission <<"\n";

    return 0;


    
    // Question 36

    int num1 , num2 ;

    cout << "Enter The number 1: " <<endl;
    cin >> num1;
    
    cout << "Enter The number 2: " <<endl;
    cin >> num2;

    cout << "*******************************\n";
    cout << "choose the TypeOperation!\n";
    cout << "+"<< " add the two numbers."<<"\n";
    cout << "-"<< " Subtract the two numbers."<<"\n";
    cout << "*"<< " Multiply the two numbers."<<"\n";
    cout << "/"<< " Divide the two numbers."<<"\n";
    cout << "*******************************\n";
    
    string OperationType;
    cout << "Enter The Operation Type : \n";
    cin >> OperationType;

    // int Adition = num1 + num2;

    if(OperationType == "+" )
    {
        cout <<  num1 + num2<<"\n";
    }else if(OperationType == "-" )
    {
        cout <<  num1 - num2<<"\n";
    }else if(OperationType == "*" )
    {
        cout <<  num1 * num2<<"\n";
    }else if(OperationType == "/" )
    {
        cout <<  num1 / num2<<"\n";
    }
    else 
    {
        cout << "No Type Operation!\n";
    }
    
    // Question 44 

    int day ;

    cout << "Plase Enter The Day number! " << endl;
    cin >> day ;

    if(day == 1){
        cout << " Sunday \n";
    }else if (day == 2){
        cout << "Monday\n";
    }else if (day == 3){
        cout << "Tuesday\n";
    }else if (day == 4){
        cout << "Wednesday\n";
    }else if (day == 5){
        cout << "Thursday\n";
    }else if (day == 6){
        cout << "Friday\n";
    }else if (day == 7){
        cout << "Saturday\n";
    }else {
        cout << "Wrong Day!" <<"\n";
    }

    // Question 45

    int month ;

    cout << "Plase, Enter The Month Number : \n";
    cin >> month;

    if(month == 1){
        cout << "January\n";
    }else if(month == 2){
        cout << "February\n";
    }else if(month == 3){
        cout << "March\n";
    }else if(month == 4){
        cout << "April\n";
    }else if(month == 5){
        cout << "may\n";
    }else if(month == 6){
        cout << "June\n";
    }else if(month == 7){
        cout << "July\n";
    }else if(month == 8){
        cout << "August\n";
    }else if(month == 9){
        cout << "September\n";
    }else if(month == 10){
        cout << "October\n";
    }else if(month == 11){
        cout << "November\n";
    }else if(month == 12){
        cout << "December\n";
    }else {
        cout << "Wrong Month!" <<"\n";
    }
}
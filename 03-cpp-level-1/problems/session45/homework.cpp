// Solve the following problems of 
// Write Programs to do the following :
// #33, #34 => no switch use if if else... , #36, #44, #45 =>use switch.

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

    // devlopment code 

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
    
    char OperationType;
    cout << "Enter The Operation Type : \n";
    cin >> OperationType;

    // if(OperationType == "+" )
    // {
    //     cout <<  num1 + num2<<"\n";
    // }else if(OperationType == "-" )
    // {
    //     cout <<  num1 - num2<<"\n";
    // }else if(OperationType == "*" )
    // {
    //     cout <<  num1 * num2<<"\n";
    // }else if(OperationType == "/" )
    // {
    //     cout <<  num1 / num2<<"\n";
    // }
    // else 
    // {
    //     cout << "No Type Operation!\n";
    // }

    // devlopment code 
    switch (OperationType)
    {
    case  '+':
        cout << "Result: " << num1 + num2 << "\n";
        break;
    
    case  '-':
        cout << "Result: " << num1 - num2 << "\n";
        break;
    
    case  '*':
        cout << "Result: " << num1 * num2 << "\n";
        break;
    
    case  '/':
        if(num2 != 0){
            cout << "Result: " << num1 / num2 << "\n";
        }else {
            cout << "Error : Divesion by Zero! \n";
        }
        break;
    
    default:
        cout << "Invalid Operation Type!\n";
        break;
    }
    
    // Question 44 

    int day ;

    cout << "Plase Enter The Day number! " << endl;
    cin >> day ;

    // if(day == 1){
    //     cout << " Sunday \n";
    // }else if (day == 2){
    //     cout << "Monday\n";
    // }else if (day == 3){
    //     cout << "Tuesday\n";
    // }else if (day == 4){
    //     cout << "Wednesday\n";
    // }else if (day == 5){
    //     cout << "Thursday\n";
    // }else if (day == 6){
    //     cout << "Friday\n";
    // }else if (day == 7){
    //     cout << "Saturday\n";
    // }else {
    //     cout << "Wrong Day!" <<"\n";
    // }

    switch(day){
        case 1 :
        cout << "Sunday\n";
        break;

        case 2 :
        cout << "monday\n";
        break;

        case 3 :
        cout << "Tuesday\n";
        break;

        case 4 :
        cout << "wednesday\n";
        break;

        case 5 :
        cout << "Thrusday\n";
        break;

        case 6 :
        cout << "Friday\n";
        break;

        case 7 :
        cout << "Saturday\n";
        break;

        default : 
        cout << "No from the Months!\n";
    }

    // Question 45

    int month ;

    cout << "Plase, Enter The Month Number : \n";
    cin >> month;

    // if(month == 1){
    //     cout << "January\n";
    // }else if(month == 2){
    //     cout << "February\n";
    // }else if(month == 3){
    //     cout << "March\n";
    // }else if(month == 4){
    //     cout << "April\n";
    // }else if(month == 5){
    //     cout << "may\n";
    // }else if(month == 6){
    //     cout << "June\n";
    // }else if(month == 7){
    //     cout << "July\n";
    // }else if(month == 8){
    //     cout << "August\n";
    // }else if(month == 9){
    //     cout << "September\n";
    // }else if(month == 10){
    //     cout << "October\n";
    // }else if(month == 11){
    //     cout << "November\n";
    // }else if(month == 12){
    //     cout << "December\n";
    // }else {
    //     cout << "Wrong Month!" <<"\n";
    // }

    switch(month){
        case 1 : 
            cout << "January\n";
        break;
        
        case 2 :
            cout << "February\n";
        break;
        
        case 3 :
            cout << "March\n";
        break;
        
        case 4 :
            cout << "Aprial\n";
        break;
        
        case 5 :
            cout << "May\n";
        break;
        
        case 6 :
            cout << "June\n";
        break;
        
        case 7 :
            cout << "July\n";
        break;
        
        case 8 :
            cout << "Augus\n";
        break;
        
        case 9 :
            cout << "September\n";
        break;
        
        case 10 :
            cout << "October\n";
        break;
        
        case 11 :
            cout << "November\n";
        break;
        
        case 12 :
            cout << "December\n";
        break;

        default :
            cout << " Wrong Month!\n";
    }
}
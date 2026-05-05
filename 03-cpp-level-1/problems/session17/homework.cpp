// Are the Following valid variable names and why ?
//Question 1;
/*
    Age = true
    My-Age = false
    My_Age = true
    _Age = true
    2X = false
    My Name = false
    MyName = true
    #Name = false
    $Name = false
    N@me = false
    int = false 
    float = false 
*/
// Write programs to do the following:
//Question 2;
// *****************************************
/*
    Name : Mohannad mahdi.
    Age : 20 years.
    City : sana'a
    Country : Yemen.
    Monthly Salary : 10000.
    Yearly Salary : 12000.
    Gender: Male.
    Married : 1
*/
//*******************************************

// Code...
  #include <iostream>
  using namespace std;
  int main() {
//Question 1
    string Name = "Mohannad mahdi";
    int Age = 20;
    string City = "sana'a";
    string Country = "Yemen";
    float Monthly_Salary = 10000; // salary float 
    // double Yearly_Salary = 12000;
    char Gender =  'M';
    bool  Married = true;
    float Yearly_Salary = Monthly_Salary * 12 ;

    cout << "**********************************" <<endl ;
    cout << "Name : " << Name << endl ;
    cout << " Age : " <<  Age << " Years. " <<  endl ;
    cout << "City : " <<  City << endl ;
    cout << "Country : " << Country << endl ;
    cout << "Monthly Salary : " << Monthly_Salary << endl ;
    cout << "Yearly Salary : " <<  Monthly_Salary * 12 << endl ;
    cout << "Gender : " <<  Gender << endl ;
    cout << "Married : " << Married << endl ; 
    cout << "**********************************" <<endl ;

//Question 2
    int num1 = 20 , num2 = 30 , num3 = 10 ;
    // int num2 = 30 ;
    // int num3 = 10 ;
    cout << num1 << " + " << endl ;
    cout << num2 << " + " << endl ;
    cout << num3 << endl ;
    cout << "--------------------------"<< endl ;
    // int sum = num1 + num2 + num3 ; 
    // cout << "Total = " << sum << endl ;
    cout << num1 + num2 + num3 << endl;

//Question 3

    int MyAge = 25;
    int YourAgeAfterYears = MyAge + 5 ;
    cout<< "After " << 5 << "Years you be " << MyAge + 5 << " Years old." << endl ;
    cout<< "After 5 Years you be " << MyAge + 5 << " Years old." << endl ;
    cout<< "After 5 Years you be " << YourAgeAfterYears<< " Years old." << endl ;
    
}
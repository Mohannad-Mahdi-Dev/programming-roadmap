#include <iostream>
using namespace std;


enum brands {toyota, BMW , landcrosar, yars};
enum models {x4 , x5 , x6 , x7 , x8 };
enum colors {red , green , yello, with};


// this is so that we can print items in text form using anums

// string brandsToString(brands b){
//     string arr[] = {"Toyota", "BMW", "Land Cruiser", "Yaris"};
//     return arr[b];
// }

// or 

string getBrandName(brands brand) {
    switch (brand) {
        case brands::toyota:     return "Toyota"; 
        break;
        case brands::BMW:        return "BMW";
        break;
        case brands::landcrosar: return "Land Cruiser";
        break;
        case brands::yars:       return "Yaris";
        default:                 return "Unknown";
    }
}

struct stAddress {
    string street ;
    int zipcode ;
    int postbox;

};


struct stWoners{
    string name ;
    string email ;
    int phone ;
    stAddress Address;
};

struct Car {


    brands  brand ;
    models  model ;
    colors  color ;
    
    stWoners  woner;

};
int main(){

    Car car1 ;
    car1.brand = brands::toyota;
    car1.color = colors::red;
    car1.model = models::x6 ;
    car1.woner.name = "mohannad mahdi";
    car1.woner.phone = 776893799;
    car1.woner.email = "mohannadmahdi.dev@gmail.com";
    car1.woner.Address.street = "24";
    car1.woner.Address.zipcode = 11001;

    cout<< "the brand car is  "<< getBrandName(car1.brand)<<endl;
    cout << "the model car is "<< car1.model<<endl;
    cout << "the color car is "<< car1.color<<endl;
    cout << "the name woner the car is "<< car1.woner.name <<endl;
    cout << "the email woner the car is "<< car1.woner.email <<endl;
    cout << "the phone woner the car is "<< car1.woner.phone <<endl;


 
}
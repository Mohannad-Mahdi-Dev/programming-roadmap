// C++ Comments:
/*
    comments can be used to explain c++ code, and to make it more radable.

    Comments can be Single-lined or Multi-lined.
    
    Single-line Comments:

    single-line comments start with tow forward slashes(//).
    Any text between // and the end of the line is ignored by the compile (will not be executec.)

    Example uses a single-line comment before a line of code: 
    
    // This code will print my name on screen.
    
        cout << "I Live Programming!" <<endl;
        or
        cout << "I Live Programming!" <<endl; // This code will print my name on screen.

    C++ Multi-line Comments 
    Multi-line comments start with /* and ends with */   

    //Example:
    /*The code below will print my name
     on the screen, and it is amazing*/

    //  cout << "Mohannad Mahdi" <<endl;

     /*
        Single-line Or Multi-line Comments?

        For short comments use single-line (//).
        For long comments use Multi-line ().

     */
/**/
///////////////////////////////////////////////////////

#include <iostream>  // For input/output operations (like cout) 
#include <string>    // To use string variables 
#include <thread>    // To use the sleep function
#include <chrono>    // To handle time (milliseconds) 

// To simplify code and avoid writing std:: before every command 
using namespace std;


// =======================================================================
// Example 1: Using /* */ for Documentation Comments
// =======================================================================

/*
 * @brief Calculates the customer's total order price, including tax.
 * @details This function is essential for the billing system. It takes
 * the base price and applies the system's approved tax rate.
 *
 * @param subtotal The subtotal of the order (before tax).
 * @param taxRate  The tax rate (e.g., 0.15 for 15%).
 * @return         The final total amount the customer will pay.
 */
 
double calculateOrderTotal(double subtotal, double taxRate) {
    if (subtotal < 0) {
        return 0; // Subtotal cannot be negative
    }
    double taxAmount = subtotal * taxRate;
    return subtotal + taxAmount;
}



// =======================================================================
// Example 2: Using // to explain the "Why"
// =======================================================================

// In a game engine, we need an update speed of 60 FPS
// 1000 milliseconds / 60 frames = 16.666...
// We use 16 to ensure performance remains smooth
const int FRAME_DELAY_MS = 16;

void mainGameLoop() {
    cout << "--- Starting Game Loop (Example) ---" << endl;
    // ... Game code would go here ...

    // We pause the thread until the next frame
    // This prevents the game from using 100% of the CPU unnecessarily
    // We use modern C++ libraries for sleeping
    std::this_thread::sleep_for(std::chrono::milliseconds(FRAME_DELAY_MS));

    cout << "--- Game Frame Rendered ---" << endl;
}


// =======================================================================
// Example 3: Using // for tags (TODO / FIXME)
// =======================================================================

bool processPayment(string creditCardNumber, double amount) {

    // TODO: Must add a function to validate the card number (Luhn algorithm)
    //       before sending it to the payment gateway.

    cout << "Processing payment of $" << amount << " for card " << creditCardNumber << endl;

    // ... Code to send payment to the bank ...

    // FIXME: The function always returns 'true' even if the payment fails.
    //        This must be fixed to read the actual response from the bank.
    return true;
}


// =======================================================================
// Example 4: Using // to comment out code (Debugging)
// =======================================================================

// We need to define a mock struct for the code to work
struct UserInfo {
    string name;
    string email;
};

// Define a global mock variable (just for this example)
UserInfo userInfo;

void loadUserData(int userID) {
    cout << "Loading user data for: " << userID << endl;

    // database.connect(); // Temporarily commented out to test the UI
    // userInfo = database.getUser(userID); // Temporarily commented out

    // We use mock/dummy data for testing
    userInfo.name = "Test User";
    userInfo.email = "test@example.com";

    cout << "Data loaded (mock): " << userInfo.name << endl;
}


// =======================================================================
// The main function to run the examples
// =======================================================================

int main() {
    // Note: The setlocale(LC_ALL, "Arabic") call was removed
    // as it is not needed for English output.

    cout << "====== Starting Comment Examples ======" << endl;
    cout << "---------------------------------------" << endl;

    // --- Test Example 1 ---
    double total = calculateOrderTotal(100.0, 0.15);
    cout << "\n[Example 1] Total after tax: $" << total << endl;

    // --- Test Example 2 ---
    cout << "\n[Example 2] Starting game loop (one time):" << endl;
    mainGameLoop();

    // --- Test Example 3 ---
    cout << "\n[Example 3] Processing payment:" << endl;
    bool paymentStatus = processPayment("1234-5678-9012-3456", 150.0);
    // Print "true" or "false" instead of 1 or 0
    cout << "Payment status (needs FIXME): " << boolalpha << paymentStatus << endl;

    // --- Test Example 4 ---
    cout << "\n[Example 4] Loading user data:" << endl;
    loadUserData(1001);

    cout << "\n---------------------------------------" << endl;
    cout << "====== Examples Finished. ======" << endl;

    // Pause the screen temporarily to see the results
    // system("pause"); // You can uncomment this line if you want
    
    return 0; // End the program successfully
    
}
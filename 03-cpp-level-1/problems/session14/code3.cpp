
// Differents between  '\\n' vs 'endl' ?

#include <iostream>  // For cout, endl city 
#include <fstream>   // For file writing (ofstream)
#include <chrono>    // For timing the operations (high_resolution_clock)
#include <string>  // casting 

// Use standard namespaces to keep code clean
using std::cout;
using std::endl;
using std::string;
using std::ofstream;


// Define a large number of lines for our performance test
const int LINES_TO_WRITE = 100000; // 100,000 lines

// =======================================================================
// Example 1: Performance Test (The "Why" it matters) 
// =======================================================================

void testPerformance_With_Newline() {
    // 1. Open a file to write to.
    ofstream file("test_newline.txt");
    if (!file.is_open()) {
        cout << " [ERROR] Could not open test_newline.txt" << endl;
        return;
    }

    // 2. Write many lines using '\n'.
    // This is very fast because it only flushes the buffer when it's full
    // or when we manually close the file.
    for (int i = 0; i < LINES_TO_WRITE; ++i) {
        file << "This is line number " << i << ". We are using '\\n'.\n";
    }

    // 3. The file is automatically flushed and closed here.
} 

void testPerformance_With_Endl() {
    // 1. Open a file to write to.
    ofstream file("test_endl.txt");
    if (!file.is_open()) {
        cout << " [ERROR] Could not open test_endl.txt" << endl;
        return;
    }

    // 2. Write many lines using 'endl'.
    // This is VERY SLOW because it forces a buffer flush (an I/O operation)
    // for every single line we write.
    for (int i = 0; i < LINES_TO_WRITE; ++i) {
        file << "This is line number " << i << ". We are using 'endl'." << endl;
    }

    // 3. The file is closed here.
}

// =======================================================================
// Example 2: Reliability Test (Debugging / Logging)
// =======================================================================

void simulateCriticalTask() {
    cout << "--- Starting critical task... ---" << endl;
    
    // Using 'endl' guarantees this log message appears *immediately*.
    // If the program crashed on the next line, we would still see this message.
    cout << "[LOG] Step 1: Validating user credentials..." << endl;
    // ... code for Step 1 ...
    

    // Using '\n' does NOT guarantee the message appears.
    // If the program crashed, this message might still be in the buffer
    // and would be lost forever.
    cout << "[LOG] Step 2: Connecting to database...\n";
    
    // Simulating a critical, unrecoverable error
    cout << "[LOG] Step 3: Critical error! Simulating program crash..." << endl;
    
    // Uncomment the line below to simulate a real crash
    // int* p = nullptr; *p = 10; // This will cause a crash
    
    // NOTE: In a real crash, the "Finished" message below would not print.
    // The 'endl' messages are more likely to be visible in logs than the '\n' ones.
    cout << "--- Critical task finished (or crashed) ---" << endl;
}


// =======================================================================
// The main function to run all examples
// =======================================================================

int main() {
    cout << "====== Starting '\\n' vs 'endl' Examples ======" << endl;
    cout << "-----------------------------------------------" << endl;
    
    // --- Run Example 1: Performance Test ---
    cout << "[Example 1] Running performance test. This may take a moment...\n";
    cout << "Writing " << LINES_TO_WRITE << " lines...\n";

    // Time the '\n' test
    auto start_newline = std::chrono::high_resolution_clock::now();
    testPerformance_With_Newline();
    auto end_newline = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> time_newline = end_newline - start_newline;
    
    cout << "  Test 1 (using '\\n'):  Completed in " << time_newline.count() << " milliseconds." << endl;

    // Time the 'endl' test
    auto start_endl = std::chrono::high_resolution_clock::now();
    testPerformance_With_Endl();
    auto end_endl = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> time_endl = end_endl - start_endl;

    cout << "  Test 2 (using 'endl'): Completed in " << time_endl.count() << " milliseconds." << endl;
    
    cout << "\n  Result: '\\n' is significantly faster than 'endl' for file I/O." << endl;

    
    cout << "-----------------------------------------------" << endl;
    
    // --- Run Example 2: Reliability Test ---
    cout << "[Example 2] Simulating a critical task with logging:\n" << endl;
    
    simulateCriticalTask();
    
    cout << "\n-----------------------------------------------" << endl;
    cout << "====== Examples Finished. ======" << endl;

    // system("pause"); // You can uncomment this if you want
    return 0;
}
// Literals and Escape Sequences
/*
 * ==========================================================
 * == C++ REVIEW NOTES: Literals and Escape Sequences ==
 * ==========================================================
 * (This entire block is a multi-line comment. The C++ compiler
 * will ignore everything between /* and .)
 *
 *
 * === PART 1: LITERALS ===
 *
 * 1. What is a Literal?
 * -----------------------------
 * A "literal" is a fixed value that is written directly into your source code.
 * It is not a variable; it IS the data itself.
 *
 * Example: In the line `int age = 30;`
 * - `age` is a VARIABLE (a named container).
 * - `30` is a LITERAL (a fixed integer value).
 *
 *
 * 2. Types of Literals (with Examples)
 * ---------------------------------------
 * Literals have types, just like variables. The compiler knows the type
 * just by looking at how you wrote the value.
 *     
 * a) Integer Literals (for whole numbers):
 * - `100`      (A standard decimal integer - type 'int' by default)
 * - `100L`     (A 'long' integer)
 * - `100LL`    (A 'long long' integer)
 * - `100U`     (An 'unsigned int')
 * - `0b101`    (A binary literal, starts with 0b - C++14)
 * - `0xAF`     (A hexadecimal literal, starts with 0x)
 * - `012`      (An octal literal, starts with 0)
 *
 * b) Floating-Point Literals (for decimal numbers):
 * - `3.14159`  (A 'double' by default. This is the standard)
 * - `3.14f`    (A 'float', specified by the 'f' suffix. Uses less memory)
 * - `1.23e5`   (Scientific notation: 1.23 * 10^5)
 *
 * c) Character Literals (for a SINGLE character):
 * - Must be in SINGLE quotes: `' '`
 * - `'A'`      (A single character)
 * - `'7'`      (The character '7', not the number 7)
 * - `'\n'`     (This is also a single character literal)
 *
 * d) String Literals (for sequences of characters):
 * - Must be in DOUBLE quotes: `" "`
 * - `"Hello, World!"`
 * - `"C++ Programming"`
 * - `""`       (An empty string literal)
 *
 * e) Boolean Literals (for true/false logic):
 * - `true`
 * - `false`
 *
 * f) Pointer Literal (represents a null pointer):
 * - `nullptr`  (The modern C++ way (since C++11) to say "points to nothing")
 *
 *
 * === PART 2: ESCAPE SEQUENCES ===
 *
 * 1. What is an Escape Sequence?
 * ---------------------------------
 * An escape sequence is a special combination of characters
 * that starts with a backslash (`\`).
 *
 * It's used inside character literals (`' '`) or string literals (`" "`)
 * to represent characters that are difficult or impossible to type directly.
 *
 *
 * 2. Main Purposes
 * ---------------------
 *
 * a) To represent "unprintable" or "whitespace" characters.
 * - Example: You can't just press "Enter" in your code to add a newline
 * inside a string.
 * - Solution: You use `\n` to represent the "newline" character.
 *
 * b) To "escape" characters that have special meaning in C++.
 * - Example: How do you put a double quote (`"`) inside a string
 * that is ALSO surrounded by double quotes (`" "`)?
 * `"He said, "Hello!""` <-- This is a SYNTAX ERROR.
 *
 * - Solution: You "escape" the inner quotes with a backslash: `\"`
 * `"He said, \"Hello!\""` <-- This is CORRECT.
 *
 *
 * 3. Common Escape Sequences 
 * -------------------------------
 *
 * `\n`  -> Newline (moves the cursor to the beginning of the next line)
 * `\t`  -> Horizontal Tab (adds an indent, like pressing the Tab key)
 * `\\`  -> Backslash (used to print a single backslash)
 * `\"`  -> Double Quote (used inside a string literal)
 * `\'`  -> Single Quote (used inside a character literal, e.g., `'\'')
 * `\0`  -> Null Terminator (The character with value 0. Marks the end
 * of C-style strings in memory. You often don't see this,
 * but it's very important!)
 * `\r`  -> Carriage Return (moves the cursor to the beginning of the
 * CURRENT line, without moving down)
 *
 */
//    4-Why do we need escape sequence literals?
/*
   We need escape sequences for two main reasons:
   To represent "invisible" characters or characters that cannot be typed directly
    (like \n to create a new line, or \t to add a tab).
   To cancel the special programming meaning of some symbols,
    so we can print them as regular characters 
    (like printing a quote \" inside a string, or printing the backslash \\ itself).
*/
///////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main(){

    //cout << "M1\M2" <<endl;
    cout << "m1\\M2" <<endl;
    
    //: /t
    cout << "M1\tM2" <<endl;
    cout << "m1\\\tM2" <<endl;
    
    // escape sequence 
    cout << " moha'\'nnad" <<endl;
    cout << " moha\0nnad" <<endl;
    cout << " moha\'nnad" <<endl;
    cout << " moha\"nnad" <<endl;
    cout << " moha\tnnad" <<endl;

    //: /"
    cout << "My Name Is : \"Mohannad\" "<<endl;

    //: /a Ring Bell
    cout <<"/a";
}
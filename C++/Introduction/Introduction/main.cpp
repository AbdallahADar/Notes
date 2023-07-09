//
//  main.cpp
//  Introduction
//
//  Created by Abdallah Dar on 12/23/22.
//

// The two back slashes are used for a single line comment

/*
 This can be used for multi line comment
 Second line
 */


// #include directive tells the computer to read in the contents of a header
// You can think of this as loading a library
#include <iostream> // Standard I/O header
#include <string> //String class, used for getline and string objects

// Allows us to use objects from namesapce std wuthout having to use std:: each time
using namespace std;

// Our main function to test things.
// Each C++ program must have exactly one top level main function
// Main is the first function called after global data is initialized or loaded
// Main by convention returns 0
int main() // This is the declaration of the function
// Function has form: return_type name(input1_type input1_name,input2_type input2_name,...)
// We can leave () empty signalling no inputs required
// { } contains the body of the function
{
    
    // Every logical line should be ended with ;
    // \n is the newline comment meaning that everything outputed following it would be in the next line
    // cout is the standard output stream object
    // << is the insert operator
    // cout is the object and std is namespace(like a library)
    // :: is the scope or member of operator. It is used to get object from a library/namespace
    // std::cout means cout object from namespace std
    // If you do not want to do std:: everytime you can use: using namespae std
    std::cout << "Hello, World!\n";
    cout << "Hello, World!\n";
    
    //If we want multiple strings to be in the output
    //E.g we want "A B" but from three different chars. "A"," ","B"
    std::cout << "A"; // Do not use newline since we want it in the same line
    std::cout << " "; // Do not use newline since we want it in the same line
    std::cout << "B\n"; //Use new line because we have reached the end
    
    // We can do multiple strings in one input line
    // We can also use << to insert one output after the other
    std::cout << "A" << " " << "B\n"; // We get "A B" and newline operator
    
    // ** Fundamental Variable Types **
    // Floating point literal: e.g double
    // Integer: e.g int
    // Character: e.g char (strings are arrays of char)
    // Boolean: bool (values: true and false)
    // Voide: void (no value type)
    // Null pointer: nullptr_t (value: nullptr)
    
    // If we only have non-negative values we can use unsigned int instead of int
    
    // ** Initializing and/or Declaring Variables **
    // We use double as en example
    double f1; // Double variable declared but not initialized
    double f2 = 5.0; // Double variable declared and initialized
    double f3(5.0); // Double variable declared and initialized alternate syntax style
    double f4{5.0}; // Double variable declared and initialized alternate syntax style
    double f5 = 5; // int 5 gets promoted to double 5.0
    
    // ** Arithmetic Operators **
    // + - * / are the generic ones
    // % is modulo
    // There is no power/exponentiate operator
    
    // int/int gives rounded down to 0 value aka floor division
    
    // ** Assigning/Re-Assigning values to variables **
    cout << f2 << " ";
    f2 = 10.0; // Reassign to new value
    cout << f2 << " ";
    f2 += 6; // f2 = f2 + 6
    cout << f2 << " ";
    f2 -= 6; // f2 = f2 - 6
    cout << f2 << " ";
    f2 *= 2; // f2 = f2 * 2
    cout << f2 << " ";
    f2 /= 2; // f2 = f2 / 2
    cout << f2 << "\n";
    
    int i1(22); // Initialized an int
    i1 %= 3; // i1 = i1 % 3
    cout << i1 << "\n";
    
    char c1('A'); //Initialize a char. Singl quotes are used for char
    cout << c1 << "\n";
    
    // ** Narrowing **
    // Assignment of a 0 or 0.0 to bool variable yields false. Non-0 yields true
    // '0' gets true because '0' by ASCII is int 48 which is true
    // '\0' gets false because it is int 0 in ASCII
    
    // ** If Else statement **
    //Syntax: if (expr) { }
    // If expr is true then { } is carried out
    // == equals, != not equals
    i1 = 22;
    if (i1 == 22) //One line of code following if, we do not need curly brackets
        cout << "i1 is 22\n";
    if (i1 == 22) // Need curly brackets for compound statement
    {
        cout << "i1 has a value\n";
        cout << "i1 is 22\n";
    }
    //If else statements
    if (i1 < 22)
    {
        cout << "i1 is less than 22\n";
    }
    else
    {
        cout << "i1 is greater than or equal to 22\n";
    }
    // If, else if and else statement
    if (i1 < 22)
    {
        cout << "i1 is less than 22\n";
    }
    else if (i1 > 22)
    {
        cout << "i1 is greater than 22\n";
    }
    else
    {
        cout << "i1 is equal to 22\n";
    }
    // && logical and
    // || logical or
    // true or false = true, true or true = true, false or false = false, true and false = false, true and true = true, false and false = false
    // ==, !=, <, >, <=, >= have precedence over &&, ||
    
    
    // ** Reading input from user **
    // cin is the standard input stream object
    // >> is get from or extract operator
    cout << "Enter a double: ";
    cin >> f1; // Set input equal to an uninitialized variable
    cout << "Enter another double: ";
    cin >> f2; // Set input equal to an initialized variable
    cout << "You inputted " << f1 << " and " << f2 <<" in the given order!\n";
    // Note: cin adds \n after user inputs so dont worry about that
    // cin has poor error handling so instead we use getline to read text into a string object
    // For string object we need the string class
    string s; // Declare empty string
    // s is truly no value unlike low level types such as int, double, char where uninitialized values get non sensical values
    string s2 = "Hello\n"; // Initialize a string
    // An initialized string automatically has a null terminated array char at the end
    // Recall that char was single quotation. String is double quotation
    cout << "Input anything: ";
    cin.ignore();
    // Why do we need cin.ignore()?
        // The extraction operations such as cin, leave the trailing '\n' char in the stream. This doesnt affect cin because it also ignores when reading it in. Getline doesn't ignore it. It sees '\n' and since that is the terminating char, it doesnt read anything else. Thus we need to use cin.ignore() before getline to tell it to ignore '\n'.
    getline(cin, s); // cin is set to string s. It reads in a string object excluding the newline char at the end
    cout << "Input anything again: ";
    getline(cin, s2); //This is done to show that getline removes the trailing '\n' from the stream and doesnt just leave it. So we dont need to use cin.ignore() if we never used cin explicitly or if we use getline previously.
    cout << "You entered: "<< s << " and " << s2 << "\n";
    
    
    // We look at STRING class in a bit more detail
    string S1; // Empty
    string S2 = "Thompson";
    string S3("vibranium");
    string S4{"I'll be back"};
    // String literal comparison
    cout << "String compared using ==. We check for S1 == "": " << (S1 == "") << "\n";
    cout << "String compared using ==. We check for S2 == "": " << (S2 == "") << "\n";
    // + is for string appending
    cout << "String appending using +. We check for S2 + S3: " << S2 + S3 <<"\n";
    S4 += "!"; // S4 = S4 + "!"
    cout << "String appending using +=. We check for S4+=\"!\": " << S4 <<"\n";
    // Use s[] to get subscript / specific element
    // We start from position 0 and go to length - 1
    cout << "S3[0] = " << S3[0] << " and S3[8] = " << S3[8] <<"\n";
    // String comparison for order
    // When comparing S2 vs S3 we compare char by char. That is we first compare S2[0] vs S3[0]. If there is one that is greater, then the comparison finishes and we've reached a conclusion. If both are equal then we move to next element, S2[1] vs S3[1]. This continues till we reach the first instance where letters are different in order.
    // The comparison is based on ASCII values which are just ints assigned to chars.
    // ASCII for u > ASCII for a.
    // ASCII for capitalized char < ASCII for non-capitalized char
    string ss = "hello";
    cout << "hello < aloha? " << (ss < "aloha") <<"\n";
    cout << "hello < halo? " << (ss < "halo") <<"\n";
    cout << "Halo < hello? " << ("Halo" < ss) <<"\n";
    //Named Operations for strings
    cout << "Size of string S2: " << S2.size() << "\n"; //Chars in string
    cout << "Max size of string allowed by the library: " <<S2.max_size() << "\n"; //max size allowed by library
    size_t ran_idx = S3.find("ran"); // Gives position of ran in S3
    //size_t is unsigned integer type. It is returned by size and other position returns of array objects
    // find returns string::npos if it cannot find
    cout << "Does vibranium have ran in it? "<<(ran_idx!=string::npos) << " and position where ran starts is: " << ran_idx<< "\n";
    cout << "Does vibranium have rando in it? " << (S3.find("rando")!=string::npos) << " and position where ran starts is: " << S3.find("rando")<< "\n";
    //Substring with starting position and length specified
    cout << "Substring of vibranium starting at 3 and having 5 char length: " << S3.substr(ran_idx,5)<<"\n";
    // Erasing a char/substring at specified position. We specify starting position and length
    cout << "Erasing char at index 3: " <<S3.erase(3,1) <<"\n";
    cout << "Erasing substring at index 3 of length 3: " <<S3.erase(3,3) <<"\n";
    // Inserting a char/substring at specified position. We specify starting position and what to insert
    cout << "Inserting \"$#@\" at index 3: " <<S3.insert(3,"$#@") <<"\n";
    // Note that these functions insert and erase are inline functions
    // Also we can run multiple functions at once
    string sss = "Hello";
    cout << "Erase H from Hello and replace with J to get Jello: "<<sss.erase(0,1).insert(0,"J") <<"\n";
    
    // Converting to/from numeric from/to string
    int a = 1;
    double aa = 2.5;
    // To convert to string we use to_string function
    string aaa;
    aaa = to_string(a);
    cout << aaa <<"\n";
    aaa = to_string(aa);
    cout << aaa <<"\n";
    // To convert string to numeric we use atoi for int and atof for float. It stands for ASCII to int/float.
    // The only thing is that we need to first convert the string into a c-string which are C style strings
    // str.c_str() gives us c string
    aaa = "112";
    string bbb = "3.14";
    cout << atoi(aaa.c_str()) + atof(bbb.c_str()) << "\n";
    
    
    // Formatted Output
    // We use I/O manipulators that modify the format of outut displayed by ostream objects like cout
    // boolalpha: true/false instead of 1/0
    // setw(n): next output has n char width
    // fixed: fixed point, no exponentiation i.e 0.00987 does not get displayed as 9.87e-3
    // setprecision(n): display n digits. Float displays 6 digits usually

    
    // Returns a value for the function that matches the return type
    return 0;
    // Note: main is a special function where we can leave out the return statement and the code will still compile
    // 0 means success for C++ main function
    
}

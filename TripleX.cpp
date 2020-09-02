#include <iostream>
// the above #include represents a preprocessor directive in the code, which are instructions to the compiler to, in this case, inlcude the <iostream> library into the code BEFORE compiling, which is why it can be found at the very start of our code file.
// <iostream> is the header file
// preprocessor directives do not need to end with a semicolon

int main()
{
    std::cout << "You are a secret agent for the United States of America breaking into a secure Russian server room to secure highly classified intelligence regarding a likely nuclear attack...";
    std::cout << std::endl;
    std::cout << "In order to continue, you must enter the correct codes...";
    // the above line is known as an expression statement
    // std is short for "Standard"
    // std is in the position of the Namespace (which is used to avoid naming conflicts and collisions)
    // the :: is the scope operator
    // cout allows us to write to the terminal and the << tells the compiler to write everything to the right (or what's in the string)

    return 0;
}
#include <iostream>
// the above #include represents a preprocessor directive in the code, which are instructions to the compiler to, in this case, inlcude the <iostream> library into the code BEFORE compiling, which is why it can be found at the very start of our code file.
// <iostream> is the header file
// preprocessor directives do not need to end with a semicolon

int main()
{
    std::cout << std::endl;

    std::cout << "You are a secret agent for the Central Intelligence Agency (CIA) breaking into a secure Russian server room in order to obtain highly classified intelligence regarding a likely nuclear attack...";
    std::cout << std::endl;
    std::cout << "In order to continue without being apprehended by Russian Agents, you must enter the correct codes.";
    std::cout << std::endl;
    // the above lines are known as expression statements
    // an expression (myVariable = 5; for instance) followed by a semicolon is an expression statement
    // std is short for "Standard"
    // std is in the position of the Namespace (which is used to avoid naming conflicts and collisions)
    // the :: is the scope operator
    // cout allows us to write to the terminal and the << tells the compiler to write everything to the right (or what's in the string)

    const int CodeA = 1;
    const int CodeB = 3;
    const int CodeC = 5;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    // lines that declare variables are declaration statements, which is simply code that declares something (variables in the above cases)
    // You have to declare a variable to assign it a value. You cannot assign a value to a variable before the variable has been declared.
    std::cout << std::endl;

    std::cout << "- There are three numbers in the code." << std::endl;
    std::cout << "- The codes add up to: " << CodeSum << std::endl;
    std::cout << "- The codes multiply to give: " << CodeProduct << std::endl;

    std::cout << std::endl;

    int PlayerGuess;

    return 0;
}
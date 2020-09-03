#include <iostream>
// the above #include represents a preprocessor directive in the code, which are instructions to the compiler to, in this case, inlcude the <iostream> library into the code BEFORE compiling, which is why it can be found at the very start of our code file.
// <iostream> is the header file
// preprocessor directives do not need to end with a semicolon

void PrintIntroduction()
{
    std::cout << std::endl;
    std::cout << "You are a secret agent for the Central Intelligence Agency (CIA) breaking into a secure Russian server room in order to obtain highly classified intelligence regarding a likely nuclear attack...\n";
    std::cout << "In order to continue without being apprehended by Russian Agents, you must enter the correct code.\n";

    // the above lines are known as expression statements
    // an expression (myVariable = 5; for instance) followed by a semicolon is an expression statement
    // std is short for "Standard"
    // std is in the position of the Namespace (which is used to avoid naming conflicts and collisions)
    // the :: is the scope operator
    // cout allows us to write to the terminal and the << tells the compiler to write everything to the right (or what's in the string)
    // cout stands for Character Output
    // the << is known as the insertion output
    // cin stands for character input; and the >> is known as the extraction operator
}

void PlayGame()
{
    PrintIntroduction();

    const int CodeA = 1;
    const int CodeB = 3;
    const int CodeC = 5;
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    // lines that declare variables are declaration statements, which is simply code that declares something (variables in the above cases)
    // You have to declare a variable to assign it a value. You cannot assign a value to a variable before the variable has been declared.

    std::cout << std::endl;
    std::cout << "- There are three numbers in the code.\n";
    std::cout << "- The codes add up to: " << CodeSum;
    std::cout << "\n- The codes multiply to give: " << CodeProduct << std::endl;
    std::cout << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    std::cout << "- Your guesses add up to: " << GuessSum;
    std::cout << "\n- Your guesses multiply to give: " << GuessProduct << std::endl;
    std::cout << std::endl;

    // Check to see if player's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
        {
            std::cout << "You have succesfully infiltrated the server.\n";
            std::cout << "Good work, Comrade!\n";
        } else
        {
            std::cout << "A deafening siren sounds seconds before heavily-armed agents storm the room in which you are standing.\n";
            std::cout << "'Ruki vverkh,' they scream, as they aim their AK-47s at your person.\n";
            std::cout << "Game Over!\n";
        }
    std::cout << std::endl;
}

int main()
{
    PlayGame();
    return 0;
}
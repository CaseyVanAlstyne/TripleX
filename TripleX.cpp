#include <iostream>
#include <ctime>
// the above #include represents a preprocessor directive in the code, which are instructions to the compiler to, in this case, inlcude the <iostream> library into the code BEFORE compiling, which is why it can be found at the very start of our code file.
// <iostream> is the header file
// preprocessor directives do not need to end with a semicolon

void PrintIntroduction(int Difficulty) {
    std::cout << std::endl;
    std::cout << "You are a secret agent for the Central Intelligence Agency (CIA) breaking into a secure Russian server room in order to obtain highly classified intelligence regarding a likely nuclear attack...\n";
    std::cout << "You are attempting to infiltrate a secure server room on level " << Difficulty;
    std::cout << "\nIn order to continue without being apprehended by Russian Agents, you must enter the correct code.\n";

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

bool PlayGame(int Difficulty) {
    PrintIntroduction(Difficulty);

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;
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
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "Good work, Comrade!\n";
        std::cout << "You have succesfully extracted a file. Keep going!\n";
        return true;
    } else {
        std::cout << "You entered the wrong code, Agent. Try again!\n";
        return false;
        }
    std::cout << std::endl;
}

int main() {
    srand(time(NULL));

    int LevelDifficulty = 1;
    const int MaxDifficulty = 4; 

    while (LevelDifficulty <= MaxDifficulty) // Loop game until max difficulty level is completed.
    {  
    bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clear any errors
        std::cin.ignore(); // Discard the buffer

    if (bLevelComplete) {
        ++LevelDifficulty;
        }
        
    }
    std::cout << "You got all of the files, Agent. Congratulations on defeating the Russians! Now get out of there! \n";
    std::cout << "Suddenly, you hear movement in the next room. You quickly scurry to the open window and ready your hang-glider.\n";
    std::cout << "As you get ready to jump, a deafening siren sounds seconds before heavily-armed agents storm the other side of the room in which you are standing.\n";
    std::cout << "'Ruki vverkh,' they scream, as they aim their AK-47s at you.\n";
    std::cout << "It's too late; you're already gliding to safety!\n\n";

    return 0;
}
#include <iostream>
#include <ctime>

void PrintIntro(int Difficulty) {
     // Introduction to game
     std::cout <<" \n\n\n" << R"(
_____/\\\\\\\\\________/\\\\\\\\\\\__________/\\\\\\\\\__/\\\\\\\\\\\__/\\\\\\\\\\\_
 ___/\\\\\\\\\\\\\____/\\\/////////\\\_____/\\\////////__\/////\\\///__\/////\\\///__
  __/\\\/////////\\\__\//\\\______\///____/\\\/_______________\/\\\_________\/\\\_____
   _\/\\\_______\/\\\___\////\\\__________/\\\\________________\/\\\_________\/\\\_____
    _\/\\\\\\\\\\\\\\\______\////\\\______\/\\\_________________\/\\\_________\/\\\_____
     _\/\\\/////////\\\_________\////\\\___\//\\\________________\/\\\_________\/\\\_____
      _\/\\\_______\/\\\__/\\\______\//\\\___\///\\\______________\/\\\_________\/\\\_____
       _\/\\\_______\/\\\_\///\\\\\\\\\\\/______\////\\\\\\\\\__/\\\\\\\\\\\__/\\\\\\\\\\\_
        _\///________\///____\///////////___________\/////////__\///////////__\///////////__
)" << '\n';
    std::cout << " \n";
    std::cout << "You are a secret agent breaking into a level " << Difficulty << " secure server room\n";
    std::cout << "You need to enter the correct codes to continue...\n";
}

bool PlayGame(int Difficulty) {

    PrintIntro(Difficulty);

    //Declaring Variables
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Printing the CodeSum and CodeProduct
    std::cout << "\n+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply up to: " << CodeProduct;
    std::cout << " \n";

    int GuessA, GuessB, GuessC;

    std::cout << "\nEnter each number one at a time";
    std::cout << " \n";

    //Each Number being inputed by the user
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Console tells the player the full code they entered
    std::cout << " \n";

    if(GuessSum == CodeSum && GuessProduct == CodeProduct){
        std::cout << "You entered the Correct code!\n";
        return true;
    }
    else {
        std::cout << "You entered the incorrect code!\n";
        return false;
    }

}

int main()
{
    srand(time(NULL));

    int LvlDifficulty = 1;
    int const MaxLevels = 5;

    while (LvlDifficulty <= MaxLevels) // Loop game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LvlDifficulty);
        std::cin.clear(); //Clears any errors
        std::cin.ignore(); // Discards any buffer

        if (bLevelComplete)
        {
            ++LvlDifficulty;
        }

    }
    std::cout <<"\n\n*** Great work agent, you got all the files!***\n";
    return 0;
}

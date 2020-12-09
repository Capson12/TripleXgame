#include <iostream> 
#include <ctime>



void PrintIntro(int Difficulty)
{

    //How to insert text into your code.
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty;
    //How to start a new line in C++
    std::cout << " secure server room...." << std::endl;
    std::cout << "Enter the correct code to continue...";
  
}

bool PlayGame(int Difficulty)
{
    //it brings the "PrintInfo" function and places it into PlayGame function
    PrintIntro(Difficulty);


    //seperate the variable from the rest of the sentence
    std::cout << std::endl;  
  
   //declare the Variable - (We've now declared them to a print a random int, however we will need to add range as the default range of (rand()) is between 0 - 32,767)
    const int a = rand() % Difficulty + Difficulty;  
    const int b = rand() % Difficulty + Difficulty;
    const int c = rand() % Difficulty + Difficulty;


    /*Creating a constant variable
    const int g = 10;
    std::cout << g <<std::endl;*/

    //Creating a new Int that is made up of other ints.
    int sum = a + b + c; 
    int product = a * b * c;
    std::cout << "+ There are three numbers in the code.\n";
    std::cout << "+ The numbers add up to: " << std::endl;
    std::cout << a + b + c << std::endl;
    std::cout << "+ The Product of the numbers are: " << std::endl << product << std::endl;

    //(\n) is a shorter way of starting a new line
    std::cout << "\nEnter your three Guesses:\n ";
    int GuessA, GuessB, GuessC;
    //this allows inpt to the variable
    // cin means Character input
    //cout means character output
    std::cin>>GuessA; 
    std::cin>>GuessB;
    std::cin>>GuessC;
    std::cout<<"You entered: " << GuessA << " " << GuessB <<" " << GuessC << std::endl;


    //creating the equation that calculates the output of the three numbers.
    int GuessSum = GuessC + GuessB + GuessA; 
    int GuessProduct = GuessA * GuessB * GuessC;
    std::cout << "The sum of your numbers are:\n" << GuessSum << std::endl << "The Prodcut of your numbers are:\n" << GuessProduct << std::endl; 


    if (GuessSum == sum && GuessProduct == product)
        {

        std::cout << "the answer is correct!";
        return true;
        }
    
        else
        { 
        std::cout << "the answer is wrong! Try again.";
        return false;
        }


}
 
// The beginnning of function.
int main()
{
    srand(time(NULL)); //Creates a randome sequence based on the time of day.


    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;
     while (LevelDifficulty <= MaxDifficulty) //Loop the code until it reaches the max difficulty.
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        //if boolean is = to true end the function
        std::cin.clear(); //clear any errors
        std::cin.clear(); //remove any buffer 

        if (bLevelComplete)
        {
            std::cout << "\nWell Done Proceed to the next level!!";
            ++LevelDifficulty; 
            //increment the variable (level difficulty) by one till we meet the condition.

        }

    }
    std::cout << "Well Done You've cracked the Files, now get out of there!";
    return 0;
}

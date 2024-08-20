#include <iostream>
#include <string>
#include <string_view>
#include <vector>

using namespace std;

class drawing {
    public:
        void draw(int parts) {
            switch(parts) { //draws the correct amount of parts depending on the guesses
                case 1:
                    printf("\n");
                    printf("  ______\n");
                    printf(" |      |\n");
                    printf(" |    __|__\n");
                    printf(" |   |     |\n");
                    printf(" |   |_____|\n");
                    printf(" |\n");
                    printf(" |\n");
                    printf(" |\n");
                    printf(" |\n");
                    printf(" |\n");
                    printf(" |\n");
                    printf(" |\n");
                    printf(" |_____________\n");
                    printf("\n");
                    break;
                case 2:
                    printf("\n");
                    printf("  ______\n");
                    printf(" |      |\n");
                    printf(" |    __|__\n");
                    printf(" |   |     |\n");
                    printf(" |   |_____|\n");
                    printf(" |      |\n");
                    printf(" |      |\n");
                    printf(" |      |\n");
                    printf(" |      |\n");
                    printf(" |\n");
                    printf(" |\n");
                    printf(" |\n");
                    printf(" |_____________\n");
                    printf("\n");
                    break;
                case 3:
                    printf("\n");
                    printf("  ______\n");
                    printf(" |      |\n");
                    printf(" |    __|__\n");
                    printf(" |   |     |\n");
                    printf(" |   |_____|\n");
                    printf(" |      |\n");
                    printf(" |      |\n");
                    printf(" |      |\n");
                    printf(" |      |\n");
                    printf(" |       \\\n");
                    printf(" |        \\\n");
                    printf(" |         \\\n");
                    printf(" |_____________\n");
                    break;
                case 4:
                    printf("\n");
                    printf("  ______\n");
                    printf(" |      |\n");
                    printf(" |    __|__\n");
                    printf(" |   |     |\n");
                    printf(" |   |_____|\n");
                    printf(" |      |\n");
                    printf(" |      |\n");
                    printf(" |      |\n");
                    printf(" |      |\n");
                    printf(" |     / \\\n");
                    printf(" |    /   \\\n");
                    printf(" |   /     \\\n");
                    printf(" |_____________\n");
                    break;
                case 5:
                    printf("\n");
                    printf("  ______\n");
                    printf(" |      |\n");
                    printf(" |    __|__\n");
                    printf(" |   |     |\n");
                    printf(" |   |_____|\n");
                    printf(" |      |\n");
                    printf(" |  ----|\n");
                    printf(" |      |\n");
                    printf(" |      |\n");
                    printf(" |     / \\\n");
                    printf(" |    /   \\\n");
                    printf(" |   /     \\\n");
                    printf(" |_____________\n");
                    break;
                case 6:
                    printf("\n");
                    printf("  ______\n");
                    printf(" |      |\n");
                    printf(" |    __|__\n");
                    printf(" |   |     |\n");
                    printf(" |   |_____|\n");
                    printf(" |      |\n");
                    printf(" |  ----|----\n");
                    printf(" |      |\n");
                    printf(" |      |\n");
                    printf(" |     / \\\n");
                    printf(" |    /   \\\n");
                    printf(" |   /     \\\n");
                    printf(" |_____________\n");
                    break;
                case 7: //part of mutant mode
                    printf("\n");
                    printf("  ______\n");
                    printf(" |      |\n");
                    printf(" |    __|__\n");
                    printf(" |   |     |\n");
                    printf(" |   |_____|\n");
                    printf(" |      |\n");
                    printf(" |  ----|----\n");
                    printf(" |  ----|\n");
                    printf(" |      |\n");
                    printf(" |     / \\\n");
                    printf(" |    /   \\\n");
                    printf(" |   /     \\\n");
                    printf(" |_____________\n");
                    printf("    hc^!WlE3     \n"); //secret cheat code!
                    break;
                case 8: //part of mutant mode
                    printf("\n");
                    printf("  ______\n");
                    printf(" |      |\n");
                    printf(" |    __|__\n");
                    printf(" |   |     |\n");
                    printf(" |   |_____|\n");
                    printf(" |      |\n");
                    printf(" |  ----|----\n");
                    printf(" |  ----|----\n");
                    printf(" |      |\n");
                    printf(" |     / \\\n");
                    printf(" |    /   \\\n");
                    printf(" |   /     \\\n");
                    printf(" |_____________\n");
                    printf("    hc^!WlE3     \n");
                    break;
                case 9: //part of mutant mode
                    printf("\n");
                    printf("  ______\n");
                    printf(" |  \\   |\n");
                    printf(" |   \\__|__\n");
                    printf(" |   |     |\n");
                    printf(" |   |_____|\n");
                    printf(" |      |\n");
                    printf(" |  ----|----\n");
                    printf(" |  ----|----\n");
                    printf(" |      |\n");
                    printf(" |     / \\\n");
                    printf(" |    /   \\\n");
                    printf(" |   /     \\\n");
                    printf(" |_____________\n");
                    printf("    hc^!WlE3     \n");
                    break;
                case 10: //part of mutant mode
                    printf("\n");
                    printf("  ______\n");
                    printf(" |  \\   |   /\n");
                    printf(" |   \\__|__/\n");
                    printf(" |   |     |\n");
                    printf(" |   |_____|\n");
                    printf(" |      |\n");
                    printf(" |  ----|----\n");
                    printf(" |  ----|----\n");
                    printf(" |      |\n");
                    printf(" |     / \\\n");
                    printf(" |    /   \\\n");
                    printf(" |   /     \\\n");
                    printf(" |_____________\n");
                    printf("    hc^!WlE3     \n");
                    break;
                default:
                    printf("\n");
                    printf("  ______\n");
                    printf(" |      |\n");
                    printf(" |   \n");
                    printf(" |   \n");
                    printf(" |   \n");
                    printf(" |\n");
                    printf(" |\n");
                    printf(" |\n");
                    printf(" |\n");
                    printf(" |\n");
                    printf(" |\n");
                    printf(" |\n");
                    printf(" |_____________\n");
                    printf("\n");
                    break;
            }
        }
};

struct {
    bool mutantMode; //gives more body parts and guesses
    bool l5Mode; //gives 15-letter words
    bool endlessMode; //endless hangman!
    string cheatCode;
} myCheats;

string chooseWord(string topic) {
    srand(time(NULL));
    if (myCheats.l5Mode) {
        string words[20] = {"abnormalization", "calculabilities", "halfheartedness", "juxtapositional", "objectification",
        "observabilities", "quadrilaterally", "radioactivities", "ultraconvenient", "weatherboarding", "vascularization", 
        "ultracentrifuge", "radioautographs", "paleobiological", "nationalization", "nanofabrication", "kindergarteners", 
        "kaledioscopical", "justifiableness", "hallucinogenics"};
        return words[rand() % 20];
    } else if (topic == "math") { //math words
        string words[20] = {"coefficient", "algebra", "geometry", "coordinate", "statistics", "variable",
        "perimeter", "calculus", "subtraction", "multiplication", "trigonometry", "equation", "factor", 
        "exponent", "fraction", "integer", "logarithm", "monomial", "addition", "division"};
        return words[rand() % 20];
    } else if (topic == "science") { //science (bio, chem, phys) words
        string words[20] = {"hypothesis", "acceleration", "gravity", "biology", "chemistry", "experiment",
        "genetic", "molecule", "microscope", "particle", "oxygen", "observation", "density", "ecosystem", 
        "environment", "photosynthesis", "bacteria", "chromosome", "evolution", "momentum"};
        return words[rand() % 20];
    } else if (topic == "english") { //english class words
        string words[20] = {"adjective", "conjunction", "rhetoric", "preposition", "suffix", "character",
        "thesis", "alliteration", "audience", "evidence", "metaphor", "narrator", "paraphrase", "plagiarism", 
        "soliloquy", "synonym", "transition", "conclusion", "contraction", "quotation"};
        return words[rand() % 20];
    } else if (topic == "history") { //history words
        string words[20] = {"monarchy", "government", "revolution", "colonization", "capitalism", "communism",
        "industrial", "aristocracy", "constitution", "legislature", "democracy", "nobility", "dictator", "enlightenment", 
        "hierarchy", "immigration", "socialism", "suffrage", "imperialism", "republic"};
        return words[rand() % 20];
    } else { //miscellaneous, no topic
        string words[20] = {"perceive", "demonstrate", "landowner", "initiative", "talkative", "photography", 
        "highlight", "courtesy", "comfortable", "electronic", "reputation", "minimum", "professor", 
        "analyst", "exploration", "hostility", "hemisphere", "basketball", "exposure", "bulletin"};
        return words[rand() % 20];
    }
}

int main() {
    string chosenTopic = "";
    printf("\nWelcome to the hang[a4uL*@rR]man game! Use your guess[7&5et$#W]es wisely to find the mystery word!");
    printf("\nWhat topic would you like words from?\nType \'math,\' \'science,\' \'english,\' 'history,\' or anything else for no category: ");
    cin >> chosenTopic;
    printf("\nEnter cheat code: ");
    cin >> myCheats.cheatCode;
    if(myCheats.cheatCode == "7&5et$#W") {
        myCheats.mutantMode = true;
        printf("MUTANT MODE ENABLED\n");
    } else if(myCheats.cheatCode == "a4uL*@rR") {
        myCheats.l5Mode = true;
        printf("CATEGORY CHOICE DISABLED\n");
        printf("HARD MODE ENABLED\n");
    } else if (myCheats.cheatCode == "hc^!WlE3") { //code found in mutant mode (7 - 10 wrong guesses)
        myCheats.endlessMode = true;
        printf("E N D L E S S MODE ENABLED (Guess '#' to end!)");
    }

    do {
        string hiddenWord = chooseWord(chosenTopic);
        string currWord = "";
        for(int i = 0; i < hiddenWord.length(); i++) {
            currWord += "-";
        }
        printf("\nThe current word is: %s", currWord.c_str());

        int hangmanParts = 0;
        int allowedGuesses = 6;
        vector<char> guesses;
        drawing hangman;
        hangman.draw(0);
        if(myCheats.mutantMode) {
            allowedGuesses = 10;
        }

        while (currWord.find("-") != string::npos && hangmanParts < allowedGuesses) {
            char guess;
            printf("\nEnter a guess: "); //while loop to ensure valid, single character was entered?
            cin >> guess;
            if(guess == '#') {
                myCheats.endlessMode = false; //guess the '#' sign to turn off endless mode!
            }
            guesses.insert(guesses.end(), guess);

            bool correct = false;
            for(int i = 0; i < hiddenWord.length(); i++) {
                if(hiddenWord.at(i) == guess) {
                    currWord[i] = guess;
                    correct = true;
                }
            }

            if(correct) {
                printf("\nCorrect! ");
                hangman.draw(hangmanParts);
            } else {
                printf("\nIncorrect! ");
                hangmanParts++;
                hangman.draw(hangmanParts);
            }
            printf("The current word is: %s", currWord.c_str());
            printf("\nGuesses So Far: ");
            for(const char& g : guesses) {
                printf("%c ", g);
            }
        }

        if(currWord == hiddenWord) {
            printf("\nYou guessed the word! Great job!\n");
        } else {
            printf("\nYou did not guess the word, \"%s.\" Try again.\n", hiddenWord.c_str());
        }
    } while(myCheats.endlessMode);
}
// FYEC Group 73's Aspirational Recycling Prevention Program!
// Asseel Alrashdi, Timothy Bottegal, Chris Callix

/*
This program has two features, a quiz and a trivia section. Users are initally asked to choose one of the two, which is error checked indefinitely.
Quiz Section: User is presented with a question on aspirational recycling, and enters their answer in the form of ('a'||'b'||'c'||'d') or ('a'||'b'), which is error checked indefinitely. Their answer is verified, and if correct, a point is added.
Trivia Section: User is presented with a piece of trivia about aspirational recycling, and must input any character to continue onto the next.
Once complete with either section, user is prompted with the option to restart program, which is error checked indefinitely.
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int verifyAnswer(char answer, char solution, char supplement[], int score) {

    // Function takes in the user's answer, the given solution, the supplementary text, and the user's existing score, and compares answer and solution. 
    // If a match, a point is added and the supplementary text is displayed. Returns the user's modified score.

    if (solution != 'o') {
        if (answer == solution) {
            score++;
            printf("\nCorrect! %s Your score is now %d.\n", supplement, score);
        }
        else {
            printf("\nIncorrect.\n");
        }  
    }
    else {
        printf("\nQuestion not filled out yet.\n");
    }
    return score;
}

void printQuestion(int type, int number, char question[], char alpha[], char beta[], char gamma[], char delta[]) {

    // Function takes in the question type, question number, the question itself, and all of the possible answers.
    // It displays question number, the question itself, either all 4 or just 2 of the possible answers depending on the question type.

    switch (type) {
        case 4:
            printf("\n%d. %s",number, question);
            printf("\n\ta. %s", alpha);
            printf("\n\tb. %s", beta);
            printf("\n\tc. %s", gamma);
            printf("\n\td. %s", delta);
            printf("\n\n");
        break;
        case 2:
            printf("\n%d. %s",number, question);
            printf("\n\ta. %s", alpha);
            printf("\n\tb. %s", beta);
            printf("\n\n");
        break;
    }
}

bool checkAnswerValidity(int type, char answer) {
    
    // Function takes in the question type and the user's answer. Depending on the question type, it returns a boolean representing the validity of the user's answer.
    
    switch (type) {
        case 4:
            switch (answer) {
                case 'a':
                case 'b':
                case 'c':
                case 'd':
                    return true;
                break;
                default:
                    return false;
            }
        break;
        case 2:
            switch (answer) {
                case 'a':
                case 'b':
                    return true;
                break;
                default:
                    return false;
            }
        break;
    }   
}

void answerFormatReminder(int type) {

    // Function takes in the question type. Depending on question type, it prompts the user with the correct formatting.

    switch (type) {
        case 4:
            printf("Please answer with (a|b|c|d). ");
        break;
        case 2:
            printf("Please answer with (a|b). ");
    }
}

int quiz() {

    // Function operates the quiz feature of the program. The function has 10 questions to go through in a while loop, calling the appropriate functions to do sub-tasks. Function outputs the user's final score.

    printf("\n Welcome to the Aspirirational Recycling Quiz!\n");

    int score = 0, count = 1;
    char answer;
    char solution;
    bool valid = false;

    while (count <= 10) {
        switch (count) {
            case 1:
                printQuestion(4, count, "Approximately how many tons of unrecycled plastic end up in the oceans each year?", "6.7 million", "2.1 billion", "8.8 million", "200,000");
                scanf(" %c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(4, answer);
                    switch (valid) {
                        case true:
                        score = verifyAnswer(answer, 'c', "That's enough plastic to cover every meter of coastline in the world with five trash bags every year!", score);
                        break;
                        case false:
                        answerFormatReminder(4);
                        scanf(" %c",&answer);
                    }
                }
                valid = false;

            break;
            case 2:
                printQuestion(4, count, "What percentage of plastic waste worldwide has ever been recycled?", "55%", "10%", "75%", "30%");
                scanf(" %c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(4, answer);
                    switch (valid) {
                        case true:
                        score = verifyAnswer(answer, 'b', "90-91% of all plastics are not even recycled. We've got a long way to go.", score);
                        break;
                        case false:
                        answerFormatReminder(4);
                        scanf(" %c",&answer);
                    }
                }
                valid = false;

            break;
            case 3:
                printQuestion(4, count, "Don't recycle anything smaller than a...", "pizza box", "silver dollar", "drink cup", "credit card");
                scanf(" %c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(4, answer);
                    switch (valid) {
                        case true:
                        score = verifyAnswer(answer, 'd', "Things smaller than a credit card can jam sorting machines at recycling plants, slowing them down.", score);
                        break;
                        case false:
                        answerFormatReminder(4);
                        scanf(" %c",&answer);
                    }
                }
                valid = false;

            break;
            case 4:
                printQuestion(4, count, "What should you never do with your recyclables before putting them into a recepticle?", "Put them in a plastic bag, then put them in", "Empty, clean and dry them", "Flatten any boxes", "Confirm they can be recycled");
                scanf(" %c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(4, answer);
                    switch (valid) {
                        case true:
                        score = verifyAnswer(answer, 'a', "While it may seem kind to make your recycling easier to handle, plastic bags, especially the traditional grocery style bags, can get tangled in heavy machinery, and shut them down.", score);
                        break;
                        case false:
                        answerFormatReminder(4);
                        scanf(" %c",&answer);
                    }
                }
                valid = false;

            break;
            case 5:
                printQuestion(4, count, "", "", "", "", "");
                scanf(" %c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(4, answer);
                    switch (valid) {
                        case true:
                        score = verifyAnswer(answer, 'o', "", score);
                        break;
                        case false:
                        answerFormatReminder(4);
                        scanf(" %c",&answer);
                    }
                }
                valid = false;

            break;
            case 6:
                printQuestion(4, count, "", "", "", "", "");
                scanf(" %c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(4, answer);
                    switch (valid) {
                        case true:
                        score = verifyAnswer(answer, 'o', "", score);
                        break;
                        case false:
                        answerFormatReminder(4);
                        scanf(" %c",&answer);
                    }
                }
                valid = false;

            break;
            case 7:
                printQuestion(4, count, "", "", "", "", "");
                scanf(" %c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(4, answer);
                    switch (valid) {
                        case true:
                        score = verifyAnswer(answer, 'o', "", score);
                        break;
                        case false:
                        answerFormatReminder(4);
                        scanf(" %c",&answer);
                    }
                }
                valid = false;
                
            break;
            case 8:
                printQuestion(4, count, "", "", "", "", "");
                scanf(" %c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(4, answer);
                    switch (valid) {
                        case true:
                        score = verifyAnswer(answer, 'o', "", score);
                        break;
                        case false:
                        answerFormatReminder(4);
                        scanf(" %c",&answer);
                    }
                }
                valid = false;
                
            break;
            case 9:
                printQuestion(4, count, "", "", "", "", "");
                scanf(" %c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(4, answer);
                    switch (valid) {
                        case true:
                        score = verifyAnswer(answer, 'o', "", score);
                        break;
                        case false:
                        answerFormatReminder(4);
                        scanf(" %c",&answer);
                    }
                }
                valid = false;
                
            break;
            case 10:
                printQuestion(4, count, "", "", "", "", "");
                scanf(" %c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(4, answer);
                    switch (valid) {
                        case true:
                        score = verifyAnswer(answer, 'o', "", score);
                        break;
                        case false:
                        answerFormatReminder(4);
                        scanf(" %c",&answer);
                    }
                }
                valid = false;
               
            break;
        }
        count++;
    }
    return score;
}

void trivia() {
    
    // Function operates the trivia feature of the program. The function is our only no-input, no-output function. The function has 10 bits of trivia to go through in a while loop, waiting for the user to input anything to move on to the next.

    printf("\n Welcome to the Trivia section!\n");

    int count = 1;
    char anykey;
    while (count <= 10) {
        switch (count) {
            case 1:
                printf("\nTrivia %d: Did you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 2:
                printf("\nTrivia %d: Did you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 3:
                printf("\nTrivia %d: Did you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 4:
                printf("\nTrivia %d: Did you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 5:
                printf("\nTrivia %d: Did you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 6:
                printf("\nTrivia %d: Did you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 7:
                printf("\nTrivia %d: Did you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 8:
                printf("\nTrivia %d: Did you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 9:
                printf("\nTrivia %d: Did you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 10:
                printf("\nTrivia %d: Did you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
        }
        count++;
    }
}

int main () {
    
    // Asks the user to select a feature, then runs the related function. Once either function is complete, the user is asked if they would like to repeat the program.

    int userchoice, score;
    bool valid = false;
    char again = 'y';

    while (again = 'y') {
        printf("\n\nWelcome the Aspirational Recycling Prevention Program.");
        printf("\nPlease select Quiz or Trivia. (1|2) ");
        scanf("%d",&userchoice);
        while (!valid) {
            switch (userchoice) {
                case 1:
                case 2:
                valid = true;
                break;
                default:
                printf("\nInvalid choice. Please select Quiz or Trivia. (1|2) ");
                scanf("%d",&userchoice);
                }
         }
        valid = false;

        switch (userchoice) {
            case 1:
                score = quiz();
                printf("\nThank you for completing our quiz! Your score was %d/10!", score);
            break;
            case 2:
                trivia();
        }

        printf("\nWould you like to recomplete the ARPP? (y|n) ");
        scanf(" %c",&again);
        while (!valid) {
            switch (again) {
                case 'y':
                    valid = true;
                break;
                case 'n':
                    exit(420);
                break;
                default:
                    printf("\nInvalid choice. Would you like to recomplete the ARPP? (y|n) ");
                    scanf(" %c",&again);
            }
         }
    }
    return 69;
}

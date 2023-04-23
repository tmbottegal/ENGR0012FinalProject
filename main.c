// FYEC Group 73's Aspirational Recycling Prevention Program!
// Asseel Alrashdi, Timothy Bottegal, Chris Callix

/*
This program has two features, a quiz and a trivia section. Users are initally asked to choose one of the two.
Quiz Section: User is presented with a question on aspirational recycling, and enters their answer in the form of ('a'||'b'||'c'||'d'). Their answer is verified, and if correct, a point is added.
Trivia Section: User is presented with a piece of trivia about aspirational recycling, and must press any key to continue onto the next.
Once complete with either section, user is prompted with the option to restart program.
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int verify(char answer, char solution, int score) {
    if (answer == solution) {
        score++;
        printf("\nCorrect! Your score is now %d",score);
    }
    else {
        printf("\nIncorrect.");
    }
    return score;
}

void printQuestion(int number, char question[], char alpha[], char beta[], char gamma[], char delta[]) {
    printf("\n%d. %s",number, question);
    printf("\n\ta. %s", alpha);
    printf("\n\tb. %s", beta);
    printf("\n\tc. %s", gamma);
    printf("\n\td. %s", delta);
    printf("\n\t\t");
}

bool checkAnswerValidity(char answer) {
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
}

int quiz() {

    printf("\n Welcome to the Aspirirational Recycling Quiz!");

    int count = 1, score = 0;
    char answer;
    bool valid = false;

    while (count <= 10) {
        switch (count) {
            case 1:
                printQuestion(count, "", "", "", "", "");
                scanf("%c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(answer);
                    switch (valid) {
                        case true:
                        score = verify(answer, 'e', score);
                        break;
                        case false:
                        printf("Please answer with (a|b|c|d). ");
                        scanf("%c",&answer);
                    }
                }

            break;
            case 2:
                printQuestion(count, "", "", "", "", "");
                scanf("%c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(answer);
                    switch (valid) {
                        case true:
                        score = verify(answer, 'e', score);
                        break;
                        case false:
                        printf("Please answer with (a|b|c|d). ");
                        scanf("%c",&answer);
                    }
                }

            break;
            case 3:
                printQuestion(count, "", "", "", "", "");
                scanf("%c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(answer);
                    switch (valid) {
                        case true:
                        score = verify(answer, 'e', score);
                        break;
                        case false:
                        printf("Please answer with (a|b|c|d). ");
                        scanf("%c",&answer);
                    }
                }

            break;
            case 4:
                printQuestion(count, "", "", "", "", "");
                scanf("%c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(answer);
                    switch (valid) {
                        case true:
                        score = verify(answer, 'e', score);
                        break;
                        case false:
                        printf("Please answer with (a|b|c|d). ");
                        scanf("%c",&answer);
                    }
                }

            break;
            case 5:
                printQuestion(count, "", "", "", "", "");
                scanf("%c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(answer);
                    switch (valid) {
                        case true:
                        score = verify(answer, 'e', score);
                        break;
                        case false:
                        printf("Please answer with (a|b|c|d). ");
                        scanf("%c",&answer);
                    }
                }

            break;
            case 6:
                printQuestion(count, "", "", "", "", "");
                scanf("%c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(answer);
                    switch (valid) {
                        case true:
                        score = verify(answer, 'e', score);
                        break;
                        case false:
                        printf("Please answer with (a|b|c|d). ");
                        scanf("%c",&answer);
                    }
                }

            break;
            case 7:
                printQuestion(count, "", "", "", "", "");
                scanf("%c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(answer);
                    switch (valid) {
                        case true:
                        score = verify(answer, 'e', score);
                        break;
                        case false:
                        printf("Please answer with (a|b|c|d). ");
                        scanf("%c",&answer);
                    }
                }
                
            break;
            case 8:
                printQuestion(count, "", "", "", "", "");
                scanf("%c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(answer);
                    switch (valid) {
                        case true:
                        score = verify(answer, 'e', score);
                        break;
                        case false:
                        printf("Please answer with (a|b|c|d). ");
                        scanf("%c",&answer);
                    }
                }
                
            break;
            case 9:
                printQuestion(count, "", "", "", "", "");
                scanf("%c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(answer);
                    switch (valid) {
                        case true:
                        score = verify(answer, 'e', score);
                        break;
                        case false:
                        printf("Please answer with (a|b|c|d). ");
                        scanf("%c",&answer);
                    }
                }
                
            break;
            case 10:
                printQuestion(count, "", "", "", "", "");
                scanf("%c",&answer);
                while (!valid) {
                    valid = checkAnswerValidity(answer);
                    switch (valid) {
                        case true:
                        score = verify(answer, 'e', score);
                        break;
                        case false:
                        printf("Please answer with (a|b|c|d). ");
                        scanf("%c",&answer);
                    }
                }
               
            break;
        }
        count++;
    }

    return score;
}

int trivia() {
    
    printf("\n Welcome to the Trivia section!\n");

    int count = 1;
    char anykey;
    while (count <= 10) {
        switch (count) {
            case 1:
                printf("\nTrivia %d:\n\tDid you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 2:
                printf("\nTrivia %d:\n\tDid you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 3:
                printf("\nTrivia %d:\n\tDid you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 4:
                printf("\nTrivia %d:\n\tDid you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 5:
                printf("\nTrivia %d:\n\tDid you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 6:
                printf("\nTrivia %d:\n\tDid you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 7:
                printf("\nTrivia %d:\n\tDid you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 8:
                printf("\nTrivia %d:\n\tDid you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 9:
                printf("\nTrivia %d:\n\tDid you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
            case 10:
                printf("\nTrivia %d:\n\tDid you know that ",count);
                printf("");
                printf("\n\nEnter any character to continue.");
                scanf(" %c", &anykey);
            break;
        }
        count++;
    }
}

int main () {
    int userchoice, score;
    bool valid = false;
    char again = 'y';

    while (again = 'y') {
        printf("Welcome the Aspirational Recycling Prevention Program.");
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
                printf("\nThank you for completing our quiz! Your score was %d/10!",score);
            break;
            case 2:
                trivia();
        }

        // Recomplete Loop
        // TODO : 'y' does not seem to loop back up to the top
        printf("\nWould you like to recomplete the ARPP? (y|n) ");
        scanf(" %c",&again);
        while (!valid) {
            switch (again) {
                case 'y':
                    valid == true;
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

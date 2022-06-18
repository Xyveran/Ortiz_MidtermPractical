// Ortiz_MidtermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void Questions();
std::string AnswerCheck(int questionNum, int answerNum);
int RandomNum(int min, int max);


int main()
{
    srand((unsigned)time(NULL));

    Questions();
}

void Questions() {

    // Generate a random number between 1 and 5
    int number = RandomNum(1, 5);
    char answer = '0';

    std::cout << " Enter A, B, C, or D\n" << std::endl;

    switch (number)
    {
    case 1:
        std::cout << " Which planet in our solar system is the largest?\n"
            << "A. Earth \n"
            << "B. Saturn \n"
            << "C. Jupiter \n"
            << "D. Mercury \n" << std::endl;

        std::cin >> answer;
        std::cout << AnswerCheck(1, toupper(int(answer)));

            break;
    case 2:
        std::cout << " Which astrological sign is a crab?\n"
            << "A. Cancer \n"
            << "B. Sagittarius \n"
            << "C. Taurus \n"
            << "D. Aquarius \n" << std::endl;

        std::cin >> answer;
        std::cout << AnswerCheck(2, toupper(int(answer)));

        break;
    case 3:
        std::cout << " How many degrees are in a circle?\n"
            << "A. 180 \n"
            << "B. 360 \n"
            << "C. 540 \n"
            << "D. 720 \n" << std::endl;

        std::cin >> answer;
        std::cout << AnswerCheck(3, toupper(int(answer)));

        break;
    case 4:
        std::cout << " Han Solo is a character from which movie series?\n"
            << "A. Tremors \n"
            << "B. Men in Black \n"
            << "C. Lord of the Rings \n"
            << "D. Star Wars \n" << std::endl;

        std::cin >> answer;
        std::cout << AnswerCheck(4, toupper(int(answer)));

        break;
    case 5:
        std::cout << " Which animal is most popularly associated with ancient Egypt?\n"
            << "A. Cat \n"
            << "B. Horse \n"
            << "C. Deer \n"
            << "D. Slug \n" << std::endl;

        std::cin >> answer;
        std::cout << AnswerCheck(5, toupper(int(answer)));

        break;
    default:
        break;
    }
}
std::string AnswerCheck(int questionNum, int answerNum) {
    bool correct = false;
    std::string comment = "That's incorrect. ";

    // Determining if the input answer is correct for the displayed quesion
    if (questionNum == 1) {
        if (answerNum == 67) {
            correct = true;            
        }
    }
    if (questionNum == 2) {
        if (answerNum == 65)
            correct = true;
    }
    if (questionNum == 3) {
        if (answerNum == 66)
            correct = true;
    }
    if (questionNum == 4) {
        if (answerNum == 68)
            correct = true;
    }
    if (questionNum == 5) {
        if (answerNum == 65)
            correct = true;
    }

    if (correct) {
        comment = "That's right! \n";
    }
    // Showing the correct answer if the user selected an incorrect answer
    if (!correct) {
        if (questionNum == 1) {
            comment += "The answer is C. Jupiter. \n";
        }
        if (questionNum == 2) {
            comment += "The answer is A. Cancer. \n";
        }
        if (questionNum == 3) {
            comment += "The answer is B. 360. \n";
        }
        if (questionNum == 4) {
            comment += "The answer is D. Star Wars. \n";
        }
        if (questionNum == 5) {
            comment += "The answer is A. Cat. \n";
        }
    }

    return comment;
}
int RandomNum(int min, int max) {
    int x = min + (rand() % max);
    return x;
}
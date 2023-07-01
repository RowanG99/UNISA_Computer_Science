#include <iostream>
using namespace std;

void getJudgeData(double& score)
{
    double unValidatedScore = 0.0;
    cout << "Please provide your score: " <<endl;
    cin >> unValidatedScore;
    // Determining whether or not the inputted value meets the critera - 0-10
    if(unValidatedScore >= 0 && unValidatedScore <= 10)
    {
        // Setting the validated score to the score
        score = unValidatedScore;
    }
    else
    {
        // If the score was not valid, the score was assigned a value of -1
        score = -1;
        cout << "Not a valid score!" << endl;
    }
}

double calLowestScore(double score1, double score2, double score3, double score4, double score5)
{
    // Determining the min value using the min function - std
    double lowest = 0.0;
    return lowest = min(score1, min(score2, min(score3, min(score4, score5))));
}

double calHighestScore(double score1, double score2, double score3, double score4, double score5)
{
    // Determining the max value using the min function - std
    double highest = 0.0;
    return highest = max(score1, max(score2, max(score3, max(score4, score5))));
}

double calcScore(double scoreOne, double scoreTwo, double scoreThree, double scoreFour, double scoreFive)
{
    double lowestScore = 0.0, highestScore = 0.0, average = 0.0, sum = 0.0;
    // Calling the calLowestScore and calHighestScore functions and obtaining the values
    lowestScore = calLowestScore(scoreOne, scoreTwo, scoreThree, scoreFour, scoreFive);
    highestScore = calHighestScore(scoreOne, scoreTwo, scoreThree, scoreFour, scoreFive);

    // The if statements below are checking whether or not the scores 1 - 5 are equal to the lowest and highest
    if(scoreOne != lowestScore && scoreOne != highestScore)
    {
        sum += scoreOne;
    }

    if(scoreTwo != lowestScore && scoreTwo != highestScore)
    {
        sum += scoreTwo;
    }

    if(scoreThree != lowestScore && scoreThree != highestScore)
    {
        sum += scoreThree;
    }

    if(scoreFour != lowestScore && scoreFour != highestScore)
    {
        sum += scoreFour;
    }

    if(scoreFive != lowestScore && scoreFive != highestScore)
    {
        sum += scoreFive;
    }

    // Calculating the average by dividing the sum by 3
    average = sum/3;
    return average;
}

void displayOutput(double finalScore)
{
    // Displaying the final score
    cout << "The final score is; " << finalScore << endl;
}

int main()
{
    // Judges score variables
    double score1, score2, score3, score4, score5;
    // Final score - removed lowest & highest and averaged the remaining three
    double finalScore;
    // Calling the getJudgeData function which should obtain the judges input
    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5);
    // Calling the calcScore function which should calculate the the final score by removing lowest & highest and averaging the remaining three
    finalScore = calcScore(score1, score2, score3, score4, score5);
    // Calling the displayOutput function which should print the final score
    displayOutput(finalScore);
    return 0;
}

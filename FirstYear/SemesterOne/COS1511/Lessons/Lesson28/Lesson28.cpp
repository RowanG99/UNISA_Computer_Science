#include <iostream>
#include <string>
using namespace std;

const int ACTORS = 5;
struct Movie
{
    string title;
    string director;
    int year;
    string actors[ACTORS];
    int numActors;
};

void inputData(Movie &movieP)
{
    int i;
    char answer;
    cout << "Enter the movie's information:" << endl;
    cout << "Title: ";
    getline(cin, movieP.title, '\n');
    cout << "Director: ";
    getline(cin, movieP.director, '\n');
    cout << "Year: ";
    cin >> movieP.year;
    cout << "The actors: " << endl;

    i = 0;
    do
    {
        cout << "Actor no. " << i+1 << ": ";
        cin.get( );
        getline(cin, movieP.actors[i], '\n');
        i++;
        if(i < ACTORS)
        {
            cout << "More actors? (Y\N)";
            cin >> answer;
        }
    }while((answer == 'Y' || answer == 'y') && i < ACTORS);
    movieP.numActors = i;
}

void displayData(const Movie &movieP)
{
    cout << "Movie info" << endl;
    cout << "===========" << endl;
    cout << "Title: " << movieP.title << endl;
    cout << "Director: " << movieP.director << endl;
    cout << "Year: " << movieP.year << endl;
    cout << "Actors: " << endl;
    for(int i = 0; i < movieP.numActors; i++)
    {
        cout << '\t' << movieP.actors[i] << endl;
    }
}

bool directorActor(const Movie &movieP)
{
    for(int i = 0; i < movieP.numActors; i++)
    {
        if(movieP.actors[i] == movieP.director)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    Movie movieOne;
    inputData(movieOne);
    displayData(movieOne);
    if(directorActor(movieOne))
    {
        cout << "The director was also an actor";
    }
    else
    {
        cout << "The director wasn't an actor";
    }
    return 0;
}

//struct Shirt
//{
//    int size;
//    char style;
//    float price;
//};
//
//void inputData(Shirt &shirtP);
//void displayData(const Shirt &shirtP);
//
//int main()
//{
//    Shirt shirtOne;
//    inputData(shirtOne);
//    displayData(shirtOne);
//    return 0;
//}
//
//void inputData(Shirt &shirtP)
//{
//    cout << "Enter the size of the shirt : ";
//    cin >> shirtP.size;
//    cout << "Enter the style of the shirt (A/B/C): ";
//    cin >> shirtP.style;
//    cout << "Enter the price of the shirt: ";
//    cin >> shirtP.price;
//}
//
//void displayData(const Shirt &shirtP)
//{
//    cout << "Shirt Size: " << shirtP.size <<
//    " " << "Shirt Style: " << shirtP.style <<
//    " " << "Shirt Price: R" << shirtP.price;
//}

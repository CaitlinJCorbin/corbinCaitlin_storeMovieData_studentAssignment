/* Program name: Movie Data.cpp
*  Author: Caitlin J. Corbin
*  Date last updated: March 2, 2020
*  Purpose: Uses a structure named MovieData to store information
*/

#include <iostream>                 //includes console display
#include <string>                   //includes string
#include <sstream>                  //library that allows stings to be read like a stream

using namespace std;                //standard heading

struct MovieData                    //movie data structure
{
    string title;                   //initializes title
    string genre;                   //initializes genre
    string director;                //initializes director
    int yearReleased;               //initializes year released
    int runningTime;                //initializes running time
};

/*displays movie data to user*/
void displayMovie(MovieData m)                            //display movie function
{
    cout << "\n\nMovie Title: " << m.title << endl;       //prints out movie title
    cout << "Genre: " << m.genre << endl;                 //prints out movie genre
    cout << "Director: " << m.director << endl;           //prints out movie director
    cout << "Year Released: " << m.yearReleased << endl;  //prints out year released
    cout << "Running Time: " << m.runningTime << endl;    //prints out running time
}
/*user input data here*/
int main()                                                      //main function
{
    MovieData movieOne, movieTwo;                               //initialized moviedata and tags

    cout << "-Movie One-" << endl;                              //prints message
    cout << "Enter title: " << endl;                            //prompt for m1 title
    cin >> movieOne.title;                                      //inputs into m1 title
    cout << "Enter genre: " << endl;                            //prompt for m1 genre
    cin >> movieOne.genre;                                      //inputs into m1 genre
    cout << "Enter the directors name: " << endl;               //prompt for m1 director
    cin >> movieOne.director;                                   //inputs into m1 director
    cout << "Enter the year the movie was released: " << endl;  //prompt for m1 year released
    cin >> movieOne.yearReleased;                               //inputs into m1 year released
    cout << "Enter Running Time: " << endl;                     //prompt for m1 running time
    cin >> movieOne.runningTime;                                //inputs into m1 running time
    cout << endl;                                               //ends line

    cout << "-Movie Two-" << endl;                              //prints message
    cout << "Enter title: " << endl;                            //prompt for m2 title
    cin >> movieTwo.title;                                      //inputs into m2 title
    cout << "Enter genre: " << endl;                            //prompt for m2 genre
    cin >> movieTwo.genre;                                      //inputs into m2 genre
    cout << "Enter the directors name: " << endl;               //prompt for m2 director
    cin >> movieTwo.director;                                   //inputs into m2 director
    cout << "Enter year: " << endl;                             //prompt for m2 year released
    cin >> movieTwo.yearReleased;                               //inputs into m2 year release
    cout << "Enter Running Time: " << endl;                     //prompt for m2 running time
    cin >> movieTwo.runningTime;                                //inputs into m2 running time

    displayMovie(movieOne);                                     //calls movieOne
    displayMovie(movieTwo);                                     //calls movieTwo


return 0;                                                       //end
}




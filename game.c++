#include <iostream>
#include <random>
using namespace std;

void selrow();
void selcol();
int rows, column;
int main()
{
  int row = 4;
  int col = 4;

  bool ships[row][col];

  random_device rd;
  mt19937 mt(rd());
  uniform_int_distribution<int> dist(0, 1);
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      ships[i][j] = dist(mt);
    }
  }

  //   bool ships[4][4] = {
  //     { 0, 1, 1, 0 },
  //     { 0, 0, 0, 0 },
  //     { 0, 0, 1, 0 },
  //     { 0, 0, 1, 0 }
  //   };

  int hits = 0;
  int numberOfTurns = 0;

  while (hits < 4)
  {

    cout << "Selecting coordinates\n";
    selrow();

    if (rows >= 4)
    {
      cout << "Please enter number between 0 to 3!\n";
      selrow();
    }
    selcol();
    if (column >= 4)
    {
      cout << "Please enter number between 0 to 3!\n";
      selcol();
    }

    if (ships[rows][column])
    {

      ships[rows][column] = 0;

      hits++;

      cout << "Hit! " << (4 - hits) << " left.\n\n";
    }
    else
    {

      cout << "Miss\n\n";
    }

    numberOfTurns++;
  }

  cout << "Victory!\n";
  cout << "You won in " << numberOfTurns << " turns";

  return 0;
}
void selrow()
{
  cout << "Choose a row number between 0 and 3: ";
  cin >> rows;
}
void selcol()
{
  cout << "Choose a column number between 0 and 3: ";
  cin >> column;
}
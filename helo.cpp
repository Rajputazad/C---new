#include <iostream>
#include <string>
using namespace std;

int main(){
//     int x;
//     cout << "enter a number ";
//     cin >> x ;
//      cin.ignore();
//     cout << "hello world " << x << endl;
//     // string x;
//     string y;
//     // cin >> y ;
//     cout << "enter a string ";
//     getline (cin,y);
//     cout << "hello world " << y << "\n";
//  string myNumbers[5] = {"{10,10}", "{20,sc}", "30", "40", "50"};
// for (string i : myNumbers) {
//   cout << i << "\n";
// }

string letters[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};
// letters[0][1][2]="j";
cout << sizeof(letters) << endl;


for (int i = 0; i < 2 ; i++)
{
    for (int j = 0; j < 2; j++)
    {
       for (int k = 0; k < 2 ; k++)
       {
      cout << letters[i][j][k] << endl;
       }
       
    }
    
}

return 0;


}
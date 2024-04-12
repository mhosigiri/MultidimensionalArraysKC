/*
Anish KC
Dr. T
04-11-2024
COSC 1437 58002
  */
#include <iostream>

using namespace std;

int main() {
  const int CITY = 2;
  const int WEEK = 7;

  int temperature[CITY][WEEK];
  int cityOne[WEEK];
  int cityTwo[WEEK];

  cout << "Enter all temperature for a week of first city" << endl;
  for (int i = 0; i < WEEK; ++i){
    cout << "Day " << (i + 1) << ": ";
    cin >> cityOne[i];
  }
  cout << "Enter all temperature for a week of second city" << endl;
  for(int i = 0; i < WEEK; ++i){
    cout << "Day " << (i + 1) << ": ";
    cin >> cityTwo[i];
  }

  for(int i = 0; i < CITY; ++i){
    for(int j = 0; j < WEEK; ++j){
      if(i == 0){
        temperature[i][j] = cityOne[j];
      } else {
        temperature[i][j] = cityTwo[j];
      }
    }
  }

  cout << "\nDisplaying Values: \n";
  for(int i = 0; i < CITY; ++i){
    for(int j = 0; j < WEEK; ++j){
      cout << "City " << (i + 1) << ", Day " << (j + 1) << ": " << temperature[i][j] << endl;
    }
  }

  return 0;
  
}
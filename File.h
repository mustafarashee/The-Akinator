#include<iostream>
#include<fstream>
using namespace std;
class File
{
  public:
  void file (int line)
  {
    string temp;
    int i=1;
    ifstream quest("questions.txt");
    while(getline(quest , temp))
    {
      if(i==line)
      {
      cout << temp << endl;
      break;
      }
      i++;
    }
  }

};
#include<iostream>
#include<fstream>
using namespace std;
class File
{
  public:
  void file (int line)
  {
   // string temp;
     index=1;
    ifstream quest("questions.txt");
    while(getline(quest , temp))
    {
      if(index==line)
      {
      cout << temp << endl;
      break;
      }
      index++;
    }
  }

  private:
  string temp;
  int index;

};
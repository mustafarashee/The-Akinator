#include <iostream>
using namespace std;
#include "fulltime_corporate.h"

class lecturar:public dt{

public:
void mlecturar(){
b=teach.MLecturers();

  if (b==1)
  {
ftc.MFTC();
  }

}
protected:
int b;
dt teach;
FTCORP ftc;
};
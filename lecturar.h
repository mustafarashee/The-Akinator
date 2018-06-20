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
void f_lecturar()
{
  b=teach.female_lec();
  if (b==1)
  {
    teach.FFullTimeCooperative();
  }
}
protected:
int b;
dt teach;
FTCORP ftc;
};
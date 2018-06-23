#include <iostream>
#include "fulltime_corporate.h"
using namespace std;

class lecturar
{
public:
void mlecturar()
  {
  if (teach.MLecturers()==1)
  {  
    ftc.MFTC();
  }
}
void f_lecturar()
{
  
  if (teach.female_lec() == 1)
  {
    teach.FFullTimeCooperative();
  }
}
protected:
dt teach;
FTCORP ftc;
};
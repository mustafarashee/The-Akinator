#include <iostream>
#include "fulltime_corporate.h"
using namespace std;

class lecturar : public dt
{
public:
int mlecturar()
  {
    Teacher = new dt();
  if (Teacher->mlecturar()==1)
  {   
    Teacher = new FTCORP();
    Teacher->MFullTimeCooperative();
  }
}
int f_lecturar()
{
   Teacher = new dt();
  if (Teacher->f_lecturar() == 1)
  {
    Teacher->FFullTimeCooperative();
  }
}
};
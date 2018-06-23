#include <iostream>
#include "lecturar.h"
using namespace std;

class Assistantprofs
{
  public:
void MAssistantprofs()
{
if (teach.MAssistantprofs()==1)
{
lec.mlecturar();
}
}
void FAssistantprofs()
{
  if (teach.F_Assistantprofs() == 1)
  {
    lec.f_lecturar();
  }
}
private:
dt teach;
lecturar lec;
};
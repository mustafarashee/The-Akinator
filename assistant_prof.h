#include <iostream>
#include "lecturar.h"
using namespace std;

class Assistantprofs : public dt
{
  public:
int MAssistantprofs()
{
  Teacher = new dt();
if (Teacher->MAssistantprofs()==1)
{
  Teacher = new lecturar();
  Teacher->mlecturar();
}
}
int FAssistantprofs()
{
   Teacher = new dt();
  if (Teacher->FAssistantprofs() == 1)
  {
     Teacher = new lecturar();
     Teacher->f_lecturar();
  }
}
};
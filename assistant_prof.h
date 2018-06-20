
#include <iostream>
#include "lecturar.h"

using namespace std;

class Assistantprofs:public dt
{
  public:
void MAssistantprofs()
{
b=teach.MAssistantprofs();
if (b==1)
{
lec.mlecturar();
}
}
void FAssistantprofs()
{
  b=teach.F_Assistantprofs();
  if (b==1)
  {
    lec.f_lecturar();
  }
}
private:
dt teach;
lecturar lec;
int b;
};
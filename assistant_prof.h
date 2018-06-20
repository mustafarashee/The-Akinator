
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
private:
dt teach;
lecturar lec;
int b;
};
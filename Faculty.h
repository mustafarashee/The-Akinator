#include <iostream>
#include "Gender.h"
using namespace std;

class faculty : public dt
{
  
public:
int  Faculty()
{
Teacher = new dt(); 
if(Teacher->Faculty()==1)
{
  Teacher = new teacher_gender();
  Teacher->permenent();
}
else
{
  Teacher = new teacher_gender();
  Teacher->visiting();
}
}
};
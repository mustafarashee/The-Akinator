#include <iostream>
#include "associate_prof.h"
using namespace std;

class teacher_gender : public dt
{
public:

void permenent()
{
  Teacher = new dt();
if (Teacher->gender() == 1)
{
  Teacher=new associate();
  Teacher->m_associate();
}
else
{
  Teacher = new Assistantprofs();
 Teacher->FAssistantprofs();
}
}
void visiting()
  {
    Teacher = new dt();
  if(Teacher->gender() == 1) 
  {
    Teacher->MVisitingfaculty();
   }
else
{
  Teacher->FVisitingfaculty();
}
  }
};

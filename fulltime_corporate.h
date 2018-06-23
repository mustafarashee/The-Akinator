#include <iostream>
using namespace std;
#include "decision_tree.h"
class FTCORP : public dt
{
public:
void MFullTimeCooperative()
{
Teacher=new dt();  
Teacher->MFullTimeCooperative();
}
};
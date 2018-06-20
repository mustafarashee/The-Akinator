#include <iostream>
#include <string>
using namespace std;
class dt
{
  public:
int faculty(void)
{
  cout<<"Does your teacher permenent?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    return 1;
  }
  else 
  {
   return 0;
  }
}
int gender()
{

  cout<<"Does your teacher male?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
   return 1;
  }
  else 
  {
    return 0;
  }
}
int MAssosiate(void)
{
  cout<<"Does your teacher Assosiate Professor?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    cout<<"Is your teacher Depertment's chairperson?"<<endl;
    cin>>ans;
   if(ans == "Yes" || ans == "yes")
   {
     cout<<"Your Teachers is DR SADIQ ALI KHAN"<<endl;
   }
   else
   {
     cout<<"Your Teachers is DR NADEEM MEHMOOD"<<endl;
   }

  }
  else 
  {
return 1;
  }}
  int MAssistantprofs()
{
  cout<<"Does your teacher Assistantprof?"<<endl;
  cin>>this->ans;
  if(this->ans == "Yes" || this->ans == "yes")
 {  
  cout<<"Does your teacher depertment's x-chairperson?"<<endl;
  cin>>this->ans;
  if(this->ans == "Yes" || this->ans == "yes")
  {
    cout<<"Your teacher is MR BADAR SAMI"<<endl;
    goto end;
  }
  cout<<"Is your teacher phd?"<<endl;
  cin>>this->ans;
   if (this->ans == "Yes" || this->ans == "yes")
  {  
      cout<<"Is your teacher x-student advisor?"<<endl;
      cin>>ans;
      if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is MR FARHAN AHMED SIDQUI"<<endl;
        goto end;
      }

      cout<<"Does your teacher teaches Artifical Intellegence course?"<<endl;
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is DR NADEEM MEHMOOD"<<endl;
        goto end;
      }

      cout<<"Does your teacher teaches Networking?"<<endl;
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is DR MUHAMMAD SAEED"<<endl;
        goto end;
      }

      cout<<"Is your teacher teaches Software project management?"<<endl;
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is MR HUSSAIN SALEEM"<<endl;
        goto end;
      }

      cout<<"Is your teacher teaches database management system?"<<endl;
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is MR S. M. KHALID JAMAL"<<endl;
        goto end;
      }

      cout<<"Is your teacher teaches related to data mining?"<<endl;
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is DR TAHSEEN AHMED JILANI"<<endl;
        goto end;
      }
      else
      {
        cout<<"Your teacher is DR SYED ASIM ALI"<<endl;
        goto end;
      }

    }
    else
    {
      cout<<"Your teacher is MR SYED JAMAL HUSSAIN"<<endl;
      goto end;
    }
  }
  else
  {
    //next class
    return 1;
  };
  end:;
}
int MLecturers()
{
    cout<<"Is your teacher Lecturer?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
  cout<<"Is your teacher student's advisor?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    cout<<"Your teacher is MR TAHA BIN NIAZ"<<endl;
  }
 else 
  {
    cout<<"Your teacher is MR M. SAJID"<<endl;
  }
  }
  else 

{
  return 1;
}
}
void MFullTimeCooperative() 
{
  cout<<"Is your teacher teaches related to statistics and probability?"<<endl;
  cin>>this->ans;
  if(this->ans == "Yes" || ans == "yes")
  {
    cout<<"Your teacher is MR SAAD AKBER"<<endl;
    goto end;
  }
  cout<<"Is your teacher teaches related to mathematics?"<<endl;
  cin>>this->ans;
   if(this->ans == "yes" || ans == "Yes")
  {
  cout<<"Your teacher is MR USMAN AMJAD"<<endl;
  goto end;
  }
  else 
  {
    cout<<"Your teacher is MR S. MEESAM ALI ZAIDI"<<endl;
  }
  end:;
}

  protected:
  string ans;

};
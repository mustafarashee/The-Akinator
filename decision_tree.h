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
int F_Assistantprofs()
{
  cout<<"Is your teacher Assistant professor?"<<endl;
  cin>>this->ans;
  if(this->ans == "Yes" || this->ans == "yes")
 {
   cout<<"Your teacher is DR HUMERA TARIQ"<<endl;
 }
 else 
  {
  return 1;
  }
}
int female_lec(void)
{
cout<<"Does your teacher Lecturer?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
  cout<<"Does your teacher student's advisor?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    cout<<"Your teacher is MS HUMERA BASHEER"<<endl;
    goto end;
  }
  cout << "Have your teacher done her MBA in 2009 from KUBS ?" << endl;	
	cin >> ans;
			if (ans == "yes" || ans == "Yes")
			{
				cout << "your teacher is MARYAM FEROZ"<<endl;
        goto end;
			}
    cout << "is your teacher's best scope is operating systems?" << endl;
		cin >> ans;
				if (ans == "yes" || ans == "Yes")
				{
					cout << "Your teacher is MADIHA KHURRAM"<<endl;
          goto end;
				}
        else 
        {
          cout << "Your teacher is SHAISTA RAEES"<<endl;
          goto end;
         }
 }
 else
 {
  return 1;
 }

 end:;
}

void FFullTimeCooperative()
{
   cout << "Does your teacher recently recieve gold medal from PAF KIET?" << endl;				
	 cin >> ans;
					if (ans == "yes" || ans == "Yes")
					{
						cout << "Your teacher is YUSRA MANSOOR"<<endl;
            goto end;
					}
    cout << "Does your teacher teaches assembly language course?" << endl;
	  cin >> ans;
		if (ans == "yes")
		{
			cout << "Your teacher is MS UROOJ WAHEED"<<endl;
      goto end;
		}
    else
    {
      cout << "Your teacher is MS AEMON ABDUL RAZZQUE"<<endl;
      goto end;
    }
    end:;      
}
void FVisitingfaculty(void)
	{
		cout << "Is your teacher is from urdu department?" << endl;
		cin >> ans;
		if (ans == "yes")
		{
			cout << "Is your teacher is assistant professor in urdu department?" << endl;
			cin >> ans;
			if (ans == "yes")
			{
				cout << "your teache is Rahat Afshan";
			}
			else if (ans != "yes")
			{
				cout << "Is your teacher is professor in Urdu department?" << endl;
				cin >> ans;
				if (ans == "yes")
				{
					cout << "your teacher is Tazeem-ul-Firdoos";
				}
				else {
					cout << "your teacher is Sohaila Farooqi";
				}

			}
		}
			else if (ans != "yes")
			{
				cout << "Is your teacher is from maths department?" << endl;
				cin >> ans;
				if (ans == "yes")
				{

					cout << "does your teacher wear gown in class" << endl;
					cin >> ans;
					if (ans == "yes")
					{
						cout << "your teacher is Noor Fatima";
					}
					else{
						cout << "your teacher is HAFSA JAFRI";
					}
				}
				else {
					cout << "your teacher is Zufishan Ghani";
				}
			}
		}
    void MVisitingfaculty() 
  
    {
      cout << "Is your teacher teaches data communication and networking in  department?" << endl;
				cin >> ans;
				if (ans == "yes")
        {
         cout << "your teacher is NADEEM AHMAD";
         goto end;
        }
        else if(ans != "yes")
        {
          cout<<"Is your lecturer at  Sheikh Zayed Islamic Center ?"<<endl;
					cin >> ans;
				         	if (ans == "yes")
				            	{
					            	cout << "your teacher is MR. ABDUL BARI";
                         goto end;
					             }
                       else
                        {
				                 cout << "Is your teacher teaches physics department?" << endl;
			                	cin >> ans;
				                if (ans == "yes")
				                   {
                           	cout << "does your teacher also teaches at ISPA?" << endl;
				                  	cin >> ans;
					                   if (ans == "yes")
				                     	{
						                   cout << "your teacher is KHURRAM IQBAL";
                               goto end;
					                    }
				                      	else{
						                     cout << "your teacher is INTIKHAB ULFAT";
                                 goto end;
					                          }
                          }
				
				        else if(ans != "yes")
            {   
                   cout<<"Does your teacher teaches islamiat in your dept?"<<endl;
					         cin >> ans;
				         	if (ans == "yes")
				            	{
					            	cout << "your teacher is MR MOHSIN";
                         goto end;
					             }
                   else if(ans != "yes")
                {
                      cout<<"Does your teacher teaches pst in your dept?"<<endl;
					         cin >> ans;
				         	if (ans == "yes")
				            	{
					            	cout << "your teacher is DR MOIZ";
                         goto end;
					            }
                       else if(ans != "yes")
                    {
                        cout<<"Does your teacher teaches maths in your dept?"<<endl;
					         cin >> ans;
				         	if (ans == "yes")
				            	{
					            	cout << "your teacher is ASIF IQBAL";
                         goto end;
					            }

                       else if(ans != "yes")
                      {
                        cout<<"Does your teacher GOLD MEDALIST?"<<endl;
					         cin >> ans;
				         	if (ans == "yes")
				            	{
					            	cout << "your teacher is ANWAR MEHMOOD";
                         goto end;
                      }
                       else{
                         cout << "your teacher is ZEESHAN ALAM NAYYAR";
                           }
                      }
                   }
	  	          }
            }

                        }
        } 
      end:;
  }
  protected:
  string ans;

};
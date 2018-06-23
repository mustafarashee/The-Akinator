#include <iostream>
#include <string>
#include"File.h"

using namespace std;
class dt 
{
  public:
int faculty(void)
{
  fptr.file(1);
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
  fptr.file(2);
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
  fptr.file(3);
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    fptr.file(4);
    cin>>ans;
   if(ans == "Yes" || ans == "yes")
   {
     fptr.file(5);
   }
   else
   {
     fptr.file(6);
   }

  }
  else 
  {
return 1;
  }}
  int MAssistantprofs()
{
  fptr.file(7);
  cin>>this->ans;
  if(this->ans == "Yes" || this->ans == "yes")
 { 
  fptr.file(8);  
  cin>>this->ans;
  if(this->ans == "Yes" || this->ans == "yes")
  {
    fptr.file(9);
    goto end;
  }
  fptr.file(10);
  cin>>this->ans;
   if (this->ans == "Yes" || this->ans == "yes")
  {  
     fptr.file(11);
      cin>>ans;
      if (ans == "Yes" || ans == "yes")
      {
        fptr.file(12);
        goto end;
      }

      fptr.file(13);
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        fptr.file(14);
        goto end;
      }
      fptr.file(15);
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        fptr.file(16);
        goto end;
      }
      fptr.file(17);
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        fptr.file(18);
        goto end;
      }
      fptr.file(19);
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        fptr.file(20);
        goto end;
      }
      fptr.file(21);
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        fptr.file(22);
        goto end;
      }
      else
      {
        fptr.file(23);
        goto end;
      }

    }
    else
    {
      fptr.file(24);
      goto end;
    }
  }
  else
  {
    return 1;
  };
  end:;
}
int MLecturers()
{
  fptr.file(25);
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    fptr.file(26);
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    fptr.file(27);
  }
 else 
  {
    fptr.file(28);
  }
  }
  else 

{
  return 1;
}
}
void MFullTimeCooperative() 
{
  fptr.file(29);
  cin>>this->ans;
  if(this->ans == "Yes" || ans == "yes")
  {
    fptr.file(30);
    goto end;
  }
  fptr.file(31);
  cin>>this->ans;
   if(this->ans == "yes" || ans == "Yes")
  {
  fptr.file(32);
  goto end;
  }
  else 
  {
    fptr.file(33);
  }
  end:;
}
int F_Assistantprofs()
{
  fptr.file(34);
  cin>>this->ans;
  if(this->ans == "Yes" || this->ans == "yes")
 {
   fptr.file(35);
 }
 else 
  {
  return 1;
  }
}
int female_lec(void)
{
  fptr.file(36);
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
  fptr.file(37);
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    fptr.file(38);
    goto end;
  }
  fptr.file(39);
	cin >> ans;
			if (ans == "yes" || ans == "Yes")
			{
        fptr.file(40);
        goto end;
			}
      fptr.file(41);
	  	cin >> ans;
			if (ans == "yes" || ans == "Yes")
				{
          fptr.file(42);
          goto end;
				}
        else 
        {
          fptr.file(43);
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
  fptr.file(44);			
	 cin >> ans;
					if (ans == "yes" || ans == "Yes")
					{
            fptr.file(45);
            goto end;
					}
    fptr.file(46);
	  cin >> ans;
		if (ans == "yes")
		{
       fptr.file(47);
      goto end;
		}
    else
    {
      fptr.file(48);
      goto end;
    }
    end:;      
}
void FVisitingfaculty(void)
	{
    fptr.file(49);
		cin >> ans;
		if (ans == "yes")
		{
      fptr.file(50);
			cin >> ans;
			if (ans == "yes")
			{
        fptr.file(51);
			}
			else if (ans != "yes")
			{
        fptr.file(52);
				cin >> ans;
				if (ans == "yes")
				{
          fptr.file(53);
				}
				else {
          fptr.file(54);
				}

			}
		}
			else if (ans != "yes")
			{
        fptr.file(55);
				cin >> ans;
				if (ans == "yes")
				{
          fptr.file(56);
					cin >> ans;
					if (ans == "yes")
					{
            fptr.file(57);
					}
					else{
            fptr.file(58);
					}
				}
				else {
          fptr.file(59);
				}
			}
		}
    void MVisitingfaculty() 
  
    {
      fptr.file(60);
				cin >> ans;
				if (ans == "yes")
        {
          fptr.file(61);
         goto end;
        }
        else if(ans != "yes")
        {
          fptr.file(62);
					cin >> ans;
				         	if (ans == "yes")
				            	{
                        fptr.file(63);
                         goto end;
					             }
                       else
                        {
                          fptr.file(64);
			                	cin >> ans;
				                if (ans == "yes")
				                   {
                             fptr.file(65);
				                  	cin >> ans;
					                   if (ans == "yes")
				                     	{
                                 fptr.file(66);
                               goto end;
					                    }
				                      	else{
                                  fptr.file(67);
                                 goto end;
					                          }
                          }
				
				        else if(ans != "yes")
            {
                  fptr.file(68);
					         cin >> ans;
				         	if (ans == "yes")
				            	{
                        fptr.file(69);
                         goto end;
					             }
                   else if(ans != "yes")
                {
                  fptr.file(70);
					         cin >> ans;
				         	if (ans == "yes")
				            	{
                        fptr.file(71);
                         goto end;
					            }
                       else if(ans != "yes")
                    {
                      fptr.file(72);
					         cin >> ans;
				         	if (ans == "yes")
				            	{
                        fptr.file(73);
                         goto end;
					            }

                       else if(ans != "yes")
                      {
                        fptr.file(74);
					         cin >> ans;
				         	if (ans == "yes")
				            	{
                        fptr.file(75);
                         goto end;
                      }
                       else{
                         fptr.file(76);
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
  File fptr;

};
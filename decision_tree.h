#include <iostream>
#include <string>
#include"File.h"

using namespace std;
class dt 
{
  public:
int virtual Faculty(void)
{
 //fptr.file(1);
//question 1
  do{
     system("cls");
     cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
    
     fptr.file(1);
  cin>>ans;}
  while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
  if(ans == "Yes" || ans == "yes"||ans=="YES")
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
  //question 2
  do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
  fptr.file(2);
  cin>>ans;}
  while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
  if(ans == "Yes" || ans == "yes"|| ans== "YES")
  {
   return 1;
  }
  else 
  {
    return 0;
  }
}
int virtual m_associate(void)
{//question 3
  do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
  fptr.file(3);
  cin>>ans;}
  while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
  if(ans == "Yes" || ans == "yes"|| ans== "YES")
  { //question 4
    do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
    fptr.file(4);
    cin>>ans;}
    while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
   if(ans == "Yes" || ans == "yes"||ans=="YES")
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
  int virtual MAssistantprofs()
{//question 5
  do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
  fptr.file(7);
    cin>>this->ans;}
  while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
  if(this->ans == "Yes" || this->ans == "yes"||this->ans=="YES")
 { //question 6
   do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
  fptr.file(8);  
  cin>>this->ans;}
  while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
 if(this->ans == "Yes" || this->ans == "yes"||this->ans=="YES")
  {
    fptr.file(9);
    goto end;
  }
  //question 7
  do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
  fptr.file(10);
  cin>>this->ans;}
  while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
   if (this->ans == "Yes" || this->ans == "yes"||this->ans=="YES")
  { 
    //question 8
     do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
     fptr.file(11);
      cin>>ans;}
      while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
      if (ans == "Yes" || ans == "yes"||ans=="YES")
      {
        fptr.file(12);
        goto end;
      }
      //question 9
do{
  system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
      fptr.file(13);
      cin>>ans;}
       while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
       if (ans == "Yes" || ans == "yes"||ans=="YES")
      {
        fptr.file(14);
        goto end;
      }
      //question 10
      do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
      fptr.file(15);
      cin>>ans;}
      while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
       if (ans == "Yes" || ans == "yes"||ans=="YES")
      {
        fptr.file(16);
        goto end;
      }
       do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
      fptr.file(17);
      cin>>ans;}
      while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
       if (ans == "Yes" || ans == "yes"||ans=="YES")
      { 
        fptr.file(18);
        goto end;
      }
      do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
      fptr.file(19);
      cin>>ans;}
      while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
       if (ans == "Yes" || ans == "yes"||ans=="YES")
      {
        fptr.file(20);
        goto end;
      }
      do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
      fptr.file(21);
      cin>>ans;}
       while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
       if (ans == "Yes" || ans == "yes"||ans=="YES")
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
int virtual mlecturar()
{
   do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
  fptr.file(25);
  cin>>ans;}
  while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
  if(ans == "Yes" || ans == "yes"||ans=="YES")
  {
    do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
    fptr.file(26);
  cin>>ans;}
  while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
  if(ans == "Yes" || ans == "yes"||ans=="YES")
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
void virtual MFullTimeCooperative() 
{
  do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
  fptr.file(29);
  cin>>ans;}
  while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
  if(ans == "Yes" || ans == "yes"||ans=="YES")
  {
    fptr.file(30);
    goto end;
  }
  do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
  fptr.file(31);
  cin>>ans;}
  while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
   if(ans == "yes" || ans == "Yes"||ans=="YES")
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
int virtual FAssistantprofs()
{
  do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
  fptr.file(34);
  cin>>ans;}
  while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
  if(ans == "Yes" || ans == "yes"||ans=="YES")
 {
   fptr.file(35);
 }
 else 
  {
  return 1;
  }
}
int virtual f_lecturar(void)
{
  do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
  fptr.file(36);
  cin>>ans;}
  while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
  if(ans == "Yes" || ans == "yes"||ans=="YES")
  {
    do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
  fptr.file(37);
  cin>>ans;}
  while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
  if(ans == "Yes" || ans == "yes"||ans=="YES")
  {
    fptr.file(38);
    goto end;
  }
   do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
  fptr.file(39);
	cin >> ans;}
   while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
			if (ans == "yes" || ans == "Yes"||ans=="YES")
			{
        fptr.file(40);
        goto end;
			}
      do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
      fptr.file(41);
	  	cin >> ans;}
      while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
			if (ans == "yes" || ans == "Yes"||ans=="YES")
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
   do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
  fptr.file(44);			
	 cin >> ans;}
    while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
					if (ans == "yes" || ans == "Yes"||ans=="YES")
					{
            fptr.file(45);
            goto end;
					}
           do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
    fptr.file(46);
	  cin >> ans;}
    while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
		if (ans == "yes" || ans == "Yes"||ans=="YES")
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
       do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
    fptr.file(49);
		cin >> ans;}
    while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
	if (ans == "yes" || ans == "Yes"||ans=="YES")
		{do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
      fptr.file(50);
			cin >> ans;}
       while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
	  if (ans == "yes" || ans == "Yes"||ans=="YES")
			{
        fptr.file(51);
			}
			else if (ans != "yes"&& ans!="YES" && ans !="Yes")
			{
       do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;

        fptr.file(52);
				cin >> ans;}
        while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
					if (ans == "yes" || ans == "Yes"||ans=="YES")
				{
          fptr.file(53);
				}
				else {
          fptr.file(54);
				}

			}
		}
			else if (ans != "yes"&& ans!="YES" && ans !="Yes")
			{
        do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
        fptr.file(55);
				cin >> ans;}
         while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
			if (ans == "yes" || ans == "Yes"||ans=="YES")
				{
          do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
          fptr.file(56);
					cin >> ans;}
          while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
					if (ans == "yes" || ans == "Yes"||ans=="YES")
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
      do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
      fptr.file(60);
				cin >> ans;}
        while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
				if (ans == "yes" || ans == "Yes"||ans=="YES")
        {
          fptr.file(61);
         goto end;
        }
        	else if (ans != "yes"&& ans!="YES" && ans !="Yes")
        {
          do{system("cls");
         cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
          fptr.file(62);
					cin >> ans;}
          while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
				         if (ans == "yes" || ans == "Yes"||ans=="YES")
				            	{
                        fptr.file(63);
                         goto end;
					             }
                       else
                        {do{system("cls");
         cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
                          fptr.file(64);
			                	cin >> ans;}
                        while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
				               if (ans == "yes" || ans == "Yes"||ans=="YES")
				                   {
                             do{system("cls");
         cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
                             fptr.file(65);
				                  	cin >> ans;}
                          while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
					                   if (ans == "yes" || ans == "Yes"||ans=="YES")
				                     	{
                                 fptr.file(66);
                               goto end;
					                    }
				                      	else{
                                  fptr.file(67);
                                 goto end;
					                          }
                          }
				
				        else if (ans != "yes"&& ans!="YES" && ans !="Yes")
            {
              do{system("cls");
         cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
                  fptr.file(68);
					         cin >> ans;}
                    while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
				         	if (ans == "yes" || ans == "Yes"||ans=="YES")
				            	{
                        fptr.file(69);
                         goto end;
					             }
                   else if (ans != "yes"&& ans!="YES" && ans !="Yes")
                {
                   do{system("cls");
         cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
                  fptr.file(70);
					         cin >> ans;}
                    while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
                if (ans == "yes" || ans == "Yes"||ans=="YES")
				            	{
                        fptr.file(71);
                         goto end;
					            }
                      else if (ans != "yes"&& ans!="YES" && ans !="Yes")
                    {
                       do{system("cls");
         cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
                      fptr.file(72);
					         cin >> ans;}
                    while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
				         	if (ans == "yes" || ans == "Yes"||ans=="YES")
				            	{
                        fptr.file(73);
                         goto end;
					            }

                        else if (ans != "yes"&& ans!="YES" && ans !="Yes")
                      {
                         do{system("cls");
         cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
                        fptr.file(74);
					         cin >> ans;}
                    while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
				         	if (ans == "yes" || ans == "Yes"||ans=="YES")
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

 void virtual permenent()
 {
   //Abstract function
 }
 void virtual visiting()
 {
   //Abstract function
 }

 ~dt()
 {
   cout<<endl<<"DEStructor CAlled"<<endl;
   delete[] Teacher;
   Teacher = NULL;
 }
  protected:
  string ans;
  File fptr;
  dt *Teacher;

};
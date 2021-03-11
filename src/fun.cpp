unsigned int faStr1(const char *str)
{
    int num=0;
    int count=0;
    int check=0;

    
  while(str[num] != '\0') {
      
if (str[num]!=' ') 
{
      
    if (str[num] >= '0' && str[num] <= '9')
    {
        while(str[num]!=' ') {if (str[num] == '\0') break; num++;}
    }
      
    else {
        while (str[num] != ' ')
                             { 
            if (str[num] >= '0' && str[num] <= '9' && check==0)
                   {
                num++; check=1;
                   } 
          else num++;
                             }
                    if (check == 0)
					count++;
         }
      check=0;
}
	  num++;
  }
return count;
  
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
unsigned int faStr2(const char *str)
{
 
 int num=0;
    int count=0;
	int check=0;
    
    int CapLet=0;
    
  while(str[num] != '\0') 
  {
      

      
    if (str[num] > 64 && str[num] < 91 && check==0)
    {
	check=1;
        CapLet=1;
    }
	else if (str[num]==' ' && check==1)
	{
		if (CapLet==1) count++;
		CapLet=0;
		check=0;
	}
	else if ( str[num]!= ' ' && CapLet == 1 && check == 1 )
        {
            if ((str[num] >= 65 && str[num] <= 90) && (str[num] > 122 || str[num] < 65)) CapLet = 0;
            
        }
        num++;
    }
    if (CapLet==1 && check==1) 
	    count++;

return count;
}
 
///////////////////////////////////////////////////////////////////////////////////////////////////
unsigned int faStr3(const char *str)
{
    int num=0;
    int count=0;
    int Wcount=0;
    float Mcount=0;


    
  while(str[num] != '\0') 
  {
      
if (str[num]!=' ') 
{
      
  while (str[num]!=' ') 
  {
      count++;
      num++;
  }
    Wcount++;

}
      else num++;
  }
    Mcount=count/Wcount;
    int temp=Mcount;
	

 if (Mcount - temp >= 0.5) Mcount++;
 return temp;
  
}

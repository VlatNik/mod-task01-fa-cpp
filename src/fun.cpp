unsigned int faStr1(const char *str)
{
    int num=0;
    int count=0;
    int check=0;

    
  while(str[i] != '\0') {
      
if (str[num]!=' ') {
      
    if (str[num] >= '0' && str[num] <= '9')
    {
        check=1;
        while(str[num]!=' ') num++;
    }
      
    else if (str[num]!=' ') num++; 
    else if (check==0) count++;
                   }
  else num++;
      check=0;
}
     
return count;
  
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
unsigned int faStr2(const char *str)
{
 
 int num=0;
    int count=0;
    int LatLet=0;
    int CapLet=0;
    
  while(str[i] != '\0') 
  {
      
if (str[num]!=' ')
{
      
    if (str[num] > 64 && str[num] < 91)
    {
        CapLet=1;
        while(str[num]!=' ')
        {
        
        if (str[num] > 96 && str[num] < 123) 
           {
            LatLet=1;
        }
            else {
                LatLet=0;
                  while(str[num]!=' ')
            {
                num++;
            }
                 }
        num++;
    
        }}
        else while(str[num]!=' ')
            {
                num++;
            }
         
    }
  else num++;
}
      if (CapLet==1 && LatLet==1) count++;
      
     CapLet=0;
     LatLet=0;

          
     
return count;
}
 
///////////////////////////////////////////////////////////////////////////////////////////////////
unsigned int faStr3(const char *str)
{
    int num=0;
    int count=0;
    int Wcount=0;
    float Mcount=0;


    
  while(str[i] != '\0') 
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
      else {num++;}
  }
    Mcount=count/Wcount;
    int temp=Mcount;
 if (Mcount - temp >= 0.5) Mcount++;
 return temp;
  
}

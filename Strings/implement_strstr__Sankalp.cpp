int atoi(string str)
{
    bool isneg = false;;
    if(str[0] == '-')
        isneg = true;
    
    if(!isneg)
    {
    for(int i = 0 ; str[i] != '\0'; i++)
    {
      if(!(str[i] >= '0' && str[i] <= '9'))
      {
        return -1;
      }
    }
    
    int ans = 0;
    int mult = 1;
    for(int i = str.length() - 1; i>=0 ; i--)
    {
        ans = ans + (str[i] - '0')*mult;
        mult = mult *10;
     }
    
      return ans;
    }
    else
    {
    for(int i = 1 ; str[i] != '\0'; i++)
    {
      if(!(str[i] >= '0' && str[i] <= '9'))
      {
        return -1;
      }
    }
    
    int ans = 0;
    int mult = 1;
    for(int i = str.length() - 1; i>0 ; i--)
    {
        ans = ans + (str[i] - '0')*mult;
        mult = mult *10;
     }
    
      return -ans;
        
    }
}

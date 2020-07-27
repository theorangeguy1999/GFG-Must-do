int _stack :: getMin()
{
    if(s.empty())
        return -1;
    
    return minEle;
   //Your code here
}

/*returns poped element from stack*/
int _stack ::pop()
{
    if(s.empty())
        return -1;
    
    int temp = s.top();
    if(temp<minEle)
    {
        s.pop();
        int temp2 = minEle;
        minEle = 2*minEle - temp;
        return temp2;
    }
    else
    {
        s.pop();
        return temp;
    }
    
}

/*push element x into the stack*/
void _stack::push(int x)
{
    if(s.empty())
    {
        s.push(x);
        minEle = x;
        return;
    }
    
    if(x<minEle)
    {
        s.push(2*x - minEle);
        minEle = x;
    }
    else
        s.push(x);
    
    return;
   
}

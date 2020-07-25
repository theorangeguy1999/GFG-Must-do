void StackQueue :: push(int x)
 {
        // Your Code
        
        if(s1.empty())
            s1.push(x);
        
        else
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            s1.push(x);
            while(!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
        }
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        if(s1.empty())
            return -1;
        
        int temp = s1.top();
        s1.pop();
        return temp;
}

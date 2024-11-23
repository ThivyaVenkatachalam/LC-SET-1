bool isPalindrome(int x) 
{
    long int t=x,rem,r=0;
    if(x>0)
    {    
       while(t!=0)
    {
        rem=t%10;
        r=r*10+rem;
        t=t/10;
    }
    }
    return (x==r);
    
}

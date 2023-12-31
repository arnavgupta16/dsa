//https://leetcode.com/problems/find-the-pivot-integer/description/

class Solution 
{
public:
    int pivotInteger(int n)
    {
        if(n==1)
        {
            return 1;
        }
        int front=(1+n)*n/2;
        int back=0;
        for(int i=n;i>=1;i--)
        {
            if(back+i==front)
            {
                return i;
            }
            back+=i;
            front-=i;
        }
        return -1;
    }
};

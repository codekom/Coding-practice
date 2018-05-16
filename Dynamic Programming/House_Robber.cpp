class Solution {
public:
    /**
     * @param A: An array of non-negative integers
     * @return: The maximum amount of money you can rob tonight
     */
    long long houseRobber(vector<int> &A) {
        // write your code here
        long long n = A.size();
        if(n==0)
           return 0;
        else if(n==1 || n==2)
           return (n==1)?A[0]:max(A[0],A[1]);
        else if(n==3)
           return max(A[0]+A[2],A[1]);
        else
        {
            long long tmp1=A[0],tmp2=A[1],tmp3=A[0]+A[2],tmp4=0;
            for(long long i=3;i<n;i++)
            {
                tmp4 = A[i] + max(tmp1,tmp2);
                tmp1=tmp2;
                tmp2=tmp3;
                tmp3=tmp4;
            }
            return max(tmp2,max(tmp3,tmp4));
        }
    }
};

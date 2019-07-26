class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int arr[256];
        memset(arr,-1,sizeof(arr));
        arr[s[0]]=0;
        int max=1,cur=1,p=0;
        for(int i=1;i<n;i++){
            p=arr[s[i]];
            if(p==-1||i-cur>p){
                cur++;
            }
            else{
                if(cur>max){
                    max=cur;
                }
                cur=i-p;
            }
            arr[s[i]]=i;
        }
        if(cur>max){
            max=cur;
        }
        if(n==0){
            return 0;
        }
        return max;
    }
};

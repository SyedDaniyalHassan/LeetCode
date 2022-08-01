class Solution {
public:
    int tribonacci(int n) {
        if(n<3)
            return int(n!=0);
        int m=n+1;
        int arr[m];
        arr[0]=0;
        arr[1]=1;
        arr[2]=1;
        for(int i=3;i<m;++i)
        {
            arr[i] = arr[i-1] +arr[i-2] + arr[i-3];
        }
        return arr[n];
        
    }
};
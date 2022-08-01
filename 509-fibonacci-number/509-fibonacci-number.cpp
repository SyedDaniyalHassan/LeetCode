class Solution {
public:
    int fib(int n) {
        int m = n+1;
        int arr[m];
        if(n<2)
        {
            return n;
            
        }
        arr[0] = 0;
        arr[1] = 1;
        for(int i=2;i<m;i++)
        {
            arr[i] = arr[i-1] + arr[i-2];
            cout<<arr[i]<<endl;
        }
        
        return arr[n];
        
        
    }
};
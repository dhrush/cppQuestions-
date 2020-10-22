class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) 
	{
	    long long cur_min = arr[0]; 
        long long cur_max = arr[0]; 
        
        long long maxP = arr[0]; 
        
        for (int i = 1; i < n; i++) 
        { 
            // When multiplied by -ve number, 
            // maxVal becomes minVal 
            // and minVal becomes maxVal. 
            if (arr[i] < 0) 
                swap(cur_max, cur_min); 
        
            // maxVal and minVal stores the 
            // product of subarray ending at arr[i]. 
            cur_max = max((long long)arr[i], cur_max * (long long)arr[i]); 
            cur_min = min((long long)arr[i], cur_min * (long long)arr[i]); 
        
            // Max Product of array. 
            maxP = max(maxP, cur_max); 
        } 
        
        // Return maximum product found in array. 
        return maxP;
	    
	}
};
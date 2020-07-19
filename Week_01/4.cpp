class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int num = m;
       for(int i= 0; i < n; ++i)
       {
            nums1[num] = nums2[i];
            num = num +1;
            
       }
       for(int j = 0; j < m+n; ++j)
       {
           for(int k = j+1; k < m+n; ++k)
           {
               if(nums1[j] > nums1[k])
               {
                   int tmp = nums1[j];
                   nums1[j] = nums1[k];
                   nums1[k] = tmp;
               }
           }
       }

    }
};
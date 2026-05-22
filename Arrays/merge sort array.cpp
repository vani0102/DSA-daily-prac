//BRUTE SOLUTION
/*Copy valid elements of nums1
Copy all elements of nums2
Store them in a temporary vector
Sort the vector
Copy back into nums1*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;

        //copy nums1 in temp
        for(int i=0;i<m;i++){
            temp.push_back(nums1[i]);
        }
        //nums2 in temp
        for(int i=0;i<n;i++){
            temp.push_back(nums2[i]);
        }
        //sort
        sort(temp.begin(),temp.end());

        //copy back to nums1
        for(int i=0;i<m+n;i++){
            nums1[i]=temp[i];
        }
    }
};

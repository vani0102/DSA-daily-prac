//BETTER SOLN
/*instead of sorting we can directly just compare both the arrays and store the smaller one of them into a temp array using 2 pointer method(i&j) */

class solution{
public:
void merge(vector<int>& nums1, int m,vector<int>& nums2, int n){
  vector<int> temp;
int i = 0;
int j = 0;
//compare arrays
while(i<m && j<n){
if(nums1[i]<=nums2[j]){
temp.push_back(nums1[i]);
  i++;
}else{
temp.push_back(nums2[j])
  j++;
  }
}
// Remaining elements of nums1 while(i < m)
  {
    temp.push_back(nums1[i]);
i++; 
} 
// Remaining elements of nums2
while(j < n) {
  temp.push_back(nums2[j]);
  j++;
} 
// Copy back
for(int k = 0; k < m+n; k++) { 
  nums1[k] = temp[k];
} } };

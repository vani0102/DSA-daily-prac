class solution {
public:

void rotateArrayByOne(vector<int>& nums){

int temp = nums[nums.size()-1];
for(int i=nums.size()-1;i>=0;i--){
nums[i+1]=nums[i]
  }
nums[0]=temp;

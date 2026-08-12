class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0,r=0;
        unordered_map<int,int> mp;
        int mx = 0,t=0;

        while(r<n){
            int num = nums[r];
            if(mp[num]==k){
                while(l<r && nums[l]!=num){
                    mp[nums[l]]--;
                    l++;
                }
                l++;
            }
            else{
                mp[num]++;
            }
            // cout<<l<<"---"<<r<<endl;
            t = r-l+1;
            mx = max(mx,t);
            r++;
        }
        return mx;
    }
};
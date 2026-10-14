class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int id, int vd) {
        multiset<long long>m;
        for(int i=0;i<nums.size();i++)
        {
            if(i>id)
            {
                m.erase(m.find((long long)nums[i-id-1]));
            }
            long long x=nums[i];
            auto it=m.lower_bound(x-vd);
            if(it!=m.end() && *it<=x+vd)
            {
                return true;
            }
            m.insert(x);
        }

        return false;
    
               
    }
};
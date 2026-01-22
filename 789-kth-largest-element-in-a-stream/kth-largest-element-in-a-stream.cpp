class KthLargest {
public:
   int k;
   priority_queue<int,vector<int>,greater<int>>pq;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        int n=nums.size();
        int i=0;
        while(i<k && i<n){
            pq.push(nums[i]);
            i++;
        }

        while(i<n){
            if(nums[i]>pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
            i++;
        }

        
    }
    
    int add(int val) {

        if(pq.size()<k){
            pq.push(val);
            return pq.top();
        }

        if(pq.top()<val){
            pq.pop();
            pq.push(val);       
        }
         return pq.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
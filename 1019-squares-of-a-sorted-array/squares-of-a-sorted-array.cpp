class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> a;
        vector<int> b ;
        for(int i = 0; i<n ; i++){
            if(nums[i]>=0){
                a.push_back(nums[i]);

            }
            else{
                b.push_back(nums[i]);
            }
        }
        if(a.size()==0){
            for(int i = 0 ; i<n ; i++){
                nums[i]= nums[i]*nums[i];


            }
            reverse(nums.begin(), nums.end());
        }
        if(b.size()==0){
            for(int i = 0 ; i<n ; i++){
                nums[i]*=nums[i];
            }
        }

        int p = a.size();
        int q = b.size();
        int id = 0; 
        int i = 0;
        int j = 0;



        vector<int> res(p+q);

        for(int i = 0; i<p ; i++){
            a[i]*=a[i];
        }
        for(int i = 0 ; i<q ; i++){
            b[i]*=b[i];

        }
        reverse(b.begin(),b.end());
        while(i < p && j<q){
            if(a[i]<=b[j]){
                res[id] = a[i];
                id++;
                i++;
            }
            else{
                res[id]= b[j];
                j++;
                id++;

            }
        }
            while(j<q){
                res[id]=b[j];
                id++;
                j++;
            }
            while(i<p){
                res[id]=a[i];
                id++;
                i++;

            }
        

        return res;


    }
};
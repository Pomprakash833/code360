
int firstoccurence(vector<int>& arr,int n,int k){
       int s=0;
       int ans=-1;
      
       int e= n-1;

       while(s<=e){
            int m = s+(e-s)/2;
            if(arr[m]==k){
                ans=m;
                e=m-1;
            }
            else if(arr[m]<k){               
                s=m+1;
            }
            else{
                e=m-1;
            }
       }
       return ans;
   }
int lastoccurence(vector<int>& arr,int n,int k){
    int s=0;
       int ans=-1;
      
       int e = n-1;

       while(s<=e){
            int m = s+(e-s)/2;
            if(arr[m]==k){
                ans=m;
                s=m+1;
            }
            else if(arr[m]<k){
                s=m+1;

            }
            else if(arr[m]>k){
               e=m-1;

            }
       }
       return ans;

}


   pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int>p;
    
    p.first=firstoccurence(arr,n,k);
    p.second= lastoccurence(arr,n,k);
    return p;
}

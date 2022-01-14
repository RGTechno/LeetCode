class Solution {
public:
    void sortColors(vector<int>& a) {
        int s=0,k=0,e=a.size()-1;
    
        while(k<=e){
            switch(a[k]){
                case 2:
                  swap(a[k],a[e]);
                  e--;
                  break;
                case 1:
                  k++;
                  break;
                case 0:
                  swap(a[k],a[s]);
                  s++;
                  k++;
                  break;
            }
        }
        
    }
};
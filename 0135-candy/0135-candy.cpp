class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();

        cout << n << endl;
        if(n == 1) return 1;
        int result[n];
        for(int i=0; i<n; i++) result[i] = 1;

        
        for(int i=0; i<n-1; i++) {
            if(ratings[i] < ratings[i+1]) {
                result[i+1] = result[i] + 1;
            }
            cout << "kj  ";
            
        }

        for(int i=n-2; i>=0; i--) {
            if(ratings[i] > ratings[i+1]) {
                result[i] = max(result[i+1]+1, result[i]);
            }
        }

        for(int i=0; i<n; i++)  cout << result[i] << " ";

        int sum = 0;
        for(int i=0; i<n; i++) {            
            sum += result[i];
        }

        return sum;
    }
};


//   int candy(vector<int> &ratings)
//  {
// 	 int size=ratings.size();
// 	 if(size<=1)
// 		 return size;
// 	 vector<int> num(size,1);
// 	 for (int i = 1; i < size; i++)
// 	 {
// 		 if(ratings[i]>ratings[i-1])
// 			 num[i]=num[i-1]+1;
// 	 }
// 	 for (int i= size-1; i>0 ; i--)
// 	 {
// 		 if(ratings[i-1]>ratings[i])
// 			 num[i-1]=max(num[i]+1,num[i-1]);
// 	 }
// 	 int result=0;
// 	 for (int i = 0; i < size; i++)
// 	 {
// 		 result+=num[i];
// 		// cout<<num[i]<<" ";
// 	 }
// 	 return result;
//  }
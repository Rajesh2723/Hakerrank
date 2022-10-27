/*
You have a sequence 2,5,16,65,........Given an integer n as input . You have to find the value at nth position in the sequence.
 

Example 1:

Input: n = 4
Output: 65
Example 2:

Input: n = 10
Output: 9864101
*/
class Solution {
	public:
		int NthTerm(int n){
		    if(n==1){
		        return 2;
		    }else{
		        long long sum=2;
		        for(int i=2;i<=n;i++){
		            sum=((sum%1000000007)*(i%1000000007)%1000000007)+1;
		        }
		        return int(sum);
		    }
		}

};

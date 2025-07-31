#include <bits/stdc++.h>
using namespace std; 

// Question -> Nearby square.
/*	NOTE
 * Current sum or elements in B is X 
 * Current sum of elements in C is Y. 
 * ith element -> either can go to C or B. 
 * If that goes to B, then we will have f(i+1, x+A[i], C) (c will not change)
 * ith element has no effect on B, if it's going to C. y+a[i]
 * Base case:- Either it will go to B or C, currenty sum of b -> x and C -> y. If it goes to B, it will go to i+1th element. 
 * Sum of B => A[i]+x, sum of C (uneffected) 
 * We need to find minimum operation, Base case if i=n, x contains sum of elements of b, y contains sum of elements in c
 * Result = (x^2-y^2)
*/

// If you are doing recursion on an array, you can always decide, weather to go forward or backward. 
int division(int index, vector<int> b, vector<int> c, int arr[], int n ){
	// We will choose foward, I prefer Backward.
	// B -> elements of B and C -> elements of C. 
	
	// Base case
	if(index == n){
		int sum_b = 0, sum_c=0; 
		for(x:b){
			sum_b +=x;
		}
		for(x:c){
			sum_c +=x;
		}
		return abs(sum_b*sum_b - sum_c*sum_c);
	}

	// either can go to B or C 
	vector<int> new_B=b;
	new_B.push_back(arr[index]); 
	int res = division(index+1, new_B, c, arr, n);
	
	// now going to C 
	vector<int> new_C = c;
	new_C.push_back(arr[index]); 
	int res2 = division(index+1, b, new_c, arr, n);

	return min( res, res2);
}

int main(){
		
	return 0;
}

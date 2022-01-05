/* problem link: https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/ */

class Solution{
public:
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    set<long long> s;
	    s.insert(1);
	    n--;
	    long long f;
	    while(n--){
	        auto it=s.begin();
	        f=*it;
	        s.erase(it);
	        s.insert(f*2);
	        s.insert(f*3);
	        s.insert(f*5);
	    }
	    return *s.begin();
	}
};

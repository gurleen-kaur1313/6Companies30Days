
/* problem link: https://practice.geeksforgeeks.org/problems/next-higher-palindromic-number-using-the-same-set-of-digits5859/1/# */



class Solution{
  public:
    string nextPalin(string N) {
        if(N.size() <= 3){
         return "-1";
        }
        string res;
int mid = N.size()/2-1;
string s = N.substr(0, mid+1);
int n = s.length();
int ind = n;
for(int i=n-1;i>0;i--){
if(s[i] > s[i-1]){
ind = i-1;
break;
}
}
if(ind == n){
return "-1";
}
for(int i=n-1; i>0; i--){
if(s[i] > s[ind]){
swap(s[i], s[ind]);
break;
}
}
reverse(s.begin()+ind+1, s.end());
res += s;
if(N.size()%2){
res += N[N.size()/2];
}
reverse(s.begin(), s.end());
res += s;
return res;
    }
};

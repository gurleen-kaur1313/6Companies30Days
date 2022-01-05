/* problem link:https://practice.geeksforgeeks.org/problems/run-length-encoding/1/ */

string encode(string src)
{
  string ans="";
  ans+=src[0];
  int count=1;
  for(int i=1; i<src.length(); i++){
      if(src[i]==src[i-1]) count++;
      else{
          ans+=to_string(count);
          ans+=src[i];
          count=1;
      }
  }
  return ans+to_string(count);
}

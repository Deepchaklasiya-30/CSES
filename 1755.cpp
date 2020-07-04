#include<bits/stdc++.h>
#define MODE 1000000007
#define ll long long int
using namespace std;
int main()
{
 string s;
 cin>>s;
 sort(s.begin(),s.end());
 vector<string>v;
 
 do
 {      v.push_back(s);
 } while(next_permutation(s.begin(),s.end()));
 cout<<v.size()<<endl;
 for(auto &x:v) cout<<x<<endl;
}

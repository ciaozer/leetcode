/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
#include<string>
#include<cmath>
#include<vector>
using namespace std;
/*  brute force
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())      return 0;
        int flag=0, n=haystack.size(), m=needle.size();
        for( int i=0; i<=n-m; i++ ) //不能写size-size，好像定义的是unsigned_int
        {
            flag = 0;
            for( int j=0; j<needle.size(); j++ )
            {
                if(haystack[i+j] != needle[j])
                {
                    flag = 1;
                    break;
                }
            }
            if( flag == 0 )
                    return i;
        }
        return -1;
    }
};*/

/*  Rabin Karp
typedef long long ll;
class Solution {
public:
    int strStr(string haystack, string needle) {
        const ll mod = 1e9+7;
        const ll base = 26;    //小写字母26个
        int n = haystack.size();
        int m = needle.size();
        if( n < m )         return -1;
        if( m == 0 )        return 0;
        ll hashnee=0, hashhay=0;
        ll mbase = quick_pow(base, m-1, mod);
        for( int i=0; i<m; i++ )
        {
            hashnee = (hashnee*base+needle[i]-'a')%mod;
            hashhay = (hashhay*base+haystack[i]-'a')%mod;
        }
        if( hashnee == hashhay && haystack.substr(0, m) == needle )
            return 0;
        for( int i=m; i<n; i++ )
        {
            if( hashhay < (haystack[i-m]-'a')*mbase )   hashhay += mod;
            hashhay = ((hashhay-(haystack[i-m]-'a')*mbase)*base +haystack[i]-'a')%mod;
            if( hashnee == hashhay && haystack.substr(i-m+1, m) == needle )
                return i-m+1;
        } 
        return -1;
    }

    ll quick_pow(ll base, ll power, ll mod)
    {
        ll ans=1;
        while(power)
        {
            if(power&1)
                ans = (ans*base)%mod;
            power >>= 1;
            base = (base*base)%mod;
        }
        return ans;
    }
};
*/

//  KMP
class Solution {
public:
    int strStr(string haystack, string needle) {

    }
};
// @lc code=end


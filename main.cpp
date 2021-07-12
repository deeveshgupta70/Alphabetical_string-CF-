#include<bits/stdc++.h>
 
using namespace std;
 
#define Fast1 ios_base::sync_with_stdio(0)
#define Fast2 cin.tie(0)
#define Fast3 cout.tie(0)
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef short int SI;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
 
// void getResult(){
 
// }
int main()
{
    Fast1;
    Fast2;
    Fast3;
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin>>s;
 
        int len = s.size();
        size_t found = s.find("a");
        int flag = 1;
 
        /// Starting with a
        if(found == 0){
            int j = 98;
            FORL(i,1,len-1){
                if(s[i] != j) {
                    flag = 0;
                    break;
                }
                j++;
            }
            cout<<(flag ? "YES\n" : "NO\n");
        }
 
        /// Ending with a
        else if(found == len - 1){
            int j = 98;
            FORR(i,len-2,0){
                if(s[i] != j) {
                    flag = 0;
                    break;
                }
                j++;
            }
            cout<<(flag ? "YES\n" : "NO\n");
        }
 
        //// a lies in between the string
        else if(found >= 0 && found <= len - 1){
 
            int temp = 26;
            int alp = 98;
            int left = found - 1;
            int right = found + 1;
            while(true){
                if( s[left] == alp){
                    left--;
                    alp++;
                }
                else if(s[right] == alp){
                    right++;
                    alp++;
                }
                else{
                    cout<<"NO\n";
                    break;
                }
 
                if( left < 0 && right > len - 1) {
                    cout<<"YES\n";
                    break;
                }
            }
        }
 
        /// a not present
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}

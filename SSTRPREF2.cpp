#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool InRange(int val, int lower_bound, int upper_bound)
{
    if (val >= lower_bound && val <= upper_bound)
        return true;
    return false;
}

vector<string> MakePrefix(string s)
{
    vector<string> vec;
    string k = "";
    
    for (int i = 0; i < s.length(); i++)
    {
        k += s[i];
        vec.push_back(k);
    }
    vec.push_back("");
    return vec;
}

vector<string> AddStrings(vector<string> a, vector<string> b)
{
    vector<string> vec;
    int j = 0;
    string k = "";
    for (int i = 0; i < a.size(); i++)
    {
        k = "";
        for (int j = 0; j < b.size(); j++)
        {
            k = a[i] + b[j];
            vec.push_back(k);
        }
    }
    return vec;
}

int CheckForSubstring(vector<string> s, string a)
{
   int ans = 0;
   for (int i = 0; i < s.size(); i++)
   {
        if (a.find(s[i]) != string::npos)
            ans++;
   }
   return ans;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T, sum1 = 0, sum2 = 0, sum3 = 0;
    register string S1, S2, X, A;
    vector<string> vec01, vec02, vec03;
    
    cin >> T;
    if (InRange(T, 1, 100000))
    {
        for ( int i = 0; i < T; i++)
        {
            if (sum1 <= 1000000 && sum2 <= 1000000 && sum3 <= 1000000)
            {
                vec01.clear();
                vec02.clear();
                vec03.clear();
                cin >> S1;
                cin >> S2;
                cin >> X;
            
                if (S1.length() <= 1000000 && S2.length() <= 1000000 && X.length() <= 1000000)
                {
                    vec01 = MakePrefix(S1);
                    vec02 = MakePrefix(S2);
                    
                    vec03 = AddStrings(vec01, vec02);
                    
                    cout << CheckForSubstring(vec03, X) << endl;
                    sum1 += S1.length();
                    sum2 += S2.length();
                    sum3 += X.length();
                }
            }
            else
                break;
        }
    }
    
	return 0;
}

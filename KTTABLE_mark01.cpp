#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int T, N, l, g = 0, k = 0;
    vector<int> vec01, vec02;
    cin >> T;
    if (T >= 1 && T <= 10)
    {
        for (int j = 0; j < T; j++)
        {
            k = 0;
            g = 0;
            vec01.clear();
            vec02.clear();
            
            cin >> N;
            if (N >= 1 && N <= pow(10, 4))
            {
                for (int i = 0; i < N; i++)
                {
                    cin >> l;
                    if (l <= k)
                        break;
                    vec01.push_back(l);
                    k = vec01[i];
                }
                for (int i = 0; i < N; i++)
                {
                    cin >> l;
                    if (l <= pow(10, 9) && l >=1)
                        vec02.push_back(l);
                }
                
                k = 0;
                for(int i = 0; i < vec01.size(); i++)
                {
                    if ( vec01[i] - k >= vec02[i])
                    {
                        g++;
                    }
                    k = vec01[i];
                }
            }
            cout << g << endl;
        }
    }
    
    
    /**
    for (int i = 0; i < vec01.size(); i++)
    {
        cout << vec01[i];
    }
    for (int i = 0; i < vec02.size(); i++)
    {
        cout << vec02[i];
    }
    */
    
	return 0;
}

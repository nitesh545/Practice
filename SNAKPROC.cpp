#include <iostream>
#include <string>
using namespace std;

int main()
{
    int R, L, g = 0;
    cin >> R;
    string s;
    
    if (R <= 500 && R >= 1)
    {
        for (int i = 0; i < R; i++)
        {
            cin >> L;
            if (L <= 500 && L >= 1)
            {
                g = 0;
                cin >> s;
                for (int j = 0; j < L; j++)
                {
                    if (s[j] == 'H')
                        g++;
                    else if (s[j] == 'T')
                        g--;
                    if ( g > 1 || g < 0)
                    {
                        cout << "Invalid\n";
                        break;
                    }
                }
                if(g == 0)
                    cout << "Valid\n";
                else if (g == 1)
                    cout << "Invalid\n";
            }
        }
    }
	return 0;
}

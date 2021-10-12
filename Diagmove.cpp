#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

// check if given number is even or not
bool EveOrNot(int a)
{
    if (a%2 == 0)
        return true;
    return false;
}

// check if x, y both are odd OR both are even
bool BothOddEve(int x, int y)
{
    if (EveOrNot(x) && EveOrNot(y))
        return true;
    else if (!EveOrNot(x) && !EveOrNot(y))
        return true;
    else
        return false;
}

int main()
{
    int T, l;
    vector<int> vec01;
    
    cin >> T;
    
    if (T >= 1 && T <= 2*pow(10, 4))
    {
        for (int i = 0; i < T*2; i++)
        {
            cin >> l;
            vec01.push_back(l);
        }
    
        for (int i = 0; i < vec01.size(); i = i+2)
        {
            if(vec01[i] <= pow(10, 9) && vec01[i] >= -pow(10, 9) && vec01[i+1] <= pow(10, 9) && vec01[i+1] >= -pow(10, 9))
            {
                if (BothOddEve(vec01[i], vec01[i+1]))
                    cout << "yes" << endl;
                else
                    cout << "no" << endl;
            }
        }
    }
    
	return 0;
}

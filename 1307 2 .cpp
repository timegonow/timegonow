#include <iostream>
#include <cstring>
using namespace std;

const int N = 1010;

int a[N], b[N], c[N];

int main()
{
    string sa, sb;
    cin >> sa >> sb;

    int lena = sa.size(), lenb = sb.size();
    for (int i = 0; i < lena; i ++ ) a[i] = sa[lena - i - 1] - '0';
    for (int i = 0; i < lenb; i ++ ) b[i] = sb[lenb - i - 1] - '0';

    int lenc = lena - lenb + 1;
    for (int i = lena - 1; i >= lena - lenc; i -- )
    {
        int t = 0;
        while (t <= 9 && memcmp(a + i, b, lenb * sizeof(int)) >= 0)
        {
            for (int j = 0; j < lenb; j ++ )
            {
                a[i - j] -= b[lenb - j - 1];
                if (a[i - j] < 0)
                {
                    a[i - j] += 10;
                    a[i - j - 1] -- ;
                }
            }
            t ++ ;
        }
        c[i - lena + lenb] = t;
    }

    while (lenc > 1 && !c[lenc - 1]) lenc -- ;

    for (int i = lenc - 1; i >= 0; i -- ) cout << c[i];
    cout << endl;

    return 0;
}

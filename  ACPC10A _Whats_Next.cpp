#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int x,y,z;
        cin >> x >> y >> z;
        if(x==0 && y==0 && z==0)
            break;
        int diff1 = y - x;
        int diff2 = z - y;
        if(diff1==diff2)
        {
            printf("AP %d\n",z+diff1);
        }
        else
        {
            int diff3 = z/y;
            printf("GP %d\n",z*diff3);
        }

    }
    return 0;
}

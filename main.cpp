#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    int maxx;
    cin>>n;
    int a=n%10;
    int b=n/100;
    int c=(n/10)%10;
    if(a!=0)
    {
        if (maxx<a*100+b*10+c)
        {
            maxx = a*100+b*10+c;
        }
        cout<<a*100+b*10+c<<endl;
        if (b!=c)
        {
           if (maxx<a*100+c*10+b)
        {
            maxx = a*100+c*10+b;
        }
            cout<<a*100+c*10+b<<endl;
        }
    }
    if (b!=0 &&b!=a)
    {
        if (maxx<b*100+a*10+c)
        {
            maxx = b*100+a*10+c;
        }
        cout<<b*100+a*10+c<<endl;
        if (a!=c)
        {
            if (maxx<b*100+c*10+a)
            {
                maxx = b*100+c*10+a;
            }
            cout<<b*100+c*10+a<<endl;
            }
        }
        if(c!=0 && c!=b && c!=a)
        {
            if (maxx<c*100+a*10+b)
            {
                maxx = c*100+a*10+b;
            }
            cout<<c*100+a*10+b<<endl;
            if (b!=a)
            {
                if (maxx<c*100+b*10+a)
                {
                    maxx = c*100+b*10+a;
                }
                cout<<c*100+b*10+a<<endl;
            }
        }
        cout<<"Maximal'noe chislo =  "<<maxx<<endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int hexToDecimal(string hexValue)
{
    int len = hexValue.size();
    int base = 1;
    int decimalValue = 0;

    for(int i = len - 1; i >= 0; i--)
    {
        if(hexValue[i]>='0'&&hexValue[i]<= '9')
        {
            decimalValue += (int(hexValue[i])- 48) * base;
            base = base * 16;
        }
        else if(hexValue[i]>= 'A' && hexValue[i]<= 'F')
        {
            decimalValue += (int(hexValue[i]) - 55) * base;
            base = base * 16;
        }
    }
    return decimalValue;
}

int main()
{
    string hexNumber = "1A";
    cout<<(hexToDecimal(hexNumber));
}

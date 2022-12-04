#include <iostream>
using namespace std;
double my_pow(double num, int pow)
{
    double result=1;
    if (pow>0)
    {
        for (int i=0; i<pow;i++)
        result*=num;
   }
    else
    {
        for (int i=0; i>pow; i--)
        result/=num;
    }
   return result;
}
int main()
{
    double num, result;
    int pow;
    cout << "Type the number and it's power ";
    cin >> num >> pow;
    result =my_pow(num, pow);
    cout << "Answer is - " << result << endl;
    return 0;
}



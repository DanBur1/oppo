#include <iostream>
using namespace std;

double fast_pow(double num,unsigned int pow) {
    long result = 1;
    while(pow) {
        if (pow % 2 == 0) {
            pow /= 2;
            num *= num;
        }
        else {
            pow--;
            result *= num;
        }
    }

    return result;
}
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
    result = my_pow(num, pow);
    cout << "Fast answer is - " << fast_pow(num, pow) << endl;
    cout << "fixed answer is - " << tesult << endl;
    return 0;
}



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
int main()
{
    double num, result;
    int pow;
    cout << "Type the number and it's power ";
    cin >> num >> pow;
    cout << "Answer is - " << fast_pow << endl;
    return 0;
}



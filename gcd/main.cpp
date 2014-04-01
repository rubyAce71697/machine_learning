#include <iostream>

using namespace std;

int find_gcd(int number1,int number2)
{
    if(number2==0)
        return number1;

    find_gcd(number2,number1%number2);

}
int main()
{
    int number1,number2;
    cout << "Enter first number" << endl;
    cin>>number1;
    cout<<"Enter second number"<<endl;
    cin>>number2;
    int gcd = find_gcd(number1,number2);
    cout<<"The gcd is "<<gcd;
    return 0;
}

/*given n sticks of 1 unit each design a rectangle of maximum area
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    float area;
    cout<<"ENter the number of sticks";
    cin>>n;
    if(n%2 )
    {

        //if n is odd make it even
        n = n-1;
        cout<<"Only "<<n <<" sticks can be used"<<endl;
    }
    if(n%4== 0)
    {
            area = pow(n/4,2);
    }
    else
    {

        int sum_of_x_y = n/2;
        int bredth = sum_of_x_y/2;
        int length = sum_of_x_y/2 + 1;
        cout<<"sum_of_x_y: "<<sum_of_x_y<<endl;

        cout<<"Bredth: "<<bredth<<endl;
        cout<<"length: "<<length<<endl;
        area = length * bredth;

    }
    cout<<"The area of rectangle is: "<<area;
    return 0;
}

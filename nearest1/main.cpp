#include <iostream>
#include <math.h>
#include <algorithm>>
# define begin main
using namespace std ;
//array for data
struct values
    {

            int clas;
            int x;
            int y;
    } arr[20];

struct distance
    {

        int index;
        float dist_value;
    }dist_arr[20];

//function for sorting the array
void sort_dist(struct distance array[], int n)
{
    struct distance swap;
    if(n==2)
    {
        if(array[0].dist_value > array[1].dist_value)
        {
            swap       = array[0];
            array[0]   = array[1];
            array[1] = swap;
        }
    }
    else
    {
        for (int c = 0 ; c < ( n - 1 ); c++)
          {
            for (int d = 0 ; d < n - c - 1; d++)
            {
              if (array[d].dist_value > array[d+1].dist_value) /* For decreasing order use < */
              {
                swap       = array[d];
                array[d]   = array[d+1];
                array[d+1] = swap;
              }
            }
          }
    }
}

//function for reading the values
int read(values arr[],int n)
{

        cout<<"Enter the values";
        for(int i=0;i<n;i++)
        {

            cin>>arr[i].x;
            cin>>arr[i].y;
        }
        return 0;
}

//beginning the main without using the main function

int begin()
{
    int i=0,j=0;;
    int n,k;

    cout << "How many values do you want to enter" << endl;
    cin>>n;
    //read the n number of values in the array
    read(arr,n);

    //input the number of clusters user want
    cout<<"ENter the k ";
    cin>>k;

    //defining the class for first k values
    for(i=0;i<k;i++)
    {

        arr[i].clas = i+1;
        cout << arr[i].x <<"\t"<<arr[i].y<<"\t"<<arr[i].clas<<endl;

    }
    // now we have to define the class for the remaining values



    float dis;


    for(;i<n;i++)
    {

        cout<<"entered the first loop"<<endl;
        cout << arr[i].x <<"\t"<<arr[i].y<<"\t"<<arr[i].clas<<endl;
            int m=0;
            for(j=0;j<i;j++)
            {
                cout<<"entered tje second loop"<<endl;
                dis = sqrt(pow((arr[i].x - arr[j].x),2) + pow((arr[i].y - arr[j].y),2));
                dist_arr[m].index = arr[j].clas;

                dist_arr[m].dist_value = dis;
                cout << arr[j].x <<"\t"<<arr[j].y<<"\t"<<arr[j].clas<<"\t"<< dis<<endl;
                m++;
            }

        sort_dist(dist_arr,j);
        arr[i].clas = dist_arr[0].index;
        cout<<"after calculating"<<endl;
        cout << arr[i].x <<"\t"<<arr[i].y<<"\t"<<arr[i].clas<<endl;
    }

    cout<<"x-value\ty-value\tclass\n";
    for (i=0;i<n;i++)
    {
        cout << arr[i].x <<"\t"<<arr[i].y<<"\t"<<arr[i].clas<<endl;
    }




    return 0;
}

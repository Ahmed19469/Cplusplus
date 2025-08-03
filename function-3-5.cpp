#include <iostream>

double sum_even(double array[], int n)
{
    int sum=0;
    for(int i=0;i<n;i=i+2)
    {

        sum = sum+array[i];

    }
    return sum;
}
double main()
{

    double array[]={12.22,3.22,4.55,5.66,3.77};

    int n=5;
    return sum_even(array,n);
}
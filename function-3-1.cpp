#include<iostream>

bool is_fanarray(int array[], int n)
{

    bool isfan=true;

    for(int i=0;i<n/2;i++)
    {

        if(array[i]!=array[n-1] ||(n<1))
        {
            isfan=false;

        }
    }
    return isfan;

}
#include<iostream>
bool is_ascending(int array[], int n){
int flag=0;
    for(int i =0;i<n-1;i++)
    {
        if(array[i+1]<array[i]){
            flag=1;
        }
    }
    if(flag==0 && n>0)
    {
        return true;
    }
    else
    {return false;}
}
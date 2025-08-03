#include<iostream>
int median_array(int array[], int n)
{
    if(n%2==0 ||n<1){
        return 0;
    }
    else{
    int sorted[n]={};
    int min=array[0];
for(int i=0;i<n;i++)
{
    int min= array[i];
 for(int j=i+1;j<n;j++)
{
    
    if (array[j]>min)
    {
        sorted[i]=min;
    }
    else{
        sorted[i]=j;
    }
    
   
}
}
return sorted[n/2];
    }
}
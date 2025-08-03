
#include<iostream>

int num_count(int array[], int n, int number)
{
    int sum=0;

if (n<1){
    return 0;
}
else{
for(int i=0;i<n;i++)
{

if (array[i]==number)
{
    sum++;
}

}
return sum;
}



} 
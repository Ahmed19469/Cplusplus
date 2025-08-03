#include<iostream>


int array_sum(int array[],int n)
{
    int sum=0;

if (n<1){
    return 0;
}
else{
for(int i=0;i<n;i++)
{

    sum=sum+array[i];

}
return sum;
}



} 
// int main()
// {
// int array[]={1,2,3,4,5};
// int n=5;
// return array_sum(array,n);

// }
#include <stdio.h>
#include<stdbool.h>


int main()
{
    bool swap;
    int n=5,temp,l=0;
    int arr[5]={58,89,71,35,6};
    
    
    do{
        swap=false;
        for(int j=0;j<n;j++)
        {
            if (arr[j]>arr[j-n-1]);
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;
            }
        }
    }while(swap);
    
    for(int m=0;m<n;m++)
        {
            printf("%d\n",arr[l]);
        }
}

#include <iostream>
using namespace std;
void printArray(int array[],int n) //array print fuction
{ 
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
cout<<endl;
}
void countsort(int array[],int n) //counting fuvtion
{
int count[100];  //for input maximum upto 99
for(int t=0;t<100;t++)
{
count[t]=0; // set all value=0
}
for(int k=0;k<n;k++)
{
    count[array[k]]=count[array[k]]+1;
}
int k=0;
for(int i=0;i<100;i++) //creaing new array for counting sort
{
    
    while (count[i]!=0)
    {
        array[k]=i;
        k++; 
        count[i]=count[i]-1;
    }
    
}

}
int main()
{
cout << "Enter no of elements: " << endl;
int n;
cin>>n;
int array[n];
for(int i=0; i<n;i++)
{
cout<<"Input "<<i+1<<"th element among (0-99)"<<endl;
cin >> array[i];
}
countsort(array,n);
cout<<"After Sorting:"<<endl;
printArray(array,n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    //cout<<"Prime";
    if (n<=1) return false;
    if (n==2) return true;
    for (int i = 2; i*i <n; i++)
    { 
        if(n%i==0) return false;
    }return true;
}
int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;
    int k=0;
    int* arr=(int*)malloc(n*sizeof(int));
    for (int i = 2; i <n; i++)
    {
      //  cout<<"Check";
        if(isPrime(i))  arr[k++]=i;
    }
     for (int i = 0; i < k; i++)
    { 
        //cout<<"C";
       cout<<arr[i]<<" Is a Prime number"<<endl;
       
    }

}
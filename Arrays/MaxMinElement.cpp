#include<iostream>
using namespace std;

int getMax(int arr[] , int n){
    int max = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[] , int n){
    int min = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int ans1 = getMax(arr,n);
    int ans2 = getMin(arr,n);

    cout<<ans1<<endl;
    cout<<ans2<<endl;
}
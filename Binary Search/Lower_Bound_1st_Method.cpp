// 1st method to print this 
#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,2,4,5,9,15,18,21,24};
    int n = 9;
    int x= 12;
    for(int i=0;i<n; i++){
        if(arr[i]>x){
            cout<<arr[i];
            break;
        }
    }// Time complexcity for this code is O(n)
}
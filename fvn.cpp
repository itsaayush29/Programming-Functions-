#include<iostream> 
using namespace std;
int main(){
    int count=0,n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            
        }
    }
    cout<<count;
}
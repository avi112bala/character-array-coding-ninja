#include<iostream>
using namespace std;


void columnSum(int arr[1000][1000], int m, int n){
    
    
    for(int i = 0; i < n; i++){
         int sum = 0;
        
        for(int j = 0;j < m; j++){
            
            sum = sum + arr[j][i];     
        }
        cout<<sum<<" ";  
        sum=0;
    }
}

int main() {
    int arr[1000][1000], m ,n;
    cin>>m;
    cin>>n;
    cout<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
   
    columnSum(arr, m ,n);
    
   
}

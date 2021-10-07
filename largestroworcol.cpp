void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
 int maxSum=INT32_MIN, index=0;
  int *arr=new int[mCols], flag=0;
  // Flag -> 0 rows, Flag -> 1 cols
  
  for(int i=0; i<nRows; i++) {
    int sum=0;
    for(int j=0; j<mCols; j++) {
      sum+=input[i][j];
      arr[j]+=input[i][j];
    }
    if(sum>maxSum) {
      maxSum=sum;
      index=i;
    }
  }
  
  for(int i=0;i<mCols;i++) {
    if(arr[i]>maxSum) {
      maxSum=arr[i];
      index=i;
      flag=1;
    }
  }
  
  flag ? cout<<"column "<<index<<" "<<maxSum<<endl :
    cout<<"row "<<index<<" "<<maxSum<<endl;
}

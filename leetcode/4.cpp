#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> & arr , int l , int m ,int r){
  vector<int> left(arr.begin()+l,arr.begin()+m+1);
  vector<int> right(arr.begin()+m+1,arr.begin()+r+1);
  int i=0,j=0,k=l;
  while(i<(int)left.size() && j<(int)right.size()){
    arr[k++] = (left[i]<=right[j]) ? left[i++]:right[j++];
  }
  while(i<(int)left.size()){
    arr[k++]=left[i++];
  }
  while(j<(int)right.size()){
    arr[k++] = right[j++];
  }
}
void mergeSort(vector<int> & arr, int l ,int r){
  if(l<r){
      int m = (l+r)/2;
      mergeSort(arr,l,m);
      mergeSort(arr,m+1,r);
      merge(arr,l,m,r);
  }
}
double median(vector<int> & arr){
  int n = arr.size();
  if(n%2==1){
          return arr[n/2];
  }
  else{
      return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
  }
}
int  main(){
  int n;
  cout << "Enter the number of the elements in the array : ";
  cin >> n;
  vector<int> arr(n);
  for(int i=0 ;i<n; i++){
    cin >> arr[i];
  }
  mergeSort(arr,0,n-1);
  median(arr);
  return 0;

}

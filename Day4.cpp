// selection Sort
// #include<iostream>
// using namespace std;
// void selectionSort(int arr[], int n) {
// for(int i=0 ; i<n-1; i++) {
// for(int j=i+1 ; j<n; j++) {
// if(arr[j] < arr[i]) {
// swap(arr[i], arr[j]);
// }
// }
// }
// }
// int main() {
// int arr[] ={2,5,1,3,4};
// int n = sizeof(arr)/sizeof(int);
// selectionSort(arr, n);
// //output
// for(int i:arr) {
// cout<<i<<" ";
// }
// }

// IInd method
// #include<iostream>
// using namespace std;
// void selectionSort(int arr[], int n) {
// for (int i=0 ; i<n-1 ; i++) {
// int min_index = i;
// for(int j=i+1 ; j<n ; j++) {
// if(arr[j] < arr[min_index]) {
// min_index = j;
// }
// }
// swap(arr[i], arr[min_index]);
// }
// }
// int main() {
// int arr[] = {2,5,1,3,4};
// int n = sizeof(arr)/sizeof(int);
// selectionSort(arr, n);
// //output
// for(int i:arr) {
// cout<<i<<" ";
// }
// }

// Bubble Sort
// #include<iostream>
// using namespace std;
// void bubbleSort(int arr[], int n) {
// for (int i=1 ; i<n ; i++) {
// for(int j=0 ; j<n-i ; j++) {
// if(arr[j] < arr[j+1]) {
// swap(arr[j],arr[j+1]);
// }
// }
// }
// }
// int main() {
// int arr[] = {2,5,1,3,4};
// int n = sizeof(arr)/sizeof(int);
// bubbleSort(arr, n);
// //output
// for(int i:arr) {
// cout<<i<<" ";
// }
// }

// #include<iostream>
// using namespace std;
// void bubbleSort(int arr[], int n) {
// bool flag = true;
// for (int i=1 ; flag and i<n ; i++) {
// flag = false;
// for(int j=0 ; j<n-i ; j++) {
// if(arr[j] > arr[j+1]) {
// swap(arr[j],arr[j+1]);
// flag = true;
// }
// }
// }
// }
// int main() {
// int arr[] = {1,2,3,5,4};
// int n = sizeof(arr)/sizeof(int);
// bubbleSort(arr, n);
// //output
// for(int i:arr) {
// cout<<i<<" ";
// }
// }

// insertion Sort
// #include<iostream>
// using namespace std;
// void insertionSort(int arr[], int n) {
// int i, j;
// for (i=1 ; i<n ; i++) {
// int element = arr[i];
// for(j=i-1 ; j>=0 and arr[j]>element ; j--) {
// arr[j + 1] = arr[j];
// }
// arr[j + 1] = element;
// }
// }
// int main() {
// int arr[] = {5,1,3,2,4,8,6,7,9,2};
// int n = sizeof(arr)/sizeof(int);
// insertionSort(arr, n);
// //output
// for(int i:arr) {
// cout<<i<<" ";
// }
// }

// Merge2sortedArray
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> merge2SortedArr(vector<int> &a, vector<int> 
// &b) {
// int i=0,j=0;
// int m = a.size();
// int n = b.size();
// vector<int> c;
// while(i<m && j<n) {
// if(a[i] < b[j]) {
// c.push_back(a[i]);
// i++;
// }
// else {
// c.push_back(b[j]);
// j++;
// }
// }
// while(i<m) {
// c.push_back(a[i]);
// i++;
// }
// while(j<n) {
// c.push_back(b[j]);
// j++;
// }
// return c;
// }
// int main() {
// vector<int> a={1,5,10,12,15,18,25,30};
// vector<int> b={2,4,8,10,13};
// vector<int> c = merge2SortedArr(a, b);
// for(int i:c) {
// cout << i << " ";
// }
// }
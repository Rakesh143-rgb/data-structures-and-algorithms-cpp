// #include<iostream>
// using namespace std;
// void inc(){
// static int a;
// a++;
// cout<< a << endl;
// }
// int main(){
// inc();
// inc();
// inc();
// }

// #include<iostream>
// using namespace std;
// int main(){
//  int arr[10];
//  int n;
//  cout <<"Enter number of elements:";
//  cin>>n;
//  cout << "Enter" << n << "Values:";
//  //input
//  for(int i=0; i<n; i++){
//     cin>>arr[i];
//  }
//   //output
//  for(int i=0; i<5; i++){
//     cout <<arr[i] <<" ";
// }
// } 

// sum of array
// #include<iostream>
// using namespace std;
// int main() {
// int arr[10];
// int n;
// cout<<"Enter no of elements:";
// cin>>n;
// cout<<"Enter "<<n<<" values:";
// //input
// for(int i=0 ; i<n ; i++) {
// cin>>arr[i];
// }
// //sum of array
// int sum = 0;
// for(int i=0 ; i<5 ; i++) {
// sum += arr[i];
// }
// cout<<sum;
// }

// function of array
// #include<iostream>
// using namespace std;
// int sumOfArray(int *arr, int n) {
// int sum = 0;
// for(int i=0 ; i<5 ; i++) {
// sum += arr[i];
// }
// return sum;
// }
// int main() {
// int arr[10];
// int n;
// cout<<"Enter no of elements:";
// cin>>n;
// cout<<"Enter "<<n<<" values:";  
// //input
// for(int i=0; i<n; i++) {
// cin>>arr[i];
// }
// //sum of array
// cout<<sumOfArray(arr,n);
// }

// #include<iostream>
// using namespace std;
// void leftShift(int *arr, int n) {
// int temp = arr[0];
// for(int i=0; i<n-1; i++) {
// arr[i] = arr[i+1];
// }
// arr[n-1] = temp;
// }
// int main() {
// int arr[10];
// int n;
// cout<<"Enter no of elements:";
// cin>>n;
// cout<<"Enter "<<n<<" values:";
// //input
// for(int i=0; i<n; i++) {
// cin>>arr[i];
// }
// leftShift(arr, n);
// //output
// for(int i=0; i<n; i++)
// cout<<arr[i]<<" ";
// }

// #include<iostream>
// using namespace std;
// void RightShift(int *arr, int n) {
// int temp = arr[n-1];
// for(int i=n-1; i>0; i--) {
// arr[i] = arr[i-1];
// }
// arr[0] = temp;
// }
// int main() {
// int arr[10];
// int n;
// cout<<"Enter no of elements:";
// cin>>n;
// cout<<"Enter "<<n<<" values:";
// //input
// for(int i=0 ; i<n ; i++) {
// cin>>arr[i];
// }
// RightShift(arr, n);
// //output
// for(int i=0 ; i<n ; i++)
// cout<<arr[i]<<" ";
// }

// #include<iostream>
// using namespace std;
// void reverse(int *arr, int n) {
// for(int i=0,j=n-1 ; i<j ; i++,j--) {
// //   swap(arr[i], arr[j]);
// }
// for(int i=0; i<n/2 ; i++){
// swap(arr[i],arr[n-i-1]);
// }
// }
// int main() {
// int arr[10];
// int n;
// cout<<"Enter no of elements:";
// cin>>n;
// cout<<"Enter "<<n<<" values:";
// //input
// for(int i=0 ; i<n ; i++) {
// cin>>arr[i];
// }
// reverse(arr, n);
// //output
// for(int i=0 ; i<n ; i++)
// cout<<arr[i]<<" ";
// }

// Dynamic array-vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
// vector<int> v1;
// v1.push_back(10);
// v1.push_back(20);
// v1.push_back(30);
// v1.push_back(40);
// v1.push_back(50);
// v1.shrink_to_fit();
// v1.push_back(60);
// cout<<v1.size()<<" "<<v1.capacity()<<endl;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void output(vector<int> &arr) {
// // for (int i = 0; i<arr.size() ; i++) {
// // cout<<arr[i]<<" ";
// // }
// for(int &i:arr) {
// i += 2;
// cout<<i<<" ";
// }
// cout<<endl;
// for(int i:arr) {
// cout<<i<<" ";
// }
// }
// int main() {
// vector<int> v1;
// v1.push_back(10);
// v1.push_back(20);
// v1.push_back(30);
// v1.push_back(40);
// v1.push_back(50);
// v1.shrink_to_fit();
// v1.push_back(60);
// output(v1);
// }


#include<iostream>
#include<vector>
using namespace std;
void output(vector<int> &arr) {
for(int i:arr) {
cout<<i<<" ";
}
cout<<endl;
}
int main() {
vector<int> v1={10,20,30,40,50};
for(auto i=v1.begin() ; i!=v1.end() ; i++){
*i += 2;
cout<<*i<<" ";
}
}


// #include<iostream>
// #include<vector>
// using namespace std;
// void output(vector<int> &arr) {
// for(int i:arr) {
// cout<<i<<" ";
// }
// cout<<endl;
// }
// int main() {
// vector<int> v1={10,20,30,40,50};
// v1.push_back(60);
// v1.insert(v1.begin()+2,100);
// v1.insert(v1.begin(), 150);
// output(v1);
// v1.pop_back();
// //delete last element
// v1.erase(v1.begin() + 3);
// output(v1);
// }
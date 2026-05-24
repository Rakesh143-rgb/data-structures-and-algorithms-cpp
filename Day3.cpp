// linear search
// #include<iostream>
// #include<vector>
// using namespace std;
// bool linearSearch(int arr[], int n, int target) {
// for (int i = 0; i < n; i++)
// if(arr[i]==target)
// return true;
// return false;
// }
// int main() {
// int arr[] = {1, 8, 6, 7, 4, 9, 5, 2};
// int n = sizeof(arr)/sizeof(int);
// if(linearSearch(arr,n,15))
// cout << "Found";
// else
// cout << "Not found";
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int linearSearch(int arr[], int n, int target) {
// for (int i = 0; i < n; i++)
// if(arr[i]==target)
// return i;
// return -1;
// }
// int main() {
// int arr[] = {1, 8, 6, 7, 4, 9, 5, 2};
// int n = sizeof(arr)/sizeof(int);
// int index = linearSearch(arr, n, 5);
// if(index != -1)
// cout << "Found at index "<<index;
// else
// cout << "Not found";
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int linearSearch(int arr[], int n, int target) {
// for (int i = n-1; i>=0; i--)
// if(arr[i]==target)
// return i;
// return -1;
// }
// int main() {
// int arr[] = {1, 8, 5, 7, 4, 9, 5, 2};
// int n = sizeof(arr)/sizeof(int);
// int index = linearSearch(arr, n, 5);
// if(index != -1)
// cout << "Found at index "<<index;
// else
// cout << "Not found";
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> linearSearch(int arr[], int n, int target) {
// vector<int> ans;
// for (int i = 0; i<n; i++)
// if(arr[i]==target)
// ans.push_back(i);
// return ans;
// }
// int main() {
// int arr[] = {1, 8, 5, 7, 4, 9, 5, 2};
// int n = sizeof(arr)/sizeof(int);
// vector<int> ans = linearSearch(arr, n, 5);
// for(int i:ans)
// cout << i << " ";
// }

// binary search
// #include<iostream>
// #include<vector>
// using namespace std;
// bool binarySearch(int arr[], int n, int target) {
// int low=0,high=n-1;
// while(low <= high) {
// int mid = (low+high)/2;
// if(arr[mid] == target)
// return true;
// if(target < arr[mid])
// high = mid - 1;
// else
// low = mid + 1;
// }
// return false;
// }
// int main() {
// int arr[] = {1,5,10,12,15,18,20,25,28};
// int n = sizeof(arr)/sizeof(int);
// if(binarySearch(arr,n,22))
// cout << "Found";
// else
// cout << "Not found";
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// bool binarySearch(int arr[], int low, int high, int target) {
// if(low > high)
// return false;
// int mid = (low+high)/2;
// if(arr[mid] == target)
// return true;
// if(target < arr[mid]) //LHS low to mid-1
// return binarySearch(arr, low, mid - 1, target);
// else
// //RHS mid+1 to high
// return binarySearch(arr, mid+1, high, target);
// }
// int main() {
// int arr[] = {1,5,10,12,15,18,20,25,28};
// int n = sizeof(arr)/sizeof(int);
// if(binarySearch(arr,0, n-1,14))
// cout << "Found";
// else
// cout << "Not found";
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int lowerBound(int arr[], int n, int target) {
// if(target > arr[n-1])
// return n;
// int low = 0;
// int high = n - 1;
// while(low<high) {
// int mid = (low + high) / 2;
// if(arr[mid] >= target)
// high = mid;
// else
// low = mid + 1;
// }
// return low;
// }
// int upperBound(int arr[], int n, int target) {
// if(target > arr[n-1])
// return n;
// int low = 0;
// int high = n - 1;
// while(low<high) {
// int mid = (low + high) / 2;
// if(arr[mid] > target)
// high = mid;
// else
// low = mid + 1;
// }
// return low;
// }
// int main() {
// int arr[] = {1,5,10,10,10,10,20,25,28};
// int n = sizeof(arr)/sizeof(int);
// int lb = lowerBound(arr, n, 10);
// cout<<"Lower Bound = " << lb << endl;
// int ub = upperBound(arr, n, 10);
// cout << "Upper bound = " << ub << endl;
// cout << ub - lb;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main() {
// int arr[] = {1,5,10,10,10,10,20,25,28};
// int n = sizeof(arr)/sizeof(int);
// if(binary_search(arr,arr+n,22))
// cout << "found\n";
// else
// cout << "Not found\n";
// int *lb = lower_bound(arr, arr + n, 10);
// int *ub = upper_bound(arr, arr + n, 10);
// cout << ub - lb;
// }
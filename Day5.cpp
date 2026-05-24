// leetcode438
// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
// bool isAnagram(string s, string p) {
// vector<int> v1(26),v2(26);
// for(int i=0 ; i<s.size() ; i++) {
// v1[s[i]-'a']++;
// v2[p[i]-'a']++;
// }
// return v1==v2;
// }
// public:
// vector<int> findAnagrams(string s, string p) {
// int left=0;
// int m = p.size();
// int right=m-1;
// vector<int> ans;
// while(right<s.size()) {
// if(isAnagram(s.substr(left,m),p)){
// ans.push_back(left);
// }
// left++;
// right++;
// }
// return ans;
// }
// };


// Recursion
// #include<iostream>
// #include<vector>
// using namespace std;
// void series(int i, int n) {
// if(i>n) return;
// cout << i << " ";
// series(i+1,n);
// }
// int main() {
// series(1, 10);
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void series(int n) {
// if(n==0) return;
// series(n-1);
// cout << n << " ";
// }
// int main() {
// series(5);
// }

// sumofdigits
// #include<iostream>
// #include<vector>
// using namespace std;
// int sumOfDigits(int n) {
// if(n<10)
// return n;
// return n%10 + sumOfDigits(n/10);
// }
// int main() {
// cout << sumOfDigits(7524);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int power(int n, int p) {
// if(p==0)
// return 1;
// return n * power(n, p-1);
// }
// int main() {
// cout << power(2, 5);
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int power(int n, int p) {
// int ans = 1;
// while(p) {
// int first = p&1;
// if(first){
// ans *= n;
// }
// n = n*n;
// p = p >> 1;
// }
// return ans;
// }
// int main() {
// cout << power(2,5);
// }

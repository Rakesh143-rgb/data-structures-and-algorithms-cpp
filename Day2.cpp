// #include<iostream>
// using namespace std;
// int main() {
// int arr[10][10];
// int  r, c;
// cout<<"Enter row and col:";
// cin >> r >> c;
// //input
// for (int i = 0; i < r;i++){
// for (int j = 0; j < c;j++) {
// cout<<"Enter value ["<<i+1<<","<<j+1<<"]-";
// cin >> arr[i][j];
// }
// cout<<endl;
// }
// //output
// for (int i = 0; i < r;i++){
// for (int j = 0; j < c;j++) {
// cout<<arr[i][j]<<'\t';
// }
// cout<<endl;
// }

// //  transpose output
// for (int i = 0; i < c;i++){
// for (int j = 0; j < r;j++) {
// cout<<arr[j][i]<<'\t';
// }
// cout<<endl;
// }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
// vector<vector<int>> 
// arr={{10,20,30,40},{50,60},{90,100,110,120}};
// // arr.size(); //row
// // arr[0].size(); //col
// for (int i = 0; i < arr.size(); i++) {
// for (int j = 0; j < arr[i].size(); j++){
// cout << arr[i][j] << "\t";
// }
// cout << endl;
// }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
// char s[20];
// cout << "enter name:";
// // cin >> s;
// cin.getline(s, 20);
// cout << s;
// }

// #include<iostream>
// #include<string.h>
// using namespace std;
// int main() {
// char s[20]="abcd";
// cout << strlen(s);
// }

// #include<iostream>
// #include<string.h>
// using namespace std;
// int main() {
// char s1[10]="abcd";
// char s2[20]="xyz";
// strcat(s1,s2);
// cout << s1;
// }

// #include<iostream>
// #include<string.h>
// using namespace std;
// int main() {
// char s1[10]="xyz ";
// char s2[20]="xyz";
// int n = strcmp(s1,s2);
// cout << n;
// }

// #include<iostream>
// #include<string.h>
// using namespace std;
// int main() {
// char s1[30]="My name is SP";
// char s2[20]="ni";
// char *p = strstr(s1, s2);
// // cout << p;
// if(p==nullptr)
// cout << "Sub string not found";
// else
// cout << "Sub string found";
// }

// #include<iostream>
// #include<string.h>
// using namespace std;
// int main() {
// char s1[30]="My name is SP";
// strrev(s1);
// cout << s1;
// }

// #include<iostream>
// using namespace std;
// int main() {
// string s;
// cout << "Enter name ";
// // cin >> s;
// getline(cin, s);
// cout << s;
// }

#include<iostream>
using namespace std;
int main() {
string s= "abcd";
s.push_back('a');
s.insert(s.begin() + 2, 'R');
s.pop_back();
s.erase(s.begin() + 2);
s = "abcdefgh";
s.erase(s.begin() + 2, s.end() - 2);
cout << s;
}


// #include<iostream>
// using namespace std;
// int main() {
// string s1= "abcd";
// string s2= "xyz";
// if(s1 > s2)
// cout << "s1>s2";
// else
// cout << "s1<=s2";
// }


// #include<iostream>
// using namespace std;
// int main() {
// string s1= "abcd";
// string s2= "xyz";
// string s3 = s1 + " " + s2;
// cout << (s3);
// }
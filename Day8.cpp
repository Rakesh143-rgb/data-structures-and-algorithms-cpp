// // Stack Using Array
// #include<iostream>
// using namespace std;
// #define MAXSTK 5
// class Stack{
// int data[MAXSTK];
// int top;
// public:
// Stack() {
// top = -1;
// }
// void push(int element) {
// if(top == MAXSTK-1){
// cout << "Overflow\n";
// return;
// }
// top++;
// data[top] = element;
// }
// void pop() {
// if(top == -1){
// cout << "Underflow\n";
// return;
// }
// top--;
// }
// int peek() {
// return data[top];
// }
// bool isEmpty() {
// return top == -1;
// }
// int size() {
// return top + 1;
// }
// };
// int main() {
// Stack stk;
// stk.push(10);
// stk.push(20);
// stk.push(30);
// stk.push(40);
// stk.push(50);
// stk.push(60);
// while(!stk.isEmpty()){
// cout<<stk.peek()<<endl;
// stk.pop();
// }
// stk.pop();
// }

// Stack using singly Linked list
// #include<iostream>
// using namespace std;
// class Node {
// public:
// int value;
// Node *next;
// Node(int x) {
// value = x;
// next = nullptr;
// }
// };
// class LinkedList {
// Node *Top;
// public:
// LinkedList() {
// Top = nullptr;
// }
// void addFirst(int element) {
// Node *temp = new Node(element);
// temp->next = Top;
// Top = temp;
// }
// void output() {
// Node *ptr = Top;
// while(ptr != nullptr) {
// cout << ptr->value << " ";
// ptr = ptr->next;
// }
// cout << endl;
// }
// Node* findNode(int element) {
// Node *ptr = Top;
// while(ptr != nullptr) {
// if(ptr->value == element)
// return ptr;
// ptr = ptr->next;
// }
// return nullptr;
// }

// void delFirst() {
// if(Top == nullptr){
// cout << "Emty List\n";
// return;
// }
// Node *ptr = Top;
// Top = Top->next;
// cout<<ptr->value<<" deleted\n";
// delete ptr;
// }
// void reverse(){
// Node *p1=Top->next;
// Node *p2 = Top;
// Node *p3 = nullptr;
// while(p1 != nullptr) {
// p2->next = p3;
// p3 = p2;
// p2 = p1;
// p1 = p1->next;
// }
// p2->next = p3;
// Top = p2;
// }
// };
// int main() {
// LinkedList list;
// list.addFirst(10);
// list.addFirst(20);
// list.addFirst(30);
// list.output();
// list.delFirst();
// list.output();
// list.reverse();
// list.output();
// }

// predefined Stack
// #include<iostream>
// #include<stack>
// using namespace std;
// int main() {
// stack<int> stk;
// stk.push(10);
// stk.push(20);
// stk.push(30);
// stk.push(40);
// stk.push(50);
// while(!stk.empty()){
// cout << stk.top() << endl;
// stk.pop();
// }
// }

// Infix to Postfix
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
bool isOperator(char ch) {
if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
return true;
return false;
}
int precedence(char op) {
if(op=='*' || op=='/')
return 2;
else if(op=='+' || op=='-')
return 1;
else
return 0;
}
string inToPost(string in) {
stack<char> stk;
string post;
for(int i=0 ; i<in.size() ; i++) {
if(isOperator(in[i])){
while(!stk.empty() && 
precedence(stk.top()) >= precedence(in[i])){
post.push_back(stk.top());
stk.pop();
}
stk.push(in[i]);
}
else {
post.push_back(in[i]);
}
}
while(!stk.empty()) {
post.push_back(stk.top());
stk.pop();
}
return post;
}
string inToPre(string in) {
stack<char> stk;
string pre;
for(int i=in.size()-1 ; i>=0 ; i--) {
if(isOperator(in[i])){
while(!stk.empty() && 
precedence(stk.top()) > precedence(in[i])){
pre.push_back(stk.top());
stk.pop();
}
stk.push(in[i]);
}
else {
pre.push_back(in[i]);
}
}
while(!stk.empty()) {
pre.push_back(stk.top());
stk.pop();
}
reverse(pre.begin(), pre.end());
return pre;
}
int main() {
string in = "a+b*c/d-e"; 
string post = inToPost(in);
cout<<"Postfix = "<<post<<endl;
string pre = inToPre(in);
cout<<"Prefix = "<<pre<<endl;
}
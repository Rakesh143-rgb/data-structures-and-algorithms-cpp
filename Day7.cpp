// // Singly Circular Linked List implementation
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
// class CircularLinkedList {
// Node *head, *tail;
// public:
// CircularLinkedList() {
// head = tail = nullptr;
// }
// void addFirst(int element) {
// Node *temp = new Node(element);
// if(head == nullptr)
// head = tail = temp;
// else {
// temp->next = head;
// head = temp;
// }
// tail->next = head;
// }
// void addLast(int element) {
// Node *temp = new Node(element);
// if(head == nullptr)
// head = tail = temp;
// else {
// tail->next = temp;
// tail = temp;
// }
// tail->next = head;
// }
// void output() {
// Node *ptr = head;
// while(ptr != tail) {
// cout << ptr->value << " ";
// ptr = ptr->next;
// }
// cout<<tail->value << endl;
// }
// Node* findNode(int element) {
// Node *ptr = head;   
// while(ptr != tail) {
// if(ptr->value == element)
// return ptr;
// ptr = ptr->next;
// }
// if(tail->value == element)
// return tail;
// return nullptr;
// }
// void addAfter(Node *loc, int element) {
// if(loc == tail){
// addLast(element);
// return;
// }
// Node *temp = new Node(element);
// temp->next = loc->next;
// loc->next = temp;
// }
// void delFirst() {
// if(head == nullptr){
// cout << "Emty List\n";
// return;
// }
// Node *ptr = head;
// if(head == tail){
// head = tail = nullptr;
// }
// else{
// head = head->next;
// tail->next = head;
// }
// cout << ptr->value << " deleted\n";
// delete ptr;
// }
// void defAfter(Node *loc) {
// if(loc == tail){
// delFirst();
// return;
// }
// Node *ptr = loc->next;
// if(ptr == tail){
// tail = loc;
// }
// loc->next = ptr->next;
// cout << ptr->value << " deleted\n";
// delete ptr;
// }
// void reverse(){
// Node *p1=head->next;
// Node *p2 = head;
// Node *p3 = tail;
// while(p1 != head) {
// p2->next = p3;
// p3 = p2;
// p2 = p1;
// p1 = p1->next;
// }
// p2->next = p3;
// head = p2;
// tail=p1;
// }
// };
// int main() {
// CircularLinkedList list;
// list.addFirst(10); 
// list.addFirst(5);
// list.output();
// list.addLast(20);
// list.addLast(30);
// list.output();
// list.addAfter(list.findNode(30), 100);
// list.output();
// list.reverse();
// list.output();
// list.delFirst();
// list.output();
// list.defAfter(list.findNode(20));
// list.output();
// }


// Doubly Circular Linked List implementation
#include<iostream>
using namespace std;
class Node {
public:
int value;
Node *next,*prev;
Node(int x) {
value = x;
next = prev = nullptr;
}
};
class CircularDoublyLinkedList {
Node *head;
Node *tail;
public:
CircularDoublyLinkedList() {
head = tail = nullptr;
}
void addFirst(int element) {
Node *temp = new Node(element);
if(head==nullptr){
head = tail = temp;
}
else {
temp->next = head;
head->prev = temp;
head = temp;
}
head->prev = tail;
tail->next = head;
}
void addLast(int element) {
Node *temp = new Node(element);
if(head==nullptr){
head = tail = temp;
}
else{
tail->next = temp;
temp->prev = tail;
tail = temp;
}
head->prev = tail;
tail->next = head;
}
void output() {
Node *ptr = head;
while(ptr != tail) {
cout << ptr->value << " ";
ptr = ptr->next;
}
cout<<tail->value<< endl;
}
Node* findNode(int element) {
Node *ptr = head;
while(ptr != tail) {
if(ptr->value == element)
return ptr;
ptr = ptr->next;
}
if(tail->value == element)
return tail;
return nullptr;
}
void addAfter(Node *loc, int element) {
if(loc == tail) {
addLast(element);
return;
}
Node *temp = new Node(element);
temp->next = loc->next;
temp->prev = loc;
loc->next->prev = temp;
loc->next = temp;
}
void addBefore(Node *loc, int element) {
if(loc == head) {
addFirst(element);
return;
}
Node *temp = new Node(element);
temp->next = loc;
temp->prev = loc->prev;
loc->prev->next = temp;
loc->prev = temp;
}
void delFirst() {
if(head == nullptr){
cout << "Emty List\n";
return;
}
Node *ptr = head;
if(head == tail) {
head = tail = nullptr;
}
else{
head = head->next;
head->prev = tail;
tail->next = head;
}
cout<<ptr->value<<" deleted\n";
delete ptr;
}
void delLast() {
if(head == nullptr){
cout << "Emty List\n";
return;
}
Node *ptr = tail;
if(head == tail) {
head = tail = nullptr;
}
else{
tail = tail->prev;
head->prev = tail;
tail->next = head;
}
cout<<ptr->value<<" deleted\n";
delete ptr;
}
void delAfter(Node *loc) {
if(loc->next == tail){
delLast();
return;
}
if(loc->next != nullptr){
Node *ptr = loc->next;
loc->next = ptr->next;
ptr->next->prev = loc;
cout << ptr->value << " deleted\n";
delete ptr;
}
}
void delBefore(Node *loc) {
if(loc->prev == head){
delFirst();
return;
}
if(loc->prev != nullptr){
Node *ptr = loc->prev;
loc->prev = ptr->prev;
ptr->prev->next = loc;
cout << ptr->value << " deleted\n";
delete ptr;
}
}
void delNode(Node*loc) {
if(loc == head){
delFirst();
return;
}
if(loc == tail) {
delLast();
return;
}
loc->next->prev = loc->prev;
loc->prev->next = loc->next;
cout << loc->value << " deleted\n";
delete loc;
}
void reverse(){
if(head == tail){
return;
}
swap(head->value, tail->value);
Node *p1=head->next, *p2=tail->prev;
while(p1 != p2 && p2->next!=p1) {
swap(p1->value, p2->value);
p1 = p1->next;
p2 = p2->prev;
}
}
};
int main() {
CircularDoublyLinkedList list;
list.addFirst(10);
list.addFirst(5);
list.output();
list.addLast(20);
list.addLast(30);
list.addLast(40);
list.output();
Node *loc = list.findNode(20);
list.addAfter(loc, 100);
list.output();
list.addBefore(loc, 200);
list.output();
list.delFirst();
list.output();
list.delLast();
list.output();
list.delAfter(loc);
list.output();
list.delBefore(loc);
list.output();
list.delNode(loc);
list.addLast(40);
list.output();
list.reverse();
list.output();
}

// // Predefined
// #include<iostream>
// #include<list>
// using namespace std;
// void output(list<int> &lst) {
// for(int i:lst) {
// cout<<i<<" ";
// }
// cout << endl;
// }
// int main() {
// list<int> lst;
// lst.push_front(10);   //add First
// lst.push_front(20);  
// lst.push_front(30);
// output(lst);
// lst.push_back(40);     //add Last
// lst.push_back(50);
// lst.push_back(60);
// lst.push_back(70);
// output(lst);
// auto i = lst.begin();
// advance(i, 2);        //inc | dec
// lst.insert(i, 100);   // add Before
// output(lst);
// lst.pop_front();      //del First
// output(lst);
// lst.pop_front();
// lst.pop_back();       //del last
// output(lst);
// lst.erase(i);
// output(lst);
// lst.reverse();
// output(lst);
// cout << lst.size() << endl;
// lst.sort();
// output(lst);
// lst.front();       //first element
// lst.back();       //last element
// output(lst);
// }

// #include<iostream>
// #include<forward_list>
// using namespace std;
// void output(forward_list<int> &lst) {
// for(int i:lst) {
// cout<<i<<" ";
// }
// cout << endl;
// }
// int main() {
// forward_list<int> lst;
// lst.push_front(10); //add First
// lst.push_front(20);
// lst.push_front(30);
// lst.push_front(40);
// lst.push_front(50);
// output(lst);
// auto i = lst.begin();
// advance(i, 2);
// lst.insert_after(i,100); //add After
// output(lst);
// lst.pop_front(); //del first
// output(lst);
// lst.erase_after(i); // del after
// output(lst);
// lst.reverse();
// output(lst);
// }



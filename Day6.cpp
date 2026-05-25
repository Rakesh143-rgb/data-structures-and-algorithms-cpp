// // singly Linked list implementation 
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
// Node *head;
// public:
// LinkedList() {
// head = nullptr;
// }
// void addFirst(int element) {
// Node *temp = new Node(element);
// temp->next = head;
// head = temp;
// }
// void output() {
// Node *ptr = head;
// while(ptr != nullptr) {
// cout << ptr->value << " ";
// ptr = ptr->next;
// }
// cout << endl;
// }
// Node* findNode(int element) {
// Node *ptr = head;
// while(ptr != nullptr) {
// if(ptr->value == element)
// return ptr;
// ptr = ptr->next;
// }
// return nullptr;
// }
// void addAfter(Node *loc, int element) {
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
// head = head->next;
// cout<<ptr->value<<" deleted\n";
// delete ptr;
// }
// void defAfter(Node *loc) {
// if(loc->next != nullptr){
// Node *ptr = loc->next;
// loc->next = ptr->next;
// cout << ptr->value << " deleted\n";
// delete ptr;
// }
// }
// void reverse(){
// Node *p1=head->next;
// Node *p2 = head;
// Node *p3 = nullptr;
// while(p1 != nullptr) {
// p2->next = p3;
// p3 = p2;
// p2 = p1;
// p1 = p1->next;
// }
// p2->next = p3;
// head = p2;
// }
// };
// int main() {
// LinkedList list;
// list.addFirst(10);
// list.addFirst(20);
// list.addFirst(30);
// list.output();
// Node *loc = list.findNode(20);
// list.addAfter(loc, 70);
// list.output();
// list.delFirst();
// list.output();
// list.defAfter(loc);
// list.addFirst(30);
// list.output();
// list.reverse();
// list.output();
// }

// Doublely Linked List implementation
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
class DoublyLinkedList {
Node *head;
Node *tail;
public:
DoublyLinkedList() {
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
}
void addLast(int element) {
Node *temp = new Node(element);
if(head==nullptr){
head = tail = temp;
}
else {
tail->next = temp;
temp->prev = tail;
tail = temp;
}
}
void output() {
Node *ptr = head;
while(ptr != nullptr) {
cout << ptr->value << " ";
ptr = ptr->next;
}
cout << endl;
}
Node* findNode(int element) {
Node *ptr = head;
while(ptr != nullptr) {
if(ptr->value == element)
return ptr;
ptr = ptr->next;
}
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
head->prev = nullptr;
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
tail->next = nullptr;
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
Node *p1=head, *p2=tail;
while(p1 != p2 && p2->next!=p1) {
swap(p1->value, p2->value); 
p1 = p1->next;
p2 = p2->prev;
}
}
};
int main() {
DoublyLinkedList list;
list.addFirst(10);
list.addLast(20);
list.addLast(30);
list.addLast(40);
list.addLast(50);
list.output();
Node *loc = list.findNode(30);
list.addAfter(loc, 70);
list.addBefore(loc, 80);
list.output();
list.delFirst();
list.output();
list.delLast();
list.output();
list.delAfter(loc);
list.delBefore(loc);
list.output();
list.delNode(loc);
list.addFirst(10);
list.output();
list.reverse();
list.output();
}
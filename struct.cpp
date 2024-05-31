#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
Node *head = NULL;
void Insert(int new_data){
	Node *n = new Node();
	n-> data = new_data;
	n->next = head;
	head = n;
}

void Display(){
	Node *ptr;
	ptr = head;
	while(ptr != NULL)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
}
int main(){
	Insert(3);
	Insert(1);
	Insert(7);
	Insert(2);
	Insert(9);
	Display();
	return 0;
}

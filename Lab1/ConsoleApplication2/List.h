#pragma once
#ifndef __List__
#define __List__
#include <iostream>

template <class T> 
struct Node {
	T data;
	Node <T> *next;
};

template <class T> 
class List {
private:  
	Node <T> *head; 		// pointer to 1st node in list
	int length;

public:  
	List();			// default constructor sets ptr to null
	~List();
	void Insert(T data);		// add a new node to the end of the list
	void Delete();		// delete a node at the end
	T Get(int index);		// get some data from the list e.g. 5th item etc
	void PrintList();		// print all data nodes in the list
};

template <class T>
List<T>::List() {
	head = nullptr;
	length = 0;
}

template <class T>
List<T>::~List() {
	while (head) {
		Delete();
	}
}

template <class T>
void List<T>::Insert(T data) {
	Node<T> *node = new Node<T>;
	node->next = nullptr;
	node->data = data;

	if (!head) {
		head = node;
		length++;
		return;
	}

	Node<T> *ptr = head;

	while (ptr->next) {
		ptr = ptr->next;
	}

	ptr->next = node;
	length++;
}

template <class T>
void List<T>::Delete() {
	if (!head) {
		std::cout << "nouthing to delete" << std::endl;
		return;
	}

	if (!head->next) {
		delete head;
		head = nullptr;
		std::cout << "deleted last node" << std::endl;
		return;
	}

	Node<T> *ptr = head;
	Node<T> *prev = head;

	while (ptr->next) {
		prev = ptr;
		ptr = ptr->next;
	}

	delete prev->next;
	prev->next = nullptr;
	length--;
	std::cout << "deleted node" << std::endl;
}

template <class T>
T List<T>::Get(int index) {
	if (index >= length) {
		std::cout << "invalid index, max is " << (length - 1) << "returning last value" << std::endl;
		index = length;
	}

	Node<T> *ptr = head;

	for (int i = 0; i < index; i++) {
		ptr = ptr->next;
	}

	return ptr->data;
}

template <class T>
void List<T>::PrintList() {
	Node<T> *ptr = head;
	int i = 0;

	while (ptr) {
		std::cout << "index " << i << " | value " << ptr->data << std::endl;
		ptr = ptr->next;
		i++;
	}
}

#endif // !__List__
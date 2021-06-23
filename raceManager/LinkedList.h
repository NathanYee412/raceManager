#pragma once

#include<iostream>

// linked list implementation using templates
template <typename T>

class Node {
private:
	T Data;
	Node* prev;
	Node* next;

public:

	// declare head in public scope;
	Node* head;

	Node() {
		head = NULL;
	}

	// returns a new node with set data and prev/next as NULL
	Node* getNewNode(int x) {
		Node* newNode = new Node;
		newNode->Data = x;
		newNode->prev = NULL;
		newNode->next = NULL;

		return newNode;
	}

	void insertAtHead(T data) {
		Node* newNode = getNewNode(data);

		// check if head is NULL, if so set new node as head
		if (head == NULL) {
			head = newNode;
			return;
		}

		head->prev = newNode;
		newNode->next = head;
		head = newNode;

	}

	void print() {
		Node* temp = head;
		while (temp != NULL) {
			std::cout << temp->Data << " ";
			temp = temp->next;
		}

	}
};

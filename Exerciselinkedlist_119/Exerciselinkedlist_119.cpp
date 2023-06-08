#include<iostream>
using namespace std;

class Node {
public:
	int Ananda;
	string Naufal;
	Node* next;
	Node* prev;
};

class CircularLinkedList {
private:
	Node* LAST;

public:
	CircularLinkedList() {
		LAST = NULL;
	}

	void addNode();
	bool search(int ananda, Node** previous, Node** current);
	bool listEmpty();
	bool delNode(int ananda);
	void traverse();
};

void CircularLinkedList::addNode() {
	int Name;
	string panggilan;
	cout << "\nEnter the name : ";
	cin >> Name;
	cout << "\nEnter the mickname : ";
	Node* newNode = new Node();
	newNode->Ananda = Name;
	newNode->Naufal = panggilan;
}

bool CircularLinkedList::search(int Ananda, Node** naufal, Node** ananda) {
	*naufal = LAST->next;
	*ananda = LAST->next;
	while (*ananda != LAST&& ananda != (naufal)-> Ananda {
		if (Ananda == (*ananda)->Ananda) {
			return true;
		}
		*naufal = *ananda;
		*ananda = (*ananda)->next;
	}
	if (Ananda == LAST->Ananda) {
		return true;
	}
	else {
		return false;
	}
}
bool CircularLinkedList::listEmpty() {
	return LAST == NULL;
}
bool CircularLinkedList::delNode(int ananda) { //write your answer here
	Node* previous, * current;
	previous = current = NULL;
	if (search(ananda, &previous, &current) == false)
		return false;
	if (current->next != NULL)
		current->next->prev = previous;
	if (previous != NULL)
		previous->next = current->next;
	else

void CircularLinkedList::traverse() {
	if (listEmpty()) {
		cout << "\nList is empty\n";
	}
	else {
		cout << "\nRecords in the list are:\n";
		Node* AnandaNode = LAST->next;
		while (AnandaNode != LAST) {
			cout << AnandaNode->Ananda << " " << AnandaNode->Ananda << endl;
			AnandaNode = AnandaNode->next;
		}
	}
}
int main() {
	CircularLinkedList obj;
	while (true) {
		try {
			cout << "\nMenu" << endl;
			cout << "1. Add a record to the list" << endl;
			cout << "2. Delete a record from the list" << endl;
			cout << "3. View all the records in the list" << endl;
			cout << "4. Exit" << endl;
			cout << "\nEnter your choice (1-5): ";
			char ch;
			cin >> ch;
			switch (ch) {
			case '1': {
				obj.addNode();
				break;
			}
			case '2': {
				obj.delNode();
				break;
			}
			case '3': {
				obj.traverse();
				break;
			}
			case '4': {
				return 0;
			}
			default: {
				cout << "Invalid option" << endl;
				break;
			}
			}
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}
	}
	return 0;


#include "List.h"

List::List()
{
	head = NULL;

}

bool List::emptyList() {

	if (head == NULL) {

		return true;
	}

	else
	{
		return false;
	}


}

void List::insertafter(int old, int New)
{
	node* current = head; //points on the current node

	if (head == NULL)
	{
		head = new node;
	}

	while (true) {


		if (current->get_val() == old) //once value found
		{
			node* Newnode = new node(New); //makes a new node

			Newnode->set_next(current->get_next()); //give node the address of the node withe previous one

			current->set_next(Newnode); //makes the old node store the address of the new node

			break;

		}
		else if (current->get_val() != old && current->get_next() != NULL) //if value not found and not endthen travers
		{
			current = current->get_next();



		}

		else if (current->get_next() == NULL)
		{
			node* Newnode = new node(New); //make a new node

			current->set_next(Newnode);
			Newnode->set_next(NULL);


			break;

		}

	}
}

void List::deleteNode(int value) {
	node* current = head;

	if (head == NULL) {
		cout << "List is empty" << endl;
		return;
	}


	// Traverse the list to find the node before the one to be deleted
	while (current->get_next() != NULL) {
		if (current->get_next()->get_val() == value) {
			node* temp = current->get_next();
			current->set_next(temp->get_next());
			delete temp;
			return;
		}
		current = current->get_next();
	}


	cout << "Value: " << value << " not found in list" << endl;
}


void List::insert_begin(int value)
{
	if (head == NULL) {
		head = new node(value);
		head->set_next(NULL);
	}
	else {


		node* Newnode = new node(value); //making new node

		Newnode->set_next(head);
		head = Newnode;

	}



}

void List::insert_end(int value)
{
	node* current = head;
	node* Newnode = new node(value);
	Newnode->set_next(NULL);
	if (head == NULL)
	{
		head = Newnode;
		return;
	}
	while (true)
	{


		if (current->get_next() == NULL)
		{


			current->set_next(Newnode);

			break;

		}
		else
		{

			current = current->get_next();

		}

	}

}

void List::traverse()
{
	node* current = head;

	while (current != NULL)
	{




		cout << current->get_val() << endl;
		current = current->get_next();


	}

	if (head == NULL)
	{
		cout << "List is empty";
	}







}



void main()
{
	List* a = new List;
	a->insert_end(1);
	a->insert_end(2);
	a->insert_end(3);
	a->insert_end(4);



	a->traverse();



}
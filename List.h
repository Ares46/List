#include"node.h"

class List
{
private:

	node* head;

public:
	List();


	bool emptyList();

	void insertafter(int oldV, int newV);

	void deleteNode(int value);

	void insert_begin(int value);

	void insert_end(int value);

	void traverse();




};




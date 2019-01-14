
class SNode {
public:
	int elem;
	SNode *next;
};

class IntegerLinkedList {
private:
	SNode * head;
public:
	IntegerLinkedList() {
		head = nullptr;
	}

	void addFront(int x) {
		SNode *tmp = head;
		head = new SNode;
		head->next = tmp;
		head->elem = x;
	}

	void print(void) {

		SNode *tmp = head;

		while (tmp != nullptr)
		{
			std::cout << tmp->elem << " ";
			tmp = tmp->next;

		}

		std::cout << std::endl;
	}

	int getInteger(int position) { // COMPLETE THIS

			SNode *tmp = head;
			if (head = nullptr)
			{
				return -1;
			}
			else {
				for (int i = 1; i < position; i++)
				{
					tmp = tmp->next;
				}
				return tmp->elem;
			}


	}

	int getMax(void)
	{
		return (helper(head));
	}
	int helper(SNode * currentPtr)
	{
			if (currentPtr == nullptr)
			{
				return INT_MIN;
			}

			if (currentPtr->elem > helper(currentPtr->next))
			{
				return currentPtr->elem;
			}
			else
			{
				return helper(currentPtr->next);
			}
	}
};

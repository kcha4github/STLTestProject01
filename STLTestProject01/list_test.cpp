#include "list_test.h"

void ListTest::test() {
	std::cout << "List Test Module start" << std::endl;

	std::list<int> list;

	// add element from list head
	list.push_front(1);
	list.push_front(2);
	list.push_front(3);

	// add elemenet from list tail
	list.push_back(4);
	list.push_back(5);

	std::cout << "show all element from head. (3 2 1 4 5)" << std::endl;
	std::for_each(list.cbegin(), list.cend(), [](int x) {
		std::cout << x << " ";
		});
	std::cout << std::endl;

	// pop 1 element of front
	list.pop_front();
	std::cout << "show all element from head. (2 1 4 5)" << std::endl;
	std::for_each(list.cbegin(), list.cend(), [](int x) {
		std::cout << x << " ";
		});
	std::cout << std::endl;

}
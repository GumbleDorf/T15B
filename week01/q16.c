typedef struct _Node {
	int value;
	struct _Node *next;
} Node;
 
typedef Node *List;  // pointer to first Node


int sumList(List l) {
	Node *tmp = l;
	int sum = 0;
	while (tmp != null) { 
		sum = sum + n->value
	}
	return sum;
}

/*
Recursive version, sorry we didn't get time to go over this in the lab, more on recursion in the coming weeks.
*/
int sumList(List l) {
	if(l == NULL) {
		return 0;
	} else {
		return l->value + sumList(l->next);
	}
}

/*
while (n->next != null) { sum = sum + n->value}


node1(2) -> node2(7) -> node3(10) -> NULL



List l = head;

l->value == 2

List r = l->next
r->value

(l->next)->value == 7

l->next->next->value == 10

*/
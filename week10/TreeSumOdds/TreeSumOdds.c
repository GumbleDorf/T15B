
#include <stdlib.h>

#include "tree.h"

int TreeSumOdds(Tree t) {
	//base
	if (t == NULL) {
		return 0;
	}
	//recursive
	if (t->value%2 == 1) {
		return t->value + TreeSumOdds(t->left) + TreeSumOdds(t->right);
	} else {
		return TreeSumOdds(t->left) + TreeSumOdds(t->right);
	}
}


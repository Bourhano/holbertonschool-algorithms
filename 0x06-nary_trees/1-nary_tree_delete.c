#include "nary_trees.h"

/**
 * nary_tree_delete - Deletes the whole tree
 * @tree: pointer to the root of the tree
 **/
void nary_tree_delete(nary_tree_t *tree)
{
	if (tree == 0)
		return;
	nary_tree_delete(tree->children);
	nary_tree_delete(tree->next);
	free(tree->content);
	free(tree);
}

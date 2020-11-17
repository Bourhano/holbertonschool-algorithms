#include "nary_trees.h"

/**
 * nary_tree_traverse - DeletesWalks the whole N-ary tree, node by node.
 * @root: pointer to the root of the tree
 * @action: a function pointer to be ran on each node
 **/
void nary_tree_traverse(nary_tree_t *root,
			void (*action)(nary_tree_t const *node, size_t depth))
{
	static size_t depth, max_depth;
	size_t ret;

	while (root)
	{
		action(root, depth);
		++depth;
		nary_tree_traverse(root->children, action);
		root = root->next;
	}
	if (max_depth < depth)
		max_depth = depth;
	if (depth == 0)
		ret = max_depth, max_depth = 0;
	else
		--depth;
	return (ret);
}

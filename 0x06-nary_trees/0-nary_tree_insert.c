#include "nary_trees.h"

/**
 * create_tree - creates a tree
 * @str: the content of the root
 *
 * Return: address of the created root
 */
nary_tree_t *create_tree(char const *str)
{
	nary_tree_t *t;

	t = malloc(sizeof(*t));
	if (!t)
		return (0);
	t->content = strdup(str);
	t->parent = NULL;
	t->nb_children = 0;
	t->children = NULL;
	t->next = NULL;
	return (t);
}


/**
 * nary_tree_insert -  insert a node in a N-ary tree
 * @parent: the parent of the new kid
 * @str: the string to add to the new kid
 *
 * Return: pointer to the new kid or NULL
 */
nary_tree_t *nary_tree_insert(nary_tree_t *parent, char const *str)
{
	nary_tree_t *t;

	if (!parent)
		return (create_tree(str));
	t = create_tree(str);
	if (!t)
		return (0);
	t->parent = parent;
	if (parent->nb_children++ == 0)
	{
		parent->children = t;
	}
	else
	{
		t->next = parent->children;
		parent->children = t;
	}
	return (t);
}

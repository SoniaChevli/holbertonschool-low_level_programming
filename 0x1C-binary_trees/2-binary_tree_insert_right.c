#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert right child
 * @value: value to store the new node
 *
 * Return: pointer to the created node. Otherwise NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}

	parent->right = new;

	return (new);
}

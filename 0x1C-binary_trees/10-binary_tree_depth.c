#include "binary_trees.h"
/**
 * binary_tree_depth - finds the binary_tree depth
 * @node: pointer to the node to measure the depth
 *
 * Return: depth. Otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *node)
{

	int depth = 0;

	if (node == NULL)
		return (0);
	if (node->parent != NULL)
		depth = (1 + binary_tree_depth(node->parent));
	return (depth);


}

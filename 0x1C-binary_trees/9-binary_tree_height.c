#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of binary tree
 * @tree: tree pointer to root to measure height
 *
 * Return: height. Otherwsie 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = -1;
	int right_height = -1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right);

	if (right_height > left_height)
		return (right_height + 1);
	else
		return (left_height + 1);

}

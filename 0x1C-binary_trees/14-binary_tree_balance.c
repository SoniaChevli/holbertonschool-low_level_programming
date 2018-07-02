#include "binary_trees.h"
/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure balance factor
 *
 * Return: balance factor. Otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int rightheight = 0;
	int leftheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		leftheight = (1 + binary_tree_balance(tree->left));

	if (tree->right != NULL)
		rightheight = (1 + binary_tree_balance(tree->right));


	return (leftheight - rightheight);
}

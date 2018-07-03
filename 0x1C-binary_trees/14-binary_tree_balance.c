#include "binary_trees.h"
#include "9-binary_tree_height.c"
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

	leftheight = (binary_tree_height(tree->left));

	rightheight = (binary_tree_height(tree->right));
	if (tree->left == NULL)
		leftheight--;
	if (tree->right == NULL)
		rightheight--;

	return (leftheight - rightheight);
}

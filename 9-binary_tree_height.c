#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl = 0;
	size_t hr = 0;

	if (!tree)
		return (0);

	if (tree->left)
		hl = 1 + binary_tree_height(tree->left);

	if (tree->right)
		hr = 1 + binary_tree_height(tree->right);

	if (hl > hr)
		return (hl);
	else
		return (hr);
}

#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree.
 * @tree: pointer to the root node of the tree to measure the depth.
 *
 * Return: depth or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}

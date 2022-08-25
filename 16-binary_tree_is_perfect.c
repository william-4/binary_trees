#include "binary_trees.h"

/**
 * leftdepth - measures depth for left nodes
 * @node: pointer to the root node of the tree to measure
 *
 * Return: depth
 */
size_t leftdepth(const binary_tree_t *node)
{
	size_t depth = 0;

	while (node)
	{
		depth++;
		node = node->left;
	}
	return (depth);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: True if perfect False/0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t i = leftdepth(tree);

	return (is_perfect_rec(tree, i, 0));
}

/**
 * is_perfect_rec - recursively checks if binary tree is perfect.
 * @tree: node to check
 * @depth: left nodes depth
 * @height: height of binary tree to compare to depth
 *
 * Return: True if perfect False/0 otherwise
 */
int is_perfect_rec(const binary_tree_t *tree, size_t depth, size_t height)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (depth == height + 1);

	if (!tree->left || !tree->right)
		return (false);

	return (is_perfect_rec(tree->left, depth, height + 1) &&
			is_perfect_rec(tree->right, depth, height + 1));
}

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
// https://leetcode.com/problems/diameter-of-binary-tree/description/
class Solution {
    public int diameterOfBinaryTree(TreeNode root) {
        int d[] = new int[1];
        diameter(root, d);
        return d[0];
    } 
    private int diameter(TreeNode root, int[]d){
        if(root == null) return -1;
        int left = 1 + diameter(root.left, d);
        int right = 1 + diameter(root.right, d);
        d[0] = Math.max(left + right, d[0]);
        return Math.max(left, right);
    }
}

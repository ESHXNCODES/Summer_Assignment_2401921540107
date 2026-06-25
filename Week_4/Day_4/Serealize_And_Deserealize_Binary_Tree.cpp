/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    void serializeHelper(TreeNode* root, string &s) {
        if (root == NULL) {
            s += "#,";
            return;
        }

        s += to_string(root->val) + ",";

        serializeHelper(root->left, s);
        serializeHelper(root->right, s);
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s = "";
        serializeHelper(root, s);
        return s;
    }
    // Decodes your encoded data to tree.
    TreeNode* deserializeHelper(string &data, int &i) {

        if (data[i] == '#') {
            i += 2;
            return NULL;
        }

        string num = "";

        while (data[i] != ',') {
            num += data[i];
            i++;
        }

        i++;

        TreeNode* root = new TreeNode(stoi(num));

        root->left = deserializeHelper(data, i);
        root->right = deserializeHelper(data, i);

        return root;
    }

    TreeNode* deserialize(string data) {
        int i = 0;
        return deserializeHelper(data, i);
    }
};

    

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
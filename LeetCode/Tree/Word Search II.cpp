#include<bits/stdc++.h>
using namespace std;
//word search II

    
    class Solution {
private:
    struct TrieNode {
        TrieNode* children[26];
        string word;

        TrieNode() {
            memset(children, 0, sizeof(children));
            word = "";
        }
    };

    void buildTrie(TrieNode *root, const vector<string> &words) {
        for (const string &word : words) {
            TrieNode *curr = root;
            for (char ch : word) {
                int idx = ch - 'a';
                if (!curr->children[idx]) {
                    curr->children[idx] = new TrieNode();
                }
                curr = curr->children[idx];
            }
            curr->word = word;
        }
    }
    
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        int m = board.size(), n = board.front().size();
        array<int, 5> DIR = {0, 1, 0, -1, 0};
        vector<string> result;
        TrieNode *root = new TrieNode();
        buildTrie(root, words);

       function<void(int, int, TrieNode*)> btrack = [&](int i, int j, TrieNode *curr) -> void {
            if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] == '#' || !curr) {
                return;
            }

            char ch = board[i][j];
            curr = curr->children[ch - 'a'];
            if (!curr) return;
            
            if (!curr->word.empty()) {
                result.emplace_back(curr->word);
                curr->word.clear();
            }

            board[i][j] = '#';
            for (int d = 0; d < 4; ++d) {
                btrack(i + DIR[d], j + DIR[d + 1], curr);
            }
            board[i][j] = ch;
        };

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                btrack(i, j, root);
            }
        }

        return result;
    }
};
int main() {
    Solution obj;
    vector<vector<char>> board = {
        {'o','a','a','n'},
        {'e','t','a','e'},
        {'i','h','k','r'},
        {'i','f','l','v'}
    };
    vector<string> words = {"oath","pea","eat","rain"};
    vector<string> res = obj.findWords(board, words);
    for (auto x : res) {
        cout << x << " ";
    }
    return 0;
}

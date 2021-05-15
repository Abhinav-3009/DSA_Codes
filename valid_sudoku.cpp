class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
	unordered_set<int> hashset;
	for (size_t i = 0; i < 9; ++i) {
		for (size_t j = 0; j < 9; ++j) {
			char c = board[i][j];
			if (c != '.') {
				int box = (i / 3) * 3 + j / 3;
				vector<int> keys;
				keys.push_back(i + 1 + 10 * 10 * 10 * (c - '0' + 1)); 
				keys.push_back((j + 1) * 10 + 10 * 10 * 10 * (c - '0' + 1));
				keys.push_back((box + 1) * 10 * 10 + 10 * 10 * 10 * (c - '0' + 1));

				for (int k = 0; k < keys.size(); k++) {
					if (hashset.count(keys[k]) > 0) {
						return false;
					}
					hashset.insert(keys[k]);
				}
			}
		}
	}

	return true;
}
};

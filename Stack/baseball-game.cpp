class Solution {
public:
    int calPoints(vector<string>& operations) {
    vector<int> record;
    int total = 0;
    for (const auto& op : operations) {
        if (op == "C") {
            if (!record.empty()) {
                total -= record.back();
                record.pop_back();
            }
        } else if (op == "D") {
            if (!record.empty()) {
                int score = 2 * record.back();
                record.push_back(score);
                total += score;
            }
        } else if (op == "+") {
            if (record.size() >= 2) {
                int score = record[record.size() - 1] + record[record.size() - 2];
                record.push_back(score);
                total += score;
            }
        } else {
            int score = stoi(op);
            record.push_back(score);
            total += score;
        }
    }

    return total;
    }
};

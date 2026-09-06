class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

       for (int i = 0; i < heights.size() - 1; i++) {
    int maxIndex = i;

    for (int j = i + 1; j < heights.size(); j++) {
        if (heights[j] > heights[maxIndex]) {
            maxIndex = j;
        }
    }

    swap(heights[i], heights[maxIndex]);
    swap(names[i],names[maxIndex]);
}
        return names;
    }
};
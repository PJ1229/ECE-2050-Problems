#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

string countSort(string &s);

int main() {
    string input = "banasjklgjsdljgnsjkgljsdlkgjklsjglkdsjgljdsaajgh;lsasjkgjsljglsjgljsduewutoeiwhs";
    cout << countSort(input) << endl;
}

string countSort(string &s) {
    string res = "";
    unordered_map<char, int> charFreqMap;

    for (char a : s) {
        charFreqMap[a]++;
    }

    for (const auto& pair : charFreqMap) {
        res += string(pair.second, pair.first);
    }

    return res;
}


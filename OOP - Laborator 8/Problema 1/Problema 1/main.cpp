#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>

using namespace std;

struct compare {
    bool operator()(pair<string, int> left, pair<string, int> right) {
        if (left.second == right.second)
            return left.first > right.first;
        else
            return left.second < right.second;
    }
};

int main() {
    FILE* file = fopen("input.txt", "rb");
    if (file == nullptr) {
        printf("Nu s-a putut deschide fisierul");
        return 1;
    }
    string s;
    char buffer[4096];
    while (!feof(file)) {
        auto read = fread(buffer, 1, sizeof(buffer), file);
        s.append(buffer, read);
    }
    fclose(file);

    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }

    map<string, int> hash;
    string const separators = { " ,?!." };
    size_t beg, pos = 0;
    while ((beg = s.find_first_not_of(separators, pos)) != s.npos) {
        pos     = s.find_first_of(separators, beg + 1);
        auto it = s.substr(beg, pos - beg);
        hash[it]++;
    }

    pair<string, int> aux;
    priority_queue<pair<string, int>, vector<pair<string, int>>, compare> words;
    for (auto it = hash.begin(); it != hash.end(); it++) {
        aux.first  = it->first;
        aux.second = it->second;
        words.push(aux);
    }
    while (!words.empty()) {
        cout << words.top().first << " => " << words.top().second << endl;
        words.pop();
    }
    return 0;
}
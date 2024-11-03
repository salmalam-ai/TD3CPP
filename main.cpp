#include<iostream>
#include<vector>
#include<map>
#include <cctype>
#include <string>
#include <stack>
#include <queue>


using namespace std ;

/*
void countFrequencyBruteForce ( const vector<int>& numbers){
    int n = numbers.size();
    for (int i=0;i<n;++i){
        int count = 1 ; 
        bool already_counted = false;
    
    for ( int j=0 ; j<i ; ++j){
        if (numbers[j]==numbers[i]){
            already_counted=true;
            break;
        }
    }
     if (!already_counted) {
            for (int j = i + 1; j < n; ++j) {
                if (numbers[j] == numbers[i]) {
                    ++count;
                }
            }
            cout << numbers[i] << " : " << count << " times" << endl;
        }
    }

}

map<int, int> countFrequencyOptimal(const vector<int>& numbers) {
    map<int, int> frequencyMap;

    for (int num : numbers) {
        frequencyMap[num]++;
    }

    return frequencyMap;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};

    
    vector<int> indicesBruteForce = twoSumBruteForce(nums, target);
    cout << "Brute Force Solution: ["
         << indicesBruteForce[0] << ", "
         << indicesBruteForce[1] << "]"
         << endl;

    
    vector<int> indicesOptimal = twoSumOptimal(nums, target);
    cout << "Optimal Solution: ["
         << indicesOptimal[0] << ", "
         << indicesOptimal[1] << "]"
         << endl;

    return 0;

    
    }*/


bool isPalindrome(const string& word) {
    stack<char> charStack;
    queue<char> charQueue;
   
    for (char ch : word) {
        charStack.push(ch);
        charQueue.push(ch);
    }

    while (!charStack.empty() && !charQueue.empty()) {
        if (charStack.top() != charQueue.front()) {
            return false; 
        }
        charStack.pop();
        charQueue.pop();
    }

    return true;  
}
int main() {
    string word;

    cout << "Entrez un mot : ";
    cin >> word;

    if (isPalindrome(word)) {
        cout << word << " est un palindrome." << endl;
    } else {
        cout << word << " n'est pas un palindrome. un palindrome est un mot qui se lit de la meme maniere ,soit en le lisant de la droite vers la gauche ou de gauche vers droite" << endl;
    }

    return 0;
}


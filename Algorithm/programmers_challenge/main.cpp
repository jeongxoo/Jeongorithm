////
////  main.cpp
////  programmers_challenge
////
////  Created by 쩡수 on 2021/08/27.
////
//
//#include <iostream>
//#include <vector>
//#include <string>
//#include <sstream>
//#include <algorithm>
////#include "week4.hpp"
//
//using namespace std;
//
//string solution(vector<string> table, vector<string> languages, vector<int> preference);
//vector<string> parsing(string sentence, char split);
//
//vector<string> table {
//    "SI JAVA JAVASCRIPT SQL PYTHON C#",
//    "CONTENTS JAVASCRIPT JAVA PYTHON SQL C++",
//    "HARDWARE C C++ PYTHON JAVA JAVASCRIPT",
//    "PORTAL JAVA JAVASCRIPT PYTHON KOTLIN PHP",
//    "GAME C++ C# JAVASCRIPT C JAVA"
//};
//vector<string> languages {
//    "PYTHON", "C++", "SQL"
////    "JAVA", "JAVASCRIPT"
//};
//vector<int> preference {
//    7,5,5
//};
//
//
//int main() {
//    cout << "최종 직업 추천 :: " << solution(table, languages, preference) << "\n";
//    return 0;
//}
//
//
//vector<string> parsing(string sentence, char split) {
//    istringstream sen(sentence);
//    string stringBuffer;
//    vector<string> results;
//
//    results.clear();
//
//    while (getline(sen, stringBuffer, split)){
//        results.push_back(stringBuffer);
//    }
//
//    return results;
//}
//
//
//
//string solution(vector<string> table, vector<string> languages, vector<int> preference) {
//    string answer = "";
//
//    vector<string> job_table {};
//    vector<int> score_table {};
//
//    for (string col: table) {
//        vector<string> split_sentence = parsing(col, ' ');
//        string job = split_sentence[0];
//        job_table.push_back(job);
//        split_sentence.erase(split_sentence.begin());
//        reverse(split_sentence.begin(), split_sentence.end());
//        int score {0};
//
//        for (int i {0}; i < languages.size(); i++) {
//            auto pos = find(split_sentence.begin(), split_sentence.end(), languages[i]);
//            if (pos != split_sentence.end()) {
//                long idx = pos - split_sentence.begin();
//                score += (idx + 1) * preference[i];
//            }
//        }
//        score_table.push_back(score);
//        cout << score << "\n";
//    }
//
//    auto high = max_element(score_table.begin(), score_table.end());
//    int max_score = score_table[high - score_table.begin()];
//    auto position = find(score_table.begin() , score_table.end(), max_score);
//
//    vector<string> pos {};
//
//    while (position != score_table.end()) {
//        pos.push_back(job_table[position - score_table.begin()]);
//        position = find(position + 1, score_table.end(), max_score);
//    }
//
//
//    sort(pos.begin(), pos.end());
//    answer = pos[0];
//
//    return answer;
//}


#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* 현재 반례
 2 11 -> 1 (답 4)
 3 7 -> 4 (답 5)
 4번 이상 가려면 체크판의 크기가 일정 이상이어야함
 그걸 먼저 계산해주고 남은걸 계산?
 */

void ddd() {
    int n, m;
    cin >> n >> m;
    
    for (int i {0}; i < m; i++) {
        for (int j {1}; j < n + 1; j++) {
            
        }
    }
    int cnt {0};
    
    while (cnt != 3) {
        for (int i {cnt}; i < n; i++) {
            cnt++;
            
        }
    }

}


int main() {
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    for (int i {0}; i < 10; i++) {
        ddd();
    }
    
    
    return 0;
}


//if (width > 6 && height > 2) {
//    cnt = 4;
//    int diff = width - 7;
//
//    if (height >= (diff * 2) + 1) {
//        cnt += diff;
//    } else {
////            if (height % 2 == 0) {
////                cnt += (height / 2) - 1;
////            } else {
////                cnt += (height / 2);
////            }
//    }
//} else {
//    if (width >= 5) {
//        if (height >= 3) {
//            cnt = 4;
//        } else if (height == 2){
//            if (width >= 7) {
//                cnt = 3;
//            } else {
//                cnt = 2;
//            }
//        }
//    } else if (width == 4) {
//        if (height >= 5) {
//            cnt = 3;
//        } else if (height >= 3) {
//            cnt = 2;
//        } else if (height > 1) {
//            cnt = 1;
//        }
//    } else if (width == 3) {
//        if (height >= 5) {
//            cnt = 3;
//        } else if (height >= 3) {
//            cnt = 2;
//        } else if (height > 1) {
//            cnt = 1;
//        }
//    } else if (width == 2) {
//        if (height >= 3) {
//            cnt = 1;
//        }
//    }
//
//    if (cnt == 4) {
//        cout << cnt << "\n";
//        return 0;
//    }
//}
//
//cnt++;
//cout << cnt << "\n";

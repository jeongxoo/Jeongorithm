#include <iostream>
#include <string>
#include <vector>

using namespace std;



int main() {
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int height, width;
    cin >> height >> width;
    
    int cnt {0};
    
    if (width > 6 && height > 2) {
        cnt = 4;
        int diff = width - 7;
        if (height >= (diff * 2) + 1) {
            cnt += diff;
        } else {
            if (height % 2 == 0) {
                cnt += (height / 2) - 1;
            } else {
                cnt += (height / 2);
            }
        }
    } else {
        switch (width) {
            case 5:
                if (height >= 3) {
                    cnt = 4;
                } else if (height == 2){
                    cnt = 2;
                }
                
                break;
            case 4:
                if (height >= 5) {
                    cnt = 3;
                } else if (height >= 3) {
                    cnt = 2;
                } else if (height > 1) {
                    cnt = 1;
                }
                break;
            case 3:
                if (height >= 5) {
                    cnt = 3;
                } else if (height >= 3) {
                    cnt = 2;
                } else if (height > 1) {
                    cnt = 1;
                }
                
                break;
            case 2:
                if (height >= 3) {
                    cnt = 1;
                }
                break;

            default:
                break;
        }

    }
    if (cnt != 4) {
        cnt++;
    }
    cout << cnt << "\n";
 
    return 0;
}

//
//int r, c;
//string s;
//vector<string> pipe;
//
//cin >> r >> c;
//for (int i {0}; i < r; i++) {
//    cin >> s;
//    pipe.push_back(s);
//
//
//}
//
//for (int i {0}; i < r; i++) {
//    cout << pipe[i] << "\n";
//}
//
//
//
//
//
//
////int n {};
////string s1, s2, s3, s4;
//cin >> n;
//
//for (int i {0}; i < n; i++) {
//    cin >> s1 >> s2;
//    s3 = s2;
//    s4.clear();
//    if (s1.length() != s2.length()) {
//        cout << s1 << " & " << s2 << " are NOT anagrams.\n";
//    } else {
//        for (int j {0}; j < s1.length(); j++) {
//            s4.insert(s4.end(), '1');
//            for (int k {0}; k < s2.length(); k++) {
//                if (s1[j] == s2[k]) {
//                    s2[k] = '1';
//                    break;
//                }
//            }
//        }
//
//        if (s4 == s2) {
//            cout << s1 << " & " << s3 << " are anagrams.\n";
//        } else {
//            cout << s1 << " & " << s3 << " are NOT anagrams.\n";
//        }
//    }
//
//}




//string s, s2;
//    vector<string> tag;
//    vector<string> word;
//    vector<int> ans;
//    bool tag_check = false;
//    getline(cin, s);
//
//
//    string temp;
//    for (int i {0}; i < s.length(); i++) {
//        if (i == s.length() - 1 && s[i] != '>') {
//            temp.push_back(s[i]);
//            word.push_back(temp);
//            ans.push_back(1);
//        } else {
//            if (tag_check) {
//                if (s[i] == '>') {
//                    tag_check = false;
//                    s2.push_back(s[i]);
//                    tag.push_back(s2);
//                    ans.push_back(0);
//                    s2.clear();
//                } else {
//                    s2.push_back(s[i]);
//                }
//            } else {
//                if (s[i] == '<') {
//                    tag_check = true;
//                    s2.push_back(s[i]);
//                    if (temp.size() != 0) {
//                        word.push_back(temp);
//                        ans.push_back(1);
//                        temp.clear();
//                    }
//                } else if (s[i] == ' '){
//                    if (temp.size() != 0) {
//                        word.push_back(temp);
//                        ans.push_back(1);
//                        temp.clear();
//                    }
//                } else {
//                    temp.push_back(s[i]);
//                }
//            }
//        }
//
//    }
//
//    for (int i {0}; i < word.size(); i++) {
//        string reverse;
//        for (int j = word[i].size() - 1; j >= 0; j--) {
//            reverse.push_back(word[i][j]);
//        }
//        word[i] = reverse;
//    }
//
//
//    size_t tc {0}, wc {0};
//    string end;
//    for (int i {0}; i < ans.size(); i++) {
//        if (ans[i] == 0) {
//            cout << tag[tc];
//            tc++;
//        } else if (ans[i] == 1) {
//            if (ans[i + 1] == 1 && i <= ans.size() - 2) {
//                cout << word[wc] << " ";
//            } else {
//                cout << word[wc];
//
//            }
//            wc++;
//        }
//    }
//    cout << "\n";

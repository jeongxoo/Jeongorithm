//
//  programmers_week4.hpp
//  data_struct
//
//  Created by 쩡수 on 2021/08/27.
//

#ifndef programmers_week4_hpp
#define programmers_week4_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(vector<string> table, vector<string> languages, vector<int> preference);

vector<string> user_table {
    "SI JAVA JAVASCRIPT SQL PYTHON C#",
    "CONTENTS JAVASCRIPT JAVA PYTHON SQL C++",
    "HARDWARE C C++ PYTHON JAVA JAVASCRIPT",
    "PORTAL JAVA JAVASCRIPT PYTHON KOTLIN PHP",
    "GAME C++ C# JAVASCRIPT C JAVA"
};
vector<string> user_languages {
    "PYTHON", "C++", "SQL"
};

vector<int> user_preference {7, 5, 5};




#endif /* programmers_week4_hpp */

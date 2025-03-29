#include <bits/stdc++.h>
using namespace std;

struct St {
    string name;
    int sno;
};

int main() {
  
    
    vector<St> v = {{"Ashok", 11}, {"Deepak", 15}, 
                     {"Anmol", 23}, {"Vikas", 19}};

    St min = *min_element(v.begin(), v.end(),
                    [](const St &i, const St &j) { 
                        return i.sno < j.sno;
                    });

    cout << min.name << " " << min.sno;
    return 0;
}


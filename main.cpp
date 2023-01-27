
#include <bits/stdc++.h>
using namespace std;

int main()
{   freopen("ARRAY.INP","r",stdin);
    freopen("ARRAY.OUT","w",stdout);
    vector<int> positive, zero, negative;
    int n, x;

    ifstream inFile("ARRAY.INP");
    inFile >> n;
    for (int i = 0; i < n; i++) {
        inFile >> x;
        if (x > 0)
            positive.push_back(x);
        else if (x < 0)
            negative.push_back(x);
        else
            zero.push_back(x);
    }
    inFile.close();

    sort(positive.begin(), positive.end());
    sort(negative.begin(), negative.end(), greater<int>());

    ofstream outFile("ARRAY.OUT");
    for (auto i : positive) {
        outFile << i<< endl;
        if(!negative.empty()){
            outFile << negative.back << endl();
            negative.pop_back();
        }
    }
    for (auto i : zero) {
        outFile << i <<endl;
    }

    outFile.close();
    return 0;
}

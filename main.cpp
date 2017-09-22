#include <iostream>
#include <vector>

using namespace std;

template<class T>
T maxof(T a, T b) {
    return (a > b ? a : b);
}

template<typename cT, typename retT = cT, typename sepT = decltype(cT::value_type)>
retT joinContainer(const cT &o, const sepT &sep) {
    retT out;

    auto it = o.begin();
    while (it != o.end()) {
        out += *it;
        if (++it != o.end()) {
            out += sep;
        }
    }

    return out;
};

int main() {
    string name("Rehan Manzoor");
    std::cout << "Max of : " << joinContainer(name, ":") << std::endl;

    string s1("Jumbo");
    string s2("Max");
    string s3("DG");

    vector<string> vs({s1, s2, s3});

    cout << joinContainer<vector<string>, string>(vs, ", ");

    return 0;
}
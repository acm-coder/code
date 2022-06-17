#include <random>
#include <fstream>
#include <iostream>

using namespace std;

int n;

void generate_data() {
    std::random_device rd;
    std::default_random_engine dre(rd());
    std::uniform_int_distribution<int> uid(1, 1000);
    int cnt = uid(dre);
    std::uniform_int_distribution<int> gid(1, cnt);
    cout << cnt << endl;
    for (int i = 1; i <= cnt; ++ i) {
        cout << gid(dre) << ' ' << gid(dre) << endl;
    }
}

int main() {
    cin >> n;
    cout << n << endl;
    while (n --) generate_data();
    return 0;
}


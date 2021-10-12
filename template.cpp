#include <bits/stdc++.h>

using namespace std;

#define SF4(format, a, b, c, d) (scanf(format, &(a), &(b), &(c), &(d)))
#define SF3(format, a, b, c) (scanf(format, &(a), &(b), &(c)))
#define SF2(format, a, b) (scanf(format, &(a), &(b)))
#define SF1(format, a) (scanf(format, &(a)))

#define SFL4(format, a, b, c, d) (scanf(format"\n", &(a), &(b), &(c), &(d)))
#define SFL3(format, a, b, c) (scanf(format"\n", &(a), &(b), &(c)))
#define SFL2(format, a, b) (scanf(format"\n", &(a), &(b)))
#define SFL1(format, a) (scanf(format"\n", &(a)))

#define PF4(format, a, b, c, d) (printf(format, a, b, c, d))
#define PF3(format, a, b, c) (printf(format, a, b, c))
#define PF2(format, a, b) (printf(format, a, b))
#define PF1(format, a) (printf(format, a))
#define PF(format) (printf(format))

#define PFL4(format, a, b, c, d) (printf(format"\n", a, b, c, d))
#define PFL3(format, a, b, c) (printf(format"\n", a, b, c))
#define PFL2(format, a, b) (printf(format"\n", a, b))
#define PFL1(format, a) (printf(format"\n", a))
#define PFL(format) (printf(format"\n"))

#define FINE(var, start, end, delta) for (int var = start; var < end; var += delta)
#define FIE(var, start, end, delta) for (int var = start; var <= end; var += delta)
#define FDNE(var, start, end, delta) for (int var = start; var > end; var -= delta)
#define FDE(var, start, end, delta) for (int var = start; var >= end; var -= delta)

int read();


const int N11 = 10 + 10, N12 = 1e2 + 10, N13 = 1e3 + 10, N14 = 1e4 + 10, N15 = 1e5 + 10, N16 = 1e6 + 10, N17 = 1e7 + 10;
const int dx2[] = {-1, 1};
const int dy2[] = {-1, 1};
const int dz2[] = {-1, 1};
const int dx3[] = {-1, 0, 1};
const int dy3[] = {-1, 0, 1};
const int dz3[] = {-1, 0, 1};
const int dx4[] = {-1, 0, 1, 0};
const int dy4[] = {0, 1, 0, -1};
const int dx8[] = {-1, 0, 1, 1, 1, 0, -1, -1};
const int dy8[] = {1, 1, 1, 0, -1, -1, -1, 0};
const int dxr[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int dyr[] = {1, 2, 2, 1, -1, -2, -2, -1};
const int dxt[] = {-2, 2, 2, -2};
const int dyt[] = {2, 2, -2, -2};


int T, TS;


void call() {
    
}

int read() {
    int flag = 1, ans = 0;
    char c;
    do {
        c = getchar();
        if (c == '-') flag = -1;
    } while(c < '0' || c > '9');
    do {
        ans = ans * 10 + (c - '0');
        c = getchar();
    } while(c >= '0' && c <= '9');
    return ans;
}



int main() {
    T = 1;
    while(T --) call();
    return 0;
}


/*
 * ┌───┐   ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┐
 * │Esc│   │ F1│ F2│ F3│ F4│ │ F5│ F6│ F7│ F8│ │ F9│F10│F11│F12│ │P/S│S L│P/B│  ┌┐    ┌┐    ┌┐
 * └───┘   └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┘  └┘    └┘    └┘
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐ ┌───┬───┬───┐ ┌───┬───┬───┬───┐
 * │~ `│! 1│@ 2│# 3│$ 4│% 5│^ 6│& 7│* 8│( 9│) 0│_ -│+ =│ BacSp │ │Ins│Hom│PUp│ │Num│ / │ * │ - │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ ├───┼───┼───┤ ├───┼───┼───┼───┤
 * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │{ [│} ]│ | \ │ │Del│End│PDn│ │ 7 │ 8 │ 9 │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤ └───┴───┴───┘ ├───┼───┼───┤ + │
 * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │: ;│" '│ Enter  │               │ 4 │ 5 │ 6 │   │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤     ┌───┐     ├───┼───┼───┼───┤
 * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │< ,│> .│? /│  Shift   │     │ ↑ │     │ 1 │ 2 │ 3 │   │
 * ├─────┬──┴─┬─┴──┬┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤ ┌───┼───┼───┐ ├───┴───┼───┤ E││
 * │ Ctrl│ Win│ Alt│         Space         │ Alt│ Win│Menu│Ctrl│ │ ← │ ↓ │ → │ │   0   │ . │←─┘│
 * └─────┴────┴────┴───────────────────────┴────┴────┴────┴────┘ └───┴───┴───┘ └───────┴───┴───┘
 */

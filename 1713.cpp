#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>

const int MAXN = 10010;
const int MAXM = 200010;

struct Edge {
    int u, v, w;
    bool operator<(const Edge &other) const {
        return w < other.w;
    }
} edges[MAXM];

int n, m;
int fa[MAXN];

int find(int x) {
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}

void merge(int x, int y) {
    int fx = find(x), fy = find(y);
    if (fx != fy) fa[fx] = fy;
}

int main() {
    std::cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        std::cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }
    std::sort(edges + 1, edges + m + 1);
    std::iota(fa + 1, fa + n + 1, 1);

    std::vector<int> lcmv;
    for (int i = 1; i <= m; ++i) {
        int cnt = 0;
        std::iota(fa + 1, fa + n + 1, 1);
        for (int j = i; j <= m; ++j) {
            if (find(edges[j].u) != find(edges[j].v)) {
                merge(edges[j].u, edges[j].v);
                ++cnt;
                if (cnt == n - 1) {
                    lcmv.push_back(edges[j].w);
                    break;
                }
            }
        }
    }

    int lcm = std::accumulate(lcmv.begin(), lcmv.end(), 1, std::lcm<int, int>);
    std::cout << lcm << '\n';

    return 0;
}
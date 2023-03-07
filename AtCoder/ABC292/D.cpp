#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
set<int> st;
void dfs(const Graph &G, int v) {
    seen[v] = true;
    st.insert(v);

    for (auto next_v : G[v]) {
        if (seen[next_v]) continue;
        dfs(G, next_v);
    }
}

int main() {
    int n,m;
    cin >> n >> m;

    Graph G(n+1);
    vector<pair<int, int>> node(m);
    for (int i = 0; i < m; i++) {
        int u,v;
        cin >> u >> v;
        node[i] = {u, v};
        G[u].push_back(v);
        if (u != v) G[v].push_back(u);
    }

    int ecount;
    bool ans = true;
    seen.assign(n+1, false);
    for (int i = 1; i <= n; i++) {
        ecount = 0;
        if (seen[i]) continue;

        dfs(G, i);

        for (int i = 0; i < m; i++) {
            if (st.count(node[i].first) && st.count(node[i].second)) {
                ecount += 1;
            }
        }

        if (st.size() != ecount) {
            ans = false;
            break;
        }

        st.clear();
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}

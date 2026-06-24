class Solution {
public:
    static const int MOD = 1e9 + 7;
    using ll = long long;
    using Matrix = vector<vector<ll>>;

    Matrix multiply(Matrix& A, Matrix& B) {
        int n = A.size();
        Matrix C(n, vector<ll>(n));

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                if (A[i][k] == 0) continue;

                for (int j = 0; j < n; j++) {
                    if (B[k][j] == 0) continue;

                    C[i][j] =
                        (C[i][j] + A[i][k] * B[k][j]) % MOD;
                }
            }
        }
        return C;
    }

    Matrix power(Matrix base, long long p) {
        int n = base.size();

        Matrix res(n, vector<ll>(n));
        for (int i = 0; i < n; i++)
            res[i][i] = 1;

        while (p) {
            if (p & 1)
                res = multiply(res, base);

            base = multiply(base, base);
            p >>= 1;
        }

        return res;
    }

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        if (n == 1) return m;

        int sz = 2 * m;

        Matrix T(sz, vector<ll>(sz));

        // newDown[y] = sum of up[x], x < y
        for (int y = 0; y < m; y++) {
            for (int x = 0; x < y; x++) {
                T[m + y][x] = 1;
            }
        }

        // newUp[y] = sum of down[x], x > y
        for (int y = 0; y < m; y++) {
            for (int x = y + 1; x < m; x++) {
                T[y][m + x] = 1;
            }
        }

        Matrix P = power(T, n - 1);

        vector<ll> init(sz, 1);

        ll ans = 0;

        for (int i = 0; i < sz; i++) {
            ll val = 0;

            for (int j = 0; j < sz; j++) {
                val = (val + P[i][j] * init[j]) % MOD;
            }

            ans = (ans + val) % MOD;
        }

        return (int)ans;
    }
};
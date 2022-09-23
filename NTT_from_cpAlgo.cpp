long long int powM(long long int a, long long int b, long long int m)
{
  if (a <= 0)return 0;
  a %= m;

  long long int ans = 1LL;
  while (b)
  {
    if (b & 1)ans = ans * a % m;
    //ans = mulmod(ans, a, m);
    a = a * a % m;
    //a = mulmod(a, a, m);
    b >>= 1;
  }

  return ans;
}


const long long int mod = 998244353;  // mod = 2^23 *(119) + 1
const long long int root = powM(3,119,mod);  // this is the 2^(kth) root of unity.
const long long int root_1 = powM(root,mod-2,mod); // inverse of above.
const long long int root_pw = 1 << 23;

//const long long int mod = 7340033;
//const long long int root = 5;
//const long long int root_1 = 4404020;
//const long long int root_pw = 1 << 20;

long long inverse(long long x, long long int mod) {
    long long res = 1;
    long long int e = mod - 2;
    while (e) {
        if (e & 1)
            res = res * x % mod;
        x = x * x % mod;
        e >>= 1;
    }
    return res;
}

void fft(vector<long long int> & a, bool invert) {
    long long int n = a.size();

    for (long long int i = 1, j = 0; i < n; i++) {
        long long int bit = n >> 1;
        for (; j & bit; bit >>= 1)
            j ^= bit;
        j ^= bit;

        if (i < j)
            swap(a[i], a[j]);
    }

    for (long long int len = 2; len <= n; len <<= 1) {
        long long int wlen = invert ? root_1 : root;
        for (long long int i = len; i < root_pw; i <<= 1)
            wlen = (long long int)(1LL * wlen * wlen % mod);

        for (long long int i = 0; i < n; i += len) {
            long long int w = 1;
            for (long long int j = 0; j < len / 2; j++) {
                long long int u = a[i+j], v = (long long int)(1LL * a[i+j+len/2] * w % mod);
                a[i+j] = u + v < mod ? u + v : u + v - mod;
                a[i+j+len/2] = u - v >= 0 ? u - v : u - v + mod;
                w = (long long int)(1LL * w * wlen % mod);
            }
        }
    }

    if (invert) {
        long long int n_1 = inverse(n, mod);
        assert(n_1 * n % mod == 1);
        for (long long int & x : a)
            x = (long long int)(1LL * x * n_1 % mod);
    }
}


vector<long long int> multiply(vector<long long int> const& a, vector<long long int> const& b) {
    vector<long long int> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    long long int n = 1;
    while (n < a.size() + b.size()) 
        n <<= 1;
    fa.resize(n);
    fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (long long int i = 0; i < n; i++)
        fa[i] = (long long int)(1LL * fa[i] * fb[i] % mod);
    fft(fa, true);
    return fa;
}

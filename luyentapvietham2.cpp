#include <iostream>
#include <cmath>

using namespace std;

bool nt(long long n) {
  if (n <= 1) return false;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return false;
  }
  return true;
}

bool ham1(long long n) {
  if (n == 0) return true;
  int dem = 0;
  while (n) {
    if (n % 2 == 0) dem++;
    n /= 10;
  }
  return dem % 2 == 1;
}

bool ham2(long long n) {
  if (n == 0) return true;
  int chan = 0, le = 0;
  while (n) {
    if (n % 2 == 0) chan++;
    else le++;
    n /= 10;
  }
  return chan > le;
}

bool ham3(long long n) {
  int last = n % 10;
  while (n >= 10) {
    n /= 10;
  }
  return n == last;
}

bool ham4(long long n) {
  int tong = 0;
  while (n) {
    tong += n % 10;
    n /= 10;
  }
  return tong % 10 == 8;
}

bool ham5(long long n) {
  int tong = 0;
  while (n) {
    tong += n % 10;
    n /= 10;
  }
  return nt(tong);
}

bool ham6(long long n) {
  while (n >= 10) {
    if (abs(n % 10 - (n / 10) % 10) != 1) return false;
    n /= 10;
  }
  return true;
}

bool ham7(long long n) {
  int max_cur = n % 10;
  while (n >= 10) {
    if (n % 10 > max_cur) max_cur = n % 10;
    n /= 10;
  }
  return n > max_cur;
}

bool fibo(long long n) {
  if (n == 0 || n == 1) return true;
  int fn1 = 1, fn2 = 0;
  for (int i = 2; i <= 92; i++) {
    int fn = fn1 + fn2;
    if (fn == n) return true;
    fn2 = fn1;
    fn1 = fn;
  }
  return false;
}

bool ham8(long long n) {
  int tong = 0;
  while (n) {
    tong += n % 10;
    n /= 10;
  }
  return fibo(tong);
}

bool tn(long long n) {
  int rev = 0, tmp = n;
  while (n) {
    rev = rev * 10 + n % 10;
    n /= 10;
  }
  return tmp == rev;
}

bool ham9(long long n) {
  int tong = 0;
  while (n) {
    tong += n % 10;
    n /= 10;
  }
  return tn(tong);
}


bool ham10(long long n) {
  while (n) {
    int r = n % 10;
    if (r != 0 && r != 6 && r != 8) return false;
    n /= 10;
  }
  return true;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    cout << ham1(n) << endl;
    cout << ham2(n) << endl;
    cout << ham3(n) << endl;
    cout << ham4(n) << endl;
    cout << ham5(n) << endl;
    cout << ham6(n) << endl;
    cout << ham7(n) << endl;
    cout << ham8(n) << endl;
    cout << ham9(n) << endl;
    cout << ham10(n) << endl;
    }
}


#include <cmath>
#include <ctime>
#include <iostream>
#define N 10000000
using namespace std;

bool IsPrime(int n);

int main() {
  int tstart, tstop;
  printf("test count = %d\n", N);

  tstart = clock();
  for (int i = 1; i < N; i++) {
    IsPrime(i);
    // if (IsPrime(i))
    //   ;
    //			printf("%d ",i);
  }
  tstop = clock();
  printf("\n test spend time: %d(ms)\n\n", tstop - tstart);

  return 0;
}

// 判断是否为素数
// 参数：
//  待判断的整数
// 返回值：
//  true  是素数
//  false 不是素数
bool IsPrime(int n) {
  if (n <= 0) return false;
  if (n == 2 || n == 3) return true;
  if (n % 6 != 1 && n % 6 != 5) return false;

  int max = floor(sqrt(n));
  for (int i = 5; i <= max; i += 6)
    if (n % i == 0 || n % (i + 2) == 0) return false;

  return true;
}

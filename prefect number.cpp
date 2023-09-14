#include <stdio.h>
#include <math.h>
int isPerfect(long long int n) {
long long int dsum = 0; 
long long int i;
for (i = 1; i <= sqrt(n); ++i) {
if (n % i == 0) {
if (i == n / i) {
dsum += i;
}
else {
dsum += i;
dsum += n / i;
}
}
}
dsum = dsum - n;
if (dsum == n) return 1;
else return 0;
}
int isPrime(long long int n) {
if (n == 1)
return 0;
for (int i = 2; i <= sqrt(n); ++i) {
if (n % i == 0)
return 0;
}
return 1;
}
int main() {
long long int n, i, temp;
printf("Enter n: ");
scanf("%lld", &n);
i = 1;
while (n > 0) {
if (isPrime(i) == 1) {
temp = pow(2, i - 1) * (pow(2, i) - 1);
if (isPerfect(temp) == 1) {
printf("%lld ", temp);
n = n - 1;
}
}
i = i + 1;
}
printf("\n");
}

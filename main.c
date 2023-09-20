#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  if (n * (n + 1) % 4 != 0)
  {
    printf("NO\n");
    return 0;
  }

  // n % 4 == 0 || (n + 1) % 4 == 0
  printf("YES\n");

  if (n % 4 == 0)
  {
    printf("%d\n", n / 2);
    for (int i = 1; i <= n - i + 1; i += 2)
    {
      printf("%d %d ", i, n - i + 1);
    }
    printf("\n");
    printf("%d\n", n / 2);
    for (int i = 2; i <= n - i + 1; i += 2)
    {
      printf("%d %d ", i, n - i + 1);
    }
    printf("\n");

    return 0;
  }

  // (n + 1) % 4 == 0
  printf("%d\n", n / 2 + 1);
  for (int i = 1; i <= n - i; i += 2)
  {
    printf("%d %d ", i, n - i);
  }
  printf("\n");
  printf("%d\n", n / 2);
  for (int i = 2; i <= n - i; i += 2)
  {
    printf("%d %d ", i, n - i);
  }
  printf("%d", n);
  printf("\n");
}
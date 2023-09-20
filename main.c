#include <stdio.h>

int main()
{
  // Считываем число n
  int n;
  scanf("%d", &n);

  // Сумма весов мисок - n * (n + 1) / 2 -> Вес порции Пети - n * (n + 1) / 4 ->
  // -> n * (n + 1) % 4 == 0 <-> n % 4 == 0 || (n + 1) % 4 == 0
  if (n * (n + 1) % 4 != 0)
  {
    printf("NO\n");
    return 0;
  }

  // n % 4 == 0 || (n + 1) % 4 == 0
  printf("YES\n");
  if (n % 4 == 0)
  {
    // Пример:
    // n = 4: 1 + 4 = 2 + 3
    // n = 8: (1 + 8) + (3 + 6) = (2 + 7) + (4 + 5)
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
  // Пример:
  // n = 3: 1 + 2 = 3
  // n = 7: (1 + 6) + (2 + 5) = 7 + (3 + 4)
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
  printf("%d\n", n);
}
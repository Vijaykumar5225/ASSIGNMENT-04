#include <stdio.h>

struct player {
   char name[30];
   int runs;
};

int main() {
   struct player team[11];
   int i, n, total_runs = 0;

   printf("Enter number of players: ");
   scanf("%d", &n);

   for (i = 0; i < n; i++) {
      printf("Enter name of player %d: ", i+1);
      scanf("%s", team[i].name);

      printf("Enter runs scored by %s: ", team[i].name);
      scanf("%d", &team[i].runs);

      total_runs += team[i].runs;
   }

   printf("\nTotal runs scored by the team: %d", total_runs);

   return 0;
}

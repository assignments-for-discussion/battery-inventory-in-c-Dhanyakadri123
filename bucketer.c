#include <stdio.h>
#include <assert.h>

struct CountsByUsage {
  int lowCount;
  int mediumCount;
  int highCount;
};

struct CountsByUsage countBatteriesByUsage(const int* cycles, int nBatteries) {
  for(i=0;i<nBatteries;i++)
  {
    if(cycles[i]<310)
    {
      return lowCount;
    }
    else if(cycles[i]<929)
    {
      return mediumCount;
    }
   else
     return highcount
     
  struct CountsByUsage counts = {0, 0, 0};  
  struct CountsByUsage counts = {0, 0, 0};
  for(i=0;i<nBatteries;i++)
  {
    if(cycles[i]<310)
    {
      return lowCount;
    }
    else if(
  return counts;
}

void testBucketingByNumberOfCycles() {
  const int chargeCycleCounts[] = {100, 300, 500, 600, 900, 1000};
  const int numberOfBatteries = sizeof(chargeCycleCounts) / sizeof(chargeCycleCounts[0]);
  printf("Counting batteries by usage cycles...\n");
  struct CountsByUsage counts = countBatteriesByUsage(chargeCycleCounts, numberOfBatteries);
  assert(counts.lowCount == 2);
  assert(counts.mediumCount == 3);
  assert(counts.highCount == 1);
  printf("Done counting :)\n");
}

int main() {
  testBucketingByNumberOfCycles();
  return 0;
}

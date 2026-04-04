/* 
  파일이름: main.c
  작 성 자: 이서우
  하 는 일: 
*/
#include <stdio.h>

int main()
{
  char metalName[20];
  int atomCount;
  float radius;
  float lattice_a;
  float pi = 3.14159f;
  float atomVol;
  float unitCellvol;
  float apf;

  printf("======== 결정 구조 분석 시스템 =======\n");
  printf("1. 분석할 금속의 이름을 입력하세요.\n");
  scanf("%s", metalName);

  printf("2. 단위 격자 당 원자 수(n)를 입력하세요.\n");
  scanf("%d", &atomCount);

  printf("3. 원자 반지름(R, nm단위)을 입력하세요.\n");
  scanf("%f", &radius);

  printf("4. 격자 상수(a, nm단위)를 입력하세요.\n");
  scanf("%f", &lattice_a);

  atomVol = atomCount * (4.0f / 3.0f) * pi * radius * radius * radius;
  unitCellvol = lattice_a * lattice_a * lattice_a;
  apf = atomVol / unitCellvol;

  printf("\n----------------------------------------------\n");
  printf("[ %s ]  구조 분석 결과 \n", metalName);
  printf("- 원자 총 부피 : %.6f nm^3\n", atomVol);
  printf("- 단위 격자 부피 : %.6f nm^3\n", unitCellvol);
  printf("- 단위 충진율(APF) : %.4f\n", apf);
  printf("- 빈 공간(Void) : %.2f\n", (1.0f - apf) * 100.0f);
  printf("\n----------------------------------------------\n");

  return 0;
}

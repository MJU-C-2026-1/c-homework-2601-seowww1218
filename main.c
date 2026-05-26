    /* 
        파일이름: main.c
        작성자: 이서우
        하는일: 결장구조별 원자 충진율 및 빈 공간 분석기
    */

    #include <stdio.h>
    #include <math.h>

    #define PI 3.141592653589793f

    int main()
    {
        char metalname[20];
        int atomcount;
        float radius;
        float lattice_a;

        float atomvol;
        float unitcellvol;
        float apf;

        int menu;


        while(1)
        {
            printf("======= 결정 구조 분석 시스템  =======\n");
            printf("1. 결정 구조 분석 실행\n");
            printf("2. 프로그램 정보\n");
            printf("3. 종료\n");
            printf("=================================\n");
            printf("메뉴 선택 >>");

            scanf("%d", &menu);

            switch(menu)
            {
                case 1:

                    printf("1. 금속 이름 입력: ");
                    scanf("%19s", metalname);

                    printf("2. 단위 격자 원자 수(n) 입력: ");
                    scanf("%d", &atomcount);

                    printf("3. 원자 반지름 (nm): ");
                    scanf("%f", &radius);

                    printf("4. 격자 상수 a (nm): ");
                    scanf("%f", &lattice_a);

                    atomvol = atomcount * (4.0f / 3.0f) * PI * radius * radius * radius;
                    unitcellvol = lattice_a * lattice_a * lattice_a;
                    apf = atomvol / unitcellvol;

                    printf("\n----------------------------------------------\n");
                    printf("[ %s ] 구조 분석 결과 \n", metalname);
                    printf("- 원자 총 부피 : %.6f nm^3 \n", atomvol);
                    printf("- 단위 격자 부피 : %.6f nm^3 \n", unitcellvol);
                    printf("- APF : %.4f \n", apf);
                    printf("- void : %.2f%%\n", (1.0f - apf) * 100.0f);
                    printf("----------------------------------------------\n");

                    break;
                
                case 2:

                    printf("\n 프로그램 정보 \n");
                    printf("- 프로그램명 : 결정 구조 분석기\n");
                    
                    break;


                case 3:
                    
                    printf("\n 프로그램을 종료합니다. \n");
                    return 0;

                default:
                    
                    printf("\n잘못된 메뉴입니다. 다시 입력하세요. \n");
            }

            
        }
         
        return 0;
    }


/* 
  파일이름: main.c
  작 성 자: 이서우
  하 는 일: 결정 구조별 원자 충진율 및 빈 공간 분석기


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

*/

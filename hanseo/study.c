// #include<stdio.h>

// int a[3][3] = {25, 13, 32, 10, 54, 53, 54, 19, 46};
// int b[3][3] = {14, 11, 34, 21, 23, 67, 83, 33, 56};
// int c[3][3];

// int main()
// {
//     int i,j;
//     for(i = 0; i < 3; i++)
//     {
//         for(j = 0; j < 3; j++)
//         {
//             c[i][j] = a[i][j] + b[i][j];
//         }
//     }
//     for(i = 0; i < 3; i++)
//     {
//         printf("%d %d %d", a[i][0], a[i][1], a[i][2]);
//         if (i == 1)
//         {
//             printf("   +   ");
//         }
//         else
//         {
//             printf("      ");
//         }
//         printf("%d %d %d", b[i][0], b[i][1], b[i][2]);
//         if(i == 1)
//         {
//             printf("    =    ");
//         }
//         else
//         {
//             printf("      ");
//         }
//         printf("%d %d %d\n", c[i][0], c[i][1], c[i][2]);
//     }

//     return 0;
// }


// #include<stdio.h>

// int a[3][3] = {25, 13, 32, 10, 54, 53, 54, 19, 46};
// int b[3][3] = {14, 11, 34, 21, 23, 67, 83, 33, 56};
// int c[3][3];

// int main()
// {
//     int i,j;
//     for(i = 0; i < 3; i++)
//     {
//         for(j = 0; j < 3; j++)
//         {
//             c[i][j] = a[i][j] - b[i][j];
//         }
//     }
//     for(i = 0; i < 3; i++)
//     {
//         printf("%d %d %d", a[i][0], a[i][1], a[i][2]);
//         if (i == 1)
//         {
//             printf(" - ");
//         }
//         else
//         {
//             printf("   ");
//         }
//         printf("%d %d %d", b[i][0], b[i][1], b[i][2]);
//         if(i == 1)
//         {
//             printf(" = ");
//         }
//         else
//         {
//             printf("   ");
//         }
//         printf("%d %d %d\n", c[i][0], c[i][1], c[i][2]);
//     }

//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     int i, j;
//     int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int b[3][3];
    
//     printf("원행렬 출력\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%3d", a[i][j]);
//         }
//         printf("\n");
//     }
    
//     for (j = 0; j < 3; j++)
//     {
//         for (i = 0; i < 3; i++)
//         {
//             b[j][i] = a[i][j];
//         }
//     }
    
//     printf("전치 행렬 출력\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%3d", b[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }



// #include<stdio.h>

// int main()
// {
//     int i, j;
//     int a[4][4] = {35, 28, 67, 73, 25, 32, 12, 69, 97, 56, 14, 23, 45, 97, 48, 15};
//     int b[5][5];
 

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             printf("|%4d|", a[i][j]);
//         }
//         printf("\n");
//     }


//     printf("다음 표의 세로와 가로합, 그리고 모든 합을 구합니다.\n\n");
//     printf("--------------------------------------");
//     for (int i = 0; i < 4; i++) 
//     {
//       printf("\n|");
//       for (int j = 0; j < 4; j++) 
//       {
//          printf("  %3d |", a[i][j]);
//       }
//     }
//     for (int i = 0; i < 4; i++) 
//     {
//        for (int j = 0; j < 4; j++) 
//        {
//          a[i][4] += a[i][j];
//          a[4][j] += a[i][j];
//          a[4][4] += a[i][j];
//        }
//     }
//     printf("\n--------------------------------------\n\n");
//     printf("위 표의 세로와 가로합, 그리고 모든 합을\n각각 행과 열의 마지막에 구합니다.\n\n");
//     printf("--------------------------------------");
//     for (int i = 0; i < 5; i++) 
//     {
//        printf("\n|");
//           for (int j = 0; j < 5; j++) 
//           {
//             printf("  %3d |", a[i][j]);
//           }
//     }
//     printf("\n--------------------------------------\n\n");
//     return 0;
// }





// #include <stdio.h>

// int main()
// {
//    int a[5][5] = 
//    {
//       {35, 28, 67, 73},
//       {25, 32, 12, 69},
//       {97, 56, 14, 23},
//       {45, 97, 48, 15}
//    };
//    printf("다음 표의 세로와 가로합, 그리고 모든 합을 구합니다.\n");
//    printf("--------------------------------");
//    for (int i = 0; i < 4; i++) 
//    {
//       printf("\n|");
//       for (int j = 0; j < 4; j++) 
//       {
//          printf("  %3d |", a[i][j]);
//       }
//    }
//    for (int i = 0; i < 4; i++) 
//    {
//       for (int j = 0; j < 4; j++) 
//       {
//          a[i][4] += a[i][j];
//          a[4][j] += a[i][j];
//          a[4][4] += a[i][j];
//       }
//    }
//    printf("\n-------------------------------\n");
//    printf("위 표의 세로와 가로합, 그리고 모든 합을\n각각 행과 열의 마지막에 구합니다.\n");
//    printf("-------------------------------------");
//    for (int i = 0; i < 5; i++) 
//    {
//       printf("\n|");
//          for (int j = 0; j < 5; j++) 
//          {
//             printf("  %3d |", a[i][j]);
//          }
//    }
//    printf("\n--------------------------------------\n");
   
//    return 0;
// }


// #include <stdio.h> 
// int main() 
// { 
//     int a = 5; 
//     char ch = 'a'; 
//     int *p; 
//     char *q; 
//     p = &a; 
//     q = &ch; 
//     printf("각 기억 장소의 주소 \n"); 
//     printf("a의 주소 : %d (%p) \n", &a, &a);  
//     printf("ch의 주소 : %d (%p) \n", &ch, &ch); 

// }




// #include <stdio.h>

// void swap(int *p, int *q)
// {
//     int temp;
//     temp = *p;
//     *p = *q;
//     *q = temp;
// }

// int main()
// {
//     int a = 10, b = 5;
//     printf("교환하기 전 a = %d b = %d\n", a, b);
//     swap(&a, &b);
//     printf("교환 후 값 a = %d b = %d", a, b);
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int a[5] = {1,2,3,4,5};
//     int *p;
//     p = a;
//     printf("&a[0] == %x\n", &a[0]);
//     printf("a == %x\n", a);
//     printf("p == %x\n", p);
//     printf("a[0] == %d\n", a[0]);
//     printf("*a == %d\n", +*a);
//     printf("*p == %d\n", *p);
   
// }


// #include <stdio.h>

// void prn(int *p, int b)
// {
//     for (int i = 0; i < b; i++)
//     {
//         printf("%3d", *(p + i));
//     }
// }

// void sord_d(int *p, int b)
// {
//     int temp, i, j;
//     for (i = 0; i < b; i++)
//     {
//         for (j = i + 1; j < b; j++)
//         {
//             if (*(p + i) > *(p + j))
//             {
//                 temp = *(p + i);
//                 *(p + i) = *(p + j);
//                 *(p + j) = temp;
//             }
//         }
//     }
// }

// int main()
// {
//     int a[5] = {30, 10, 50, 20, 40};
//     int i, j, temp;

//     printf("정렬전: ");
//     prn(a, 5);

//     sord_d(a, 5);

//     printf("\n정렬후: ");
//     prn(a, 5);

//     return 0;
// }




// #include <stdio.h>

// void bubbleSort(int arr[], int n) 
// {
//     int i, j;
//     for (i = 0; i < n - 1; i++) 
//     {
//         for (j = 0; j < n - i - 1; j++) 
//         {
//             if (arr[j] < arr[j + 1]) 
//             {
                
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// void top_n(int *arr, int n, int top) 
// {
//     bubbleSort(arr, n);
//     for (int i = 0; i < top; i++) 
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int sales[10] = {203, 105, 302, 200, 289, 175, 130, 120, 267, 312};
//     int n = 10;
//     int top;

//     printf("몇개의 매장 까지 나열 할까요?? ");
//     scanf("%d", &top);

//     top_n(sales, n, top);

//     return 0;
// }



// #include <stdio.h>

// void bubbleSort(int arr[], int n) 
// {
//     int i, j;
//     for (i = 0; i < n - 1; i++) 
//     {
//         for (j = 0; j < n - i - 1; j++) 
//         {
//             if (arr[j] < arr[j + 1]) 
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// void top_n(int *arr, int n, int top) 
// {
//     bubbleSort(arr, n);
//     for (int i = 0; i < top; i++) 
//     {
//         printf("%d ", *(arr + i));
//     }
//     printf("\n");
// }

// int main() {
//     int sales[10] = {203, 105, 302, 200, 289, 175, 130, 120, 267, 312};
//     int n = 10;
//     int top;

//     printf("몇 개의 매장까지 나열 할까요? ");
//     scanf("%d", &top);

//     top_n(sales, n, top);

//     return 0;
// }


// #include <stdio.h>

// #define N 4

// void print_arr(int *arr)
// {
//     for (int i = 0; i < N; i++) 
//     {
//         printf("%d ", *(arr + i));
//     }
//     printf("\n");
// }

// void percentage(int *arr)
// {
//     for (int i = 0; i < N; i++) 
//     {
//         int p = (*(arr + i) / 2); 
//         printf("%d ", p);
//     }
//     printf("\n");
// }

// int main()
// {
//     int count[N] = {42, 37, 83, 33};

//     printf("인원수: ");
//     print_arr(count);

//     printf("백분율: ");
//     percentage(count);

//     return 0;
// }



// #include <stdio.h>

// void top_n(int* arr, int n, int top)
// {
//     int i, j, temp;
//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = 0; j < n - 1; j++)
//         {
//             if (*(arr + j) > *(arr + j + 1))
//             {
//                 temp = *(arr + j);
//                 *(arr + j) = *(arr + j + 1);
//                 *(arr + j + 1) = temp;
//             }
//         }
//     }

//     printf("상위 %d개 매장: ", top);
//     for (i = n - 1; i >= n - top; i--)
//     {
//         printf("%d ", *(arr + i));
//     }
//     printf("\n");
// }

// int main()
// {
//     int sales[10] = {203, 105, 302, 200, 289, 175, 130, 120, 267, 312};
//     int n = 10;
//     int top;
//     printf("몇개의 매장 까지 나열 할까요?? ");
//     scanf("%d", &top);

//     top_n(sales, n, top);

//     return 0;
// }



// #include<stdio.h>

// int main()
// {
//     int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     int (*p)[4];
//     int i, j;


//     p = a;

//     for(i = 0; i < 3; i++)
//     {
//         for(j = 0; j < 4; j++)
//         {
//             printf("a[%d][%d] = %d &a[%d][%d] = %x\n", i, j, a[i][j], i, j, &a[i][j]);
//         }
//     }
//     for(i = 0; i < 3; i++)
//     {
//         for(j = 0; j < 4; j++)
//         {
//             printf("*(p + %d) = %x", i, j, *(p+i));
//             printf("*(p + %d) + %d = %x", i, j, *(p+i) + j );
//             printf("*(*(p + %d) + %d) = %d", i, j, *(*(p+i)+j));
//             printf("\n");
//         }
//     }
//     return 0;


// }



// #include<stdio.h>

// int main()
// {
//     int i, j;
//     int a[4][4] = {35, 28, 67, 73, 25, 32, 12, 69, 97, 56, 14, 23, 45, 97, 48, 15};
//     int b[5][5];
 

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             printf("|%4d|", a[i][j]);
//         }
//         printf("\n");
//     }


//     printf("다음 표의 세로와 가로합, 그리고 모든 합을 구합니다.\n\n");
//     printf("--------------------------------------");
//     for (int i = 0; i < 4; i++) 
//     {
//       printf("\n|");
//       for (int j = 0; j < 4; j++) 
//       {
//          printf("  %3d |", a[i][j]);
//       }
//     }
//     for (int i = 0; i < 4; i++) 
//     {
//        for (int j = 0; j < 4; j++) 
//        {
//          a[i][4] += a[i][j];
//          a[4][j] += a[i][j];
//          a[4][4] += a[i][j];
//        }
//     }
//     printf("\n--------------------------------------\n\n");
//     printf("위 표의 세로와 가로합, 그리고 모든 합을\n각각 행과 열의 마지막에 구합니다.\n\n");
//     printf("--------------------------------------");
//     for (int i = 0; i < 5; i++) 
//     {
//        printf("\n|");
//           for (int j = 0; j < 5; j++) 
//           {
//             printf("  %3d |", a[i][j]);
//           }
//     }
//     printf("\n--------------------------------------\n\n");
//     return 0;
// }


// #include<stdio.h>

// void sumcolrow(int(*a)[5])
// {
//     int i,j;
//     for(i = 0; i < 4; i++)
//     {
//         for(j = 0; j < 4; j++)
//         {
//             *(*(a + 4) + j) = *(*(a + i) + j);
//             *(*(a + i) + 4) = *(*(a + i) + j);
//             *(*(a + 4) + 4) = *(*(a + i) + j);

//         }
//     }
// }

// void print(int(*a)[5])
// {
//     int i, j;
//     for(i = 0; i < 5; i++)
//     {
//         for(j = 0; j < 5; j++)
//         {
//             printf("%3d", *(*(a + i) + j));
            
//         }
//         printf("\n");

//     }
// }


// int main()
// {
//    int i, j;
//    int a[5][5] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

//    for(i = 0; i < 4; i++)
//    {
//      for(j = 0; j < 4; j++)
//      {
//         printf("%3d", a[i][j]);
        
//      }
//      printf("\n");
//    }

//    sumcolrow(a);
//    print(a);

//    return 0;
// }




// #include <stdio.h>

// void transpose(int(*a)[3]) 
// {
//    int i, j, b[3][3];

//    for (i = 0; i < 3; i++) 
//    {
//       for (j = 0; j < 3; j++) 
//       {
//          b[i][j] = *(*(a + j) + i);
//       }
//    }
//    for (i = 0; i < 3; i++) 
//    {
//       for (j = 0; j < 3; j++) 
//       {
//          printf("%3d", b[i][j]);
//       }
//       printf("\n");
//    }

// }


// int main() 
// {
//    int arr[3][3] = {
//       { 2,1,5 },
//       { 1,1,6 },
//       { 4,2,5} };

//    int i, j;

//    for (i = 0; i < 3; i++) 
//    {
//       for (j = 0; j < 3; j++) 
//       {
//          printf("%3d\t", arr[i][j]);
//       }
//       printf("\n");
//    }
//    printf("\n\n행렬의 전치행렬은 다음과 같습니다.\n");
//    transpose(arr);

//    return 0


#include <stdio.h>

void strlen(const char* str) 
{
    int l = 0;
    while (str[l] != '\0') 
    {
      l++;
    }
    for (int i = l - 1; i >= 0; i--) 
    {
      printf("%c", str[i]);
    }
    printf("\n");
}

int main() 
{
    const char* str = "Hello, World!!";
    strlen(str);

    return 0;
}

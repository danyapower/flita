#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h> //�.�� ����������� ����� ������
#include <math.h> //��� ���������� ����� � �������
int main()
{
  int *a;  // ��������� �� ������
  int i, n;
  printf("������� ����� ��� �����������: ");
  scanf("%d", &n);
  // ��������� ������
  a = (int*)malloc(n * sizeof(int));
  // ���� ��������� �������
  for (i = 0; i<n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
  // ��������� ������ ������� � � ������
  for (i=0; i<n; i++)
    {
    char s[1000];
    sprintf(s,"%d",a[i]);
    int str = strlen (s); //���������� ����� ������
    // �������� ������� � ���������� ������� 2
    int *b;
    int r;
    b = (int*)malloc(str * sizeof(int));
      for (r=0; r<str; r++){
        int h = str-r-1; // ������� �������� ����� 2
        if (s[r] == '1'){ //���������� ��� �������
          b[r]  = pow(2,h);
          }
        else { // ���������� ��� ����
          b[r]  = 0;
          }
        //�������� ��������� �������
        }
      int sum=0;
      for (r=0; r<str; r++){//����� ����������������� �����
         sum += b[r];
      }
      if (i==0){
      printf("%d",sum);
        }
      else{
       printf(" %d",sum);
      }
      }
      printf("\n");
  // ����� ��������� �������
  for (i = 0; i<n; i++)
    printf("%d ", a[i]);
  free(a);
  getchar();   getchar();
  return 0;
}

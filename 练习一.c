#include <stdio.h>
 
 int main()
 {
 	int cm=0;
 	printf("������"); 
 	scanf("%d",&cm);
 	
 	int foot=cm/30.48;
 	int inch=((cm/30.48)-foot)*12;
 	
 	printf("Ϊ%dӢ�磬%dӢ��",foot,inch);
 	
 	return 0; 
 }

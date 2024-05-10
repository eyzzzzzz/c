#include <stdio.h>
 
 int main()
 {
 	int cm=0;
 	printf("«Î ‰»Î"); 
 	scanf("%d",&cm);
 	
 	int foot=cm/30.48;
 	int inch=((cm/30.48)-foot)*12;
 	
 	printf("Œ™%d”¢¥Á£¨%d”¢≥ﬂ",foot,inch);
 	
 	return 0; 
 }

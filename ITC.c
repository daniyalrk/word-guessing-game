#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int life=5;
int easy();
int medium();
int hard();
int main()
{
	printf("\n\t\t\t\t\t\t[~`--Welcome to WORD GUESSING GAME--`~]\n\n\n");
	int i;
	printf("~WELLCOME TO EASY MODE~\n\n");
	for(i=0;i<10;i++)
	{
		if(life>1)
		{
			easy();
		}
		else 
		{
			break;
		}
	}
	for(i=0;i<8;i++)
	{
		if(i==0 && life>1)
		{
		printf("Congo ! you have cleared EASY MODE\n");
		printf("\n\n~WELLCOME TO MEDIUM MODE~\n\n");	
		}
		
		if(life>1)
	{
		medium();
	}
	else
	{
		break;
	}
	}
	for(i=0;i<5;i++)
	{
	if(i==0 && life>1)
	{
		printf("Congo ! you have cleared MEDIUM MODE\n");
		printf("\n\n~WELLCOME TO HARD MODE~\n\n");
	}
	if(life>1)
	{
		
		hard();
	}
	else
	{
		break;
	}
	}
	
	if(life>1)
	{
	printf("Congo ! you have cleared HARD MODE\n\n\n");
	printf("\t\t\t\t|||||~ohhh GREAT YOU HAVE CLEAR ALL STAGES AND YOU HAVE WON !!~|||||");}
}
int easy()
{
	srand(time(NULL));
   int i;
   char ch,a,word[312][6];
   for(i=0;i<311;i++)
   {
   	word[i][6]='\0';
   }
   FILE *fp;
   fp = fopen("easy.txt","r"); // read mode
   if( fp == NULL )
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
  int j,missing=0;
 char l='b',name[6];
 printf("There is a word given below\n\n");
 //storing word from text file into string
 for(  i=0;i<312;i++ ){
  	 fscanf(fp, "%s\n",word[i]) ; 
   }
   
   // End
      int k=rand()%312;

  
   int n=1;
	strcpy(name,word[k]); 

   fclose(fp);
   

   //missing some lettre in selected word
   for(i=1;i<=6 ;i+=2){
   	if(name[i]=='\0'){
   		break;
	   }
	   
   	name[i]='_';
   	missing++;
   } //End
   
  	
	printf("=>%s (word)",name); // printing that word

	printf("\nEnter %d missing letters!!\n",missing);
		for(i=1;i<=6;i+=2){
			
			if(word[k][i]==0)
				break;
		scanf(" %c",&a);
			if(a==word[k][i]){
				name[i]=a;
			again:
			for(j=0;j<=strlen(name);j++){
		
				printf("%c",name[j]);
			}
			missing--;
			
			printf("\nthere is %d lettres are missing",missing);
		printf("\n");
			}
			else{
				if(life>1){
					i-=2;
					life--;
					printf("Wrong letter\n\nYou have %d life left\n\n",life);
					if(life==1){
						printf("You have last chance think before type!\n\n");
					}
					
					missing++;
					goto again;
					
				}else{
				
	
				printf("Wrong letter\nGAME OVER\n");
				printf("Correct word is: ");
				for(i=0;i<=strlen(name);i++)
    				printf("%c",word[k][i]);
					l='a';
					break;
				}
}
		}

			if(l=='b'){
				printf("\n\nYou did it corect\n\n");
				}
 }
int medium()
{
	
		srand(time(NULL));
   char ch,a,word[349][10];
   FILE *fp;
   int i;
   for(i=0;i<349;i++)
   {
   	word[i][10]='\0';
   }
 
 
   fp = fopen("medium.txt","r"); // read mode
 
   if( fp == NULL )
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
  int j,missing=0;
 char l='b',name[10];
 printf("\n\nThere is a word given below\n");
 //storing word from text file into string
 for(  i=0;i<350;i++ ){
  	 fscanf(fp, "%s\n",word[i]) ; 
   }
   
   // End
      int k=rand()%350;

  
   int n=1;
	strcpy(name,word[k]); 

   fclose(fp);
   

   //missing some lettre in selected word
   for(i=1;i<=20;i+=2){
   	if(name[i]=='\0'){
   		break;
	   }
	   
   	name[i]='_';
   	missing++;
   } //End
   
  	
	printf("=>%s (word)",name); // printing that word

	printf("\nEnter %d missing letters!!\n",missing);
		for(i=1;i<=10;i+=2){
			
			if(word[k][i]==0)
				break;
		scanf(" %c",&a);
			if(a==word[k][i]){
				name[i]=a;
			again:
			for(j=0;j<=strlen(name);j++){
		
				printf("%c",name[j]);
			}
			missing--;
			
			printf("\nthere is %d lettres are missing",missing);
		printf("\n");
			}
			else{
				if(life>1){
					i-=2;
					life--;
					printf("Wrong letter\n\nYou have %d life left\n\n",life);
					if(life==1){
						printf("You have last chance think before type!\n\n");
					}
					missing++;
					goto again;
					
				}else{
				
	
				printf("Wrong letter\n\nGAME OVER\n");
				printf("Correct word is: ");
				for(i=0;i<=strlen(name);i++)
    				printf("%c",word[k][i]);
					l='a';
					break;
				}
}
		}

			if(l=='b'){
				printf("\nYou did it corect\n");
    				
				}	
		
}
int hard()
{
	
		srand(time(NULL));
   char ch,a,word[299][16];
   	FILE *fp;
   	int i;
 	for(i=0;i<299;i++)
 	{
 		word[i][9]='\0';
	 }
 
   fp = fopen("hard.txt","r"); // read mode
 
   if( fp == NULL )
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
  int j,missing=0;
 char l='b',name[16];
 printf("\n\nThere is a word given below\n");
 //storing word from text file into string
 for(  i=0;i<16;i++ ){
  	 fscanf(fp, "%s\n",word[i]) ; 
   }
   
   // End
      int k=rand()%300;

  
   int n=1;
	strcpy(name,word[k]); 

   fclose(fp);
   

   //missing some lettre in selected word
   for(i=1;i<=16;i+=2){
   	if(name[i]=='\0'){
   		break;
	   }
	   
   	name[i]='_';
   	missing++;
   } //End
   
  	
	printf("=>%s (word)",name); // printing that word

	printf("\nEnter %d missing letters!!\n",missing);
		for(i=1;i<=16;i+=2){
			
			if(word[k][i]==0)
				break;
		scanf(" %c",&a);
			if(a==word[k][i]){
				name[i]=a;
			again:
			for(j=0;j<=strlen(name);j++){
		
				printf("%c",name[j]);
			}
			missing--;
			
			printf("\nthere is %d lettres are missing",missing);
		printf("\n");
			}
			else{
				if(life>1){
					i-=2;
					life--;
					printf("Wrong letter\n\nYou have %d life left\n\n",life);
					if(life==1){
						printf("You have last chance think before type!\n\n");
					}
					missing++;
					goto again;
					
				}else{
				
	
				printf("Wrong letter\nGAME OVER\n");
				printf("Correct word is: ");
				for(i=0;i<=strlen(name);i++)
    				printf("%c",word[k][i]);
					l='a';
					break;
				}
}
		}

			if(l=='b'){
				printf("\nYou did it corect\n");
    				
				}	
		
}

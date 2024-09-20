#include <stdio.h>
#include <string.h>

void encrypt(char *s1, char *s2, int key, int len)
{
  int m=0,i,s=0;
  while(i<len)
    {
      if(m==0)
        m=key;
      s=m%10;
      if((s1[i]>='a')&&(s1[i]<='z'))
        s2[i]=((s1[i]+s)<='z') ? s1[i]+s : s1[i]+s-'z'+'a';
      else if((s1[i]>='A')&&(s1[i]<='Z'))
        s2[i]=((s1[i]+s)<='Z') ? s1[i]+s : s1[i]+s-'Z'+'A';
      else
        s2[i]=s1[i];
      m=m/10;
      i++;
    }
    // s1=NULL;
    // s2=NULL;
  return;
}

void decrypt(char *s1, char *s2, int key)
{
  int m=0,i,s=0;
  while(s1[i]!='\0')
    {
      if(m==0)
        m=key;
      s=m%10;
      if((s1[i]>='a')&&(s1[i]<='z'))
        s2[i]=((s1[i]-s)>='a') ? s1[i]-s : s1[i]-s+'a';
      else if((s1[i]>='A')&&(s1[i]<='Z'))
        s2[i]=((s1[i]-s)>='A') ? s1[i]-s : s1[i]-s+'A';
      else
        s2[i]=s1[i];
      m=m/10;
      i++;
    }
  return;
}

int main()
{
  char s[100],w[100],ew[100],r[100]={'\0'};
  int i=0,j=0,key;
  printf("Enter an English Sentence :- \n");
//   scanf("%[^\n]s",s);
  fgets(s, 100, stdin);
//   fflush(stdin);
  printf("Enter the encryption key :- \n");
  scanf("%d",&key);
  strcat(s, " ");
  while(i<strlen(s))
    {
      if(s[i]==' ')
      {
        w[j]='\0';
        // printf("%s",w);
        encrypt(w,ew,key, strlen(w));
        ew[j]='\0';
        strcat(r,ew);
        strcat(r," ");
        strcpy(w, "");
        strcpy(ew, "");
        j=0;
      }
      else
      {
        w[j]=s[i];
        // ew[j]='\0';
        j++;
      }
      i++;
    }
  printf("The encrypted string is :- \n");
  printf("%s",r);
}
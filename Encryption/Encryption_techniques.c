#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int ceaser();
int mono();
int homo();
int poly();
int vig();



int main()
{
    int ch;
    printf("Welcome to cryptographic encryption technique:\n");
    printf("1.Caesar cipher\n");
    printf("2.Monoalphabetic cipher\n");
    printf("3.Homophonic substitution cipher\n");
    printf("4.Polygram substitution cipher\n");
    printf("5.Vigenere cipher\n");
    printf("------ENTER YOUR CHOICE OF ENCRYPTION------\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: 
            ceaser();
            break;    
        case 2: 
            mono();
            break;      
        case 3: 
            homo();
            break;      
        case 4: 
            poly();
            break;      
        case 5: 
            vig();
            break;      
        default:printf("Wrong Entry");
                break;
    }

}
int ceaser()
{
    char message[100], ch;
    int i, key;
    printf("Enter the cipher point : ");
    scanf("%d", &key);
    printf("Enter a message to encrypt:");
    scanf("%s",message);
    for(i = 0; message[i] != '\0'; i++)
    {
        ch = message[i];
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch + key;
            if(ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
            }
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + key;
            if(ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }
            message[i] = ch;
    
        }
        
    }
    printf("Encrypted message: %s", message);
}


int mono()
{
    int i, j, flag;
    char ch[200];
    char a[26]="";
    char *temp=(char *)calloc(20,sizeof(char));
    char b[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (i = 0; i < 26; i++)
    {
        printf("s[%d]:",i);
        scanf("%s",temp);
        strcat(a,temp);
    }
    printf("Enter your statement:\n");
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        for(j=0;j<26;j++)
        {
            if(ch[i]==b[j])
            {
                flag++;
                printf("%c",a[j]);
            }
        }
        if(flag==0)
        {
            printf(" ");
        }
        flag=0;
    }
}


int homo()
{
    int a[4] = {21, 27, 31, 40};
    int c[2] = {1, 33};
    int d[2] = {20, 34};
    int e[5] = {22, 28, 32, 36, 37};
    int i[4] = {2, 29, 38, 41};
    int l[3] = {7, 39, 42};
    int m[2] = {9, 43};
    int n[3] = {12, 48, 97};
    int o[3] = {18, 60, 85};
    int p[2] = {26, 44};
    int r[2] = {24, 49};
    int s[4] = {10, 30, 45, 99};
    int t[3] = {6, 96, 55};
    int u[2] = {16, 94};
    int encrypt[100], pos[100];
    int b = 15, f = 05, g = 17, h = 14, j = 19, k = 03, q = 25, v = 23, w = 13, x = 11, y = 8, z = 04;
    char message[100], ch;
    int ii, pa = 0, pc = 0, pd = 0, pe = 0, pi = 0, pl = 0, pm = 0, pn = 0, po = 0, pp = 0, pr = 0, ps = 0, pt = 0, pu = 0, kk = 0;
    fflush(stdin);
    printf("Enter a message to encrypt: ");
    fgets(message,sizeof(message),stdin);
    for (ii = 0; message[ii] != '\0'; ii++)
    {
        ch = message[ii];
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            if (ch == 'a' || ch == 'A')
            {
                if (pa < 4)
                {
                    encrypt[ii] = a[pa];
                    printf("%d\n", encrypt[ii]);
                    pa++;
                }
                else
                {
                    pa = 0;
                    encrypt[ii] = a[pa];
                    pa++;
                    printf("%d", encrypt[ii]);
                }
            }
            if (ch == 'b' || ch == 'B')
            {
                encrypt[ii] = b;
                printf("%d", encrypt[ii]);
            }
            if (ch == 'c' || ch == 'C')
            {
                if (pc < 2)
                {
                    encrypt[ii] = c[pc];
                    printf("%d", encrypt[ii]);
                    pc++;
                }
                else
                {
                    pc = 0;
                    encrypt[ii] = c[pc];
                    pc++;
                    printf("%d", encrypt[ii]);
                }
            }
            if (ch == 'd' || ch == 'D')
            {
                if (pd < 2)
                {
                    encrypt[ii] = d[pd];
                    printf("%d", encrypt[ii]);
                    pd++;
                }
                else
                {
                    pd = 0;
                    encrypt[ii] = d[pd];
                    pd++;
                    printf("%d", encrypt[ii]);
                }
            }
            if (ch == 'e' || ch == 'E')
            {
                if (pe < 5)
                {
                    encrypt[ii] = e[pe];
                    printf("%d", encrypt[ii]);
                    pe++;
                }
                else
                {
                    pe = 0;
                    encrypt[ii] = e[pe];
                    pe++;
                    printf("%d", encrypt[ii]);
                }
            }
            if (ch == 'f' || ch == 'F')
            {
                encrypt[ii] = f;
                printf("%d", encrypt[ii]);
            }
            if (ch == 'g' || ch == 'G')
            {
                encrypt[ii] = g;
                printf("%d", encrypt[ii]);
            }
            if (ch == 'h' || ch == 'H')
            {
                encrypt[ii] = h;
                printf("%d", encrypt[ii]);
            }
            if (ch == 'i' || ch == 'I')
            {
                if (pi < 4)
                {
                    encrypt[ii] = i[pi];
                    printf("%d", encrypt[ii]);
                    pi++;
                }
                else
                {
                    pi = 0;
                    encrypt[ii] = i[pi];
                    pi++;
                    printf("%d", encrypt[ii]);
                }
            }
            if (ch == 'j' || ch == 'J')
            {
                encrypt[ii] = j;
                printf("%d", encrypt[ii]);
            }
            if (ch == 'k' || ch == 'K')
            {
                encrypt[ii] = k;
                printf("%d", encrypt[ii]);
            }
            if (ch == 'l' || ch == 'L')
            {
                if (pl < 3)
                {
                    encrypt[ii] = l[pl];
                    printf("%d", encrypt[ii]);
                    pl++;
                }
                else
                {
                    pl = 0;
                    encrypt[ii] = l[pl];
                    pl++;
                    printf("%d", encrypt[ii]);
                }
            }
            if (ch == 'm' || ch == 'M')
            {
                if (pm < 2)
                {
                    encrypt[ii] = m[pm];
                    printf("%d", encrypt[ii]);
                    pm++;
                }
                else
                {
                    pm = 0;
                    encrypt[ii] = m[pm];
                    pm++;
                    printf("%d", encrypt[ii]);
                }
            }
            if (ch == 'n' || ch == 'N')
            {
                if (pn < 3)
                {
                    encrypt[ii] = n[pn];
                    printf("%d", encrypt[ii]);
                    pn++;
                }
                else
                {
                    pn = 0;
                    encrypt[ii] = n[pn];
                    pn++;
                    printf("%d", encrypt[ii]);
                }
            }
            if (ch == 'o' || ch == 'O')
            {
                if (po < 3)
                {
                    encrypt[ii] = o[po];
                    printf("%d", encrypt[ii]);
                    po++;
                }
                else
                {
                    po = 0;
                    encrypt[ii] = o[po];
                    po++;
                    printf("%d", encrypt[ii]);
                }
            }
            if (ch == 'p' || ch == 'P')
            {
                if (pp < 2)
                {
                    encrypt[ii] = p[pp];
                    printf("%d", encrypt[ii]);
                    pp++;
                }
                else
                {
                    pp = 0;
                    encrypt[ii] = p[pp];
                    pp++;
                    printf("%d", encrypt[ii]);
                }
            }
            if (ch == 'q' || ch == 'Q')
            {
                encrypt[ii] = q;
                printf("%d", encrypt[ii]);
            }
            if (ch == 'r' || ch == 'R')
            {
                if (pr < 2)
                {
                    encrypt[ii] = r[pr];
                    printf("%d", encrypt[ii]);
                    pr++;
                }
                else
                {
                    pr = 0;
                    encrypt[ii] = r[pr];
                    pr++;
                    printf("%d", encrypt[ii]);
                }
            }
            if (ch == 's' || ch == 'S')
            {
                if (ps < 4)
                {
                    encrypt[ii] = s[ps];
                    printf("%d", encrypt[ii]);
                    ps++;
                }
                else
                {
                    ps = 0;
                    encrypt[ii] = s[ps];
                    ps++;
                    printf("%d", encrypt[ii]);
                }
            }
            if (ch == 't' || ch == 'T')
            {
                if (pt < 3)
                {
                    encrypt[ii] = t[pt];
                    printf("%d", encrypt[ii]);
                    pt++;
                }
                else
                {
                    pt = 0;
                    encrypt[ii] = t[pt];
                    pt++;
                    printf("%d", encrypt[ii]);
                }
            }
            if (ch == 'u' || ch == 'U')
            {
                if (pu < 2)
                {
                    encrypt[ii] = u[pu];
                    printf("%d", encrypt[ii]);
                    pu++;
                }
                else
                {
                    pu = 0;
                    encrypt[ii] = u[pu];
                    pu++;
                    printf("%d", encrypt[ii]);
                }
            }
            if (ch == 'v' || ch == 'V')
            {
                encrypt[ii] = v;
                printf("%d", encrypt[ii]);
            }
            if (ch == 'w' || ch == 'W')
            {
                encrypt[ii] = w;
                printf("%d", encrypt[ii]);
            }
            if (ch == 'x' || ch == 'X')
            {
                encrypt[ii] = x;
                printf("%d", encrypt[ii]);
            }
            if (ch == 'y' || ch == 'Y')
            {
                encrypt[ii] = y;
                printf("%d", encrypt[ii]);
            }
            if (ch == 'z' || ch == 'Z')
            {
                encrypt[ii] = z;
                printf("%d", encrypt[ii]);
            }
        }
        else
        {
            printf(" ");
        }
    }
}

 
int poly()
{

    int K[3][3]={1,0,5,5,0,1,1,2,3};
    int c,x,P2[3],i,j,k,l,sum=0,s1;
    char C[100];

    char P[100];
    
    
    
    printf("Enter the total no of letters you want to shift(multiple of 3):\n");
    scanf("%d",&s1);
    printf("Enter the plaintext :\n");
    scanf("%s",P);
   
    
   
    printf("Your Text is:\n");
    for(i=0;i<s1;i++)
    {
        printf("%c",P[i]);
    }
    int P1[s1];
    for(i=0;i<s1;i++)
    {
        if(P[i]=='a'||P[i]=='A')
        {
            P1[i]=0;
        }
        else if(P[i]=='b'||P[i]=='B')
        {
            P1[i]=1;
        }
        else if(P[i]=='c'||P[i]=='C')
        {
            P1[i]=2;
        }
        else if(P[i]=='d'||P[i]=='D')
        {
            P1[i]=3;
        }
        else if(P[i]=='e'||P[i]=='E')
        {
            P1[i]=4;
        }
        else if(P[i]=='f'||P[i]=='F')
        {
            P1[i]=5;
        }
        else if(P[i]=='g'||P[i]=='G')
        {
            P1[i]=6;
        }
        else if(P[i]=='h'||P[i]=='H')
        {
            P1[i]=7;
        }
        else if(P[i]=='i'||P[i]=='I')
        {
            P1[i]=8;
        }
        else if(P[i]=='j'||P[i]=='J')
        {
            P1[i]=9;
        }
        else if(P[i]=='k'||P[i]=='K')
        {
            P1[i]=10;
        }
        else if(P[i]=='l'||P[i]=='L')
        {
            P1[i]=11;
        }
        else if(P[i]=='m'||P[i]=='M')
        {
            P1[i]=12;
        }
        else if(P[i]=='n'||P[i]=='N')
        {
            P1[i]=13;
        }
        else if(P[i]=='o'||P[i]=='O')
        {
            P1[i]=14;
        }
        else if(P[i]=='P'||P[i]=='P')
        {
            P1[i]=15;
        }
        else if(P[i]=='q'||P[i]=='Q')
        {
            P1[i]=16;
        }
        else if(P[i]=='r'||P[i]=='R')
        {
            P1[i]=17;
        }
        else if(P[i]=='s'||P[i]=='S')
        {
            P1[i]=18;
        }
        else if(P[i]=='t'||P[i]=='T')
        {
            P1[i]=19;
        }
        else if(P[i]=='u'||P[i]=='U')
        {
            P1[i]=20;
        }
        else if(P[i]=='v'||P[i]=='V')
        {
            P1[i]=21;
        }
        else if(P[i]=='w'||P[i]=='W')
        {
            P1[i]=22;
        }
        else if(P[i]=='x'||P[i]=='X')
        {
            P1[i]=23;
        }
        else if(P[i]=='y'||P[i]=='Y')
        {
            P1[i]=24;
        }
        else if(P[i]=='z'||P[i]=='Z')
        {
            P1[i]=25;
        }
        
    }
    printf("\nYour plaintext matrix is:\n");
    for(i=0;i<s1;i++)
    {
        printf("%d ",P1[i]);
    }
    int C2[s1];
    c=0,x=0;
    for(i=0;i<s1/3;i++)
    {
        for(j=0;j<3;j++)
        {
            P2[j]=P1[c];
            c++;
        }
        for(k=0;k<3;k++)
        {
            sum=0;
            for(l=0;l<3;l++)
            {
                sum+=P2[l]*K[l][k];
            }
            C2[x]=sum%26;
            x++;
        }
    }
       
    
    printf("\nThe Encrypted matrix is:\n");
    for(i=0;i<s1;i++)
    {
        printf("%d ",C2[i]);
    }
    
    for(i=0;i<s1;i++)
    {
        if(C2[i]==0)
        {
            C[i]='A';
        }
        else if(C2[i]==1)
        {
            C[i]='B';
        }
        else if(C2[i]==2)
        {
            C[i]='C';
        }
        else if(C2[i]==3)
        {
            C[i]='D';
        }
        else if(C2[i]==4)
        {
            C[i]='E';
        }
        else if(C2[i]==5)
        {
            C[i]='F';
        }
        else if(C2[i]==6)
        {
            C[i]='G';
        }
        else if(C2[i]==7)
        {
            C[i]='H';
        }
        else if(C2[i]==8)
        {
            C[i]='I';
        }
        else if(C2[i]==9)
        {
            C[i]='J';
        }
        else if(C2[i]==10)
        {
            C[i]='K';
        }
        else if(C2[i]==11)
        {
            C[i]='L';
        }
        else if(C2[i]==12)
        {
            C[i]='M';
        }
        else if(C2[i]==13)
        {
            C[i]='N';
        }
        else if(C2[i]==14)
        {
            C[i]='O';
        }
        else if(C2[i]==15)
        {
            C[i]='P';
        }
        else if(C2[i]==16)
        {
            C[i]='Q';
        }
        else if(C2[i]==17)
        {
            C[i]='R';
        }
        else if(C2[i]==18)
        {
            C[i]='S';
        }
        else if(C2[i]==19)
        {
            C[i]='T';
        }
        else if(C2[i]==20)
        {
            C[i]='U';
        }
        else if(C2[i]==21)
        {
            C[i]='V';
        }
        else if(C2[i]==22)
        {
            C[i]='W';
        }
        else if(C2[i]==23)
        {
            C[i]='X';
        }
        else if(C2[i]==24)
        {
            C[i]='Y';
        }
        else if(C2[i]==25)
        {
            C[i]='Z';
        }
    }
    printf("\nThe Encrypted text is:\n");
    for(j=0;j<s1;j++)
    {
        printf("%c",C[j]);
    }
    
}

int vig()
{
    char pt[20]={'\0'},ct[20]={'\0'},key[20]={'\0'},rt[20]={'\0'};
    int i,j;
    printf("Enter the plain text:");
    scanf("%s",pt);
    printf("Enter the key:");
    scanf("%s",key);

    j=0;
    for(i=strlen(key);i<strlen(pt);i++)
    {
        if(j==strlen(key))
        {
            j=0;
        }
        key[i]=key[j];
        j++;
    }
    printf("New key is:%s \n",key);
    
    for(i=0;i<strlen(pt);i++)
    {
        ct[i]=(((pt[i]-97)+(key[i]-97))%26)+97;
    }
    printf("Cipher text is:%s",ct);
    getch();
}

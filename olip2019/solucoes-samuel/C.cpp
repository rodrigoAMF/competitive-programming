#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

int n, ans, total, tam;
char s[N];
int marq[N];
string y;

int main()
{
    scanf("%d", &n);
 
    while(n--)
    {
        
        scanf(" %[^\n]", s);
       
        tam = (int) strlen(s);
        
        memset(marq, 0, sizeof marq);
        
        for(int i = 0 ; i < tam; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = tolower(s[i]);
            }
        }
        y = s;
        
        char *c = strtok(s, " ");
        total = ans = 0;
        
        while(c != NULL)
        {   
            string x = c;
            total += x.size();
            if(x == "jogo" || x == "perdi")
            {
                  
                ans = max(ans, total);
                total = 0;
            }
            else if(x == "jogo." || x == "jogo," || x == "perdi." || x == "perdi,")
            {
                  
                ans = max(ans, total - 1);
                total = 0;
            }
           
            c = strtok(NULL, " ");
        }
        
        printf("%d\n", ans);
    }

    return 0;
}
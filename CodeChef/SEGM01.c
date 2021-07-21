#include <stdio.h>
#include <string.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--){
        char s[100000];
        int ones = 0, zeros = 0, count=0;
        scanf("%s",&s);
        int n = strlen(s);
        for(int i=0; i<n-1; i++){
            if((s[i] == '0' && s[i+1] == '1') || (s[i] == '1' && s[i+1] == '0'))
                count++;
            if(s[i] == '0')
                zeros++;
            if(s[i] == '1')
                ones++;
        }
        if(s[n-1] == '0')
            zeros++;
        else
            ones++;

        if((count > 2) || ((s[0] == '1') && (s[n-1] == '1') && (zeros != 0)) || (zeros == n))
            printf("NO\n");
        else
            printf("YES\n");
    }
	return 0;
}


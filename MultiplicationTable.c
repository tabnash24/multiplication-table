#include<stdio.h>

//function to output a multiplication table

void multiplication(int num,int limit){
    
 for(int i=1;i<=limit;i++)
    {
        printf("%d X %d = %d\n",num,i,num*i);
    }
     
   
}

int main()
{
    int n;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d",&n);
    

    // choose the limit you want the multiplication table to go
    int stopping_value;
    printf("Enter 1 for values till 10 or press 2 for values till 12:\n");
    scanf("%d",&stopping_value);
        printf("The multiplication table is as follows:\n");
        switch (stopping_value)
        {
        case 1:
            multiplication(n,10);
            break;
        case 2:
            multiplication(n,12);
            break;
        
        default:
            printf("Invalid choice\a");
            break;
        }


    return 0;
}

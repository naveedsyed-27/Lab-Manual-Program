#include <stdio.h>
int main()
{
    int a,b;
    char choice;
    printf("Enter two number;");
    scanf("%d %d", &a,&b);
    printf("\n enter an operator(+,-,*,/,%):");
    scanf("%c",choice);
    {
    case'+'
        printf("addition=%d\n",a+b);
        break;
        case'-':
        printf("subtraction=%d\n",a-b);
        break;
        case'*':
        printf("multiplication=%d\n",a*b);
        break;
        case'/':
        if(b!=0)
            printf("division=%d\n",a/b);
        else
            printf(dDivision ny zero is not possible.\n");
        break;
        case'%':
        if(b!=0)
            printf("Modulas=%d\n",a%b);
        elseprintf("Modulas by zero is not possile.\n");
        break;

        default:
            printf("Invalid Operator.\n");
    }
    return 0;
}

#include <stdio.h>
#include <windows.h>

void menuList();
int createAccount(int, int);
int main()
{
    // create acc
    // 1.initial amount=0
    // 2.deposit (initial amount+deposit amount)
    // 3.withdraw (initial amount -withdrawl amount)
    int mobn, pass, newMobn, newPass, conpass;
    int i, n, ch1, ch, flag = 0;
    float initalAmount, deposit, withdraw;
    while (1)
    {
    	inital:
        system("cls");
        printf("\n\t\t :---MENU---: \n");
        printf("\n0.Exit\n1.Create account \n2.Login\n");
        printf("\nEnter your choice:- ");
        scanf("%d", &ch1);
        switch (ch1)
        {
		case 0:
			exit(0);
        case 1:
            if(flag==0)
            {
            printf("\n\t\t :CREATE YOUR BANK ACCOUNT: \n");
            printf("Enter your mobile number:-  ");
            scanf("%d", &mobn);
            printf("\nCreate a 4-digit pin:-  ");
            scanf("%d", &pass);
        a:
            printf("\nConfirm your pin:-  ");
            scanf("%d", &conpass);
            if (pass == conpass)
            {
                printf("\n\t\t :YOUR ACCOUNT HAS BEEN CREATED: \n");
                printf("\n(press any key to continue...)");
                getch();
                system("cls");
                flag=1;
            }
            else
            {
                printf("\n\nYour pin doesnt match...!! Try again");
                goto a;
            }
        }
        else{
            printf("\nAn account already exists with ph no. %d",mobn);
            printf("\n(press any key to continue...)");
            getch();
        }
            break;

        case 2:
        b:
        	system("cls");
            printf("\n\t\t :LOGIN INTO YOUR BANK ACCOUNT: \n");
            printf("\nEnter your mobile number:-  ");
            scanf("%d", &newMobn);
            printf("Enter your Pin:-  ");
            scanf("%d", &newPass);
            if (mobn == newMobn && pass == newPass)
            {
                while (1)
                {
                    menuList();
                    scanf("%d",&ch);
                    switch (ch)
                    {
                    case 0:
                        goto inital;
                    }
                }
            }
            else if (mobn != newMobn && pass == newPass)
            {
                printf("\n\t\t :WRONG MOBILE NUMBER: \n");
                Sleep(2000);
                goto b;
            }
            else if (mobn == newMobn && pass != newPass)
            {
                printf("\n\t\t :WRONG    PASSWORD: \n");
                Sleep(2000);
                system("cls");
                goto b;
            }
            else
            {
                printf("\n\t\t :ACCOUNT DOESNT EXISTS: \n");
                Sleep(2000);
            }
            break;
            
        }
    }



    return 0;
}
void menuList()
{
	printf("\n\n0.Return to main menu\n2.Initial amount\n3.Deposit\n4.Withdraw\n");
}

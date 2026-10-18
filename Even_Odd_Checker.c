#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    printf(" /░░░░    /░░░   /░░░░   /░ /░    /█▀▀▀/    /░░░░           /░░░░    /░░░    /░░░░    /█▀▀▀/\n");
    printf("│ ▒__/   │/_▒/  │_▒ /▒  │ ▒▒▒▒   │ ▓▓▓     │_▒ /▒          │ ▒__/   │_▒/▒   │_▒ /▒   │ ▓▓▓\n");
    printf("│ ▓       │ ▓   │ ▓▓▓/  │ ▓_/▓   │_▒_/     │ ▓▓▓/          │ ▓      │ ▓ ▓   │ ▓▓▓/   │_▒_/\n");
    printf("│ ████    /███  │ █_/   │ █│ █   │ ░░░░    │ █_/█          │ ████   │ ███   │ █_/█   │ ░░░░\n");
    printf("│/___/   │/__/  │//     │//│//   │/___/    │// //          │/___/   │/__/   │// //   │/___/\n");
    printf("                                                                                               ");
    printf("                                                  Dᴇᴠᴇʟᴏᴘᴇᴅ Bʏ Cʜɪᴘᴇʀ  • ᴠᴇʀsɪᴏɴ 1.0 • ᴄʜɪᴘᴇʀ ᴄᴏʀᴇ    ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             \n");

    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if (num%2 == 0)
        printf("Your NUMBER is Even....");
    else
        printf("Your NUMBER is Odd.....");

        return 0;

}

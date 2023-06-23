#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

//long  long int coin = 10000000;
int coin = 500;

int slot[5][11] = { 0, };
int slotNum[3] = { 0, 0, 0 };

void slotMachine();
void slot_machine(int where, int num);
void output();
void spin_slot(int where);

void RPS();
void event();

void chinchro();
void showChinchroRule();
int getCode(int i, int j, int k);
int* sortDice(int* arr);
int printGenealogy(int code);
int rollDice(int a, int b, int c, int who, int where);

void yaba();
void printanswer(int n, int m);
int mix(int n);
void print_yaba(int n);
int returnMoney(int n, int money);

int main()
{
    int action;
    printf("초기 금액 : %d\n\n", coin);
    while (coin > 0)
    {
        printf("\n무엇을 하시겠습니까?\n\n");
        printf("1) 슬롯머신     2) 가위바위보     3) 야바위     4) 친치로     5) 금액 확인     6) 도박장 떠나기\n");
        scanf("%d", &action);

        if (action == 1)
        {
            slotMachine();
        }
        else if (action == 2)
        {
            RPS();
        }
        else if (action == 3)
        {
            yaba();
            system("cls");
        }
        else if (action == 4)
        {
            chinchro();
        }
        else if (action == 5)
        {
            system("cls");
            printf("현재 금액 : %d\n", coin);
            Sleep(1000);
        }
        else if (action == 6)
        {
            system("cls");
            printf("안녕히 가세요.\n");
            Sleep(1000);
            break;
        }
        else
        {
            system("cls");
            printf("잘못된 입력입니다.\n\n");
            Sleep(1000);
            continue;
        }
    }

    if (coin <= 0)
    {
        printf("\n파산하셨네요! 저런 안타까워라");
    }
    else if (coin >= 10000)
    {
        printf("\n%d!!!? 엄청나네요", coin);
    }
    else if (coin >= 5000)
    {
        printf("\n%d만큼 벌다니 좀 치시는군요", coin);
    }
    else if (coin >= 500)
    {
        printf("\n%d? 그래도 본전은 찾으셨네요", coin);
    }
    else if (coin > 0)
    {
        printf("\n%d??? 많이 잃어서 배 좀 아프시겠어요", coin);
    }

    return 0;
}

//슬롯머신 코드
void slotMachine()
{
    system("cls");
    int bet_coin;

    printf("현재 코인 : %d\n", coin);
    printf("몇 개의 코인을 배팅 하시겠습니까?\n");
    scanf("%d", &bet_coin);

    if (bet_coin > coin)
    {
        system("cls");
        printf("당신에겐 이만큼의 돈이 없는걸요\n");
        Sleep(1000);
        return;
    }
    else if (bet_coin < 0)
    {
        system("cls");
        printf("잘못된 입력입니다\n");
        Sleep(1000);
        return;
    }

    Sleep(1000);

    coin -= bet_coin;

    slot_machine(1, 0);
    slot_machine(2, 0);
    slot_machine(3, 0);
    output();

    spin_slot(1);
    spin_slot(2);
    spin_slot(3);

    if (slotNum[0] == slotNum[1] && slotNum[1] == slotNum[2])
    {
        if (slotNum[0] == 7)
        {
            bet_coin *= 100;
        }
        bet_coin *= 10;
    }
    else if (slotNum[0] == slotNum[1] || slotNum[1] == slotNum[2] || slotNum[0] == slotNum[2])
    {
        bet_coin *= 5;
    }
    else
    {
        bet_coin = 0;
    }

    printf("\n\n얻은 코인 : %d\n", bet_coin);

    coin += bet_coin;

    Sleep(1000);
}

void slot_machine(int where, int num)
{
    if (where == 1) where = 0;
    else if (where == 2) where = 4;
    else where = 8;

    if (num == 0)
    {
        slot[0][0 + where] = 1;
        slot[0][1 + where] = 1;
        slot[0][2 + where] = 1;

        slot[1][0 + where] = 1;
        slot[1][1 + where] = 0;
        slot[1][2 + where] = 1;

        slot[2][0 + where] = 1;
        slot[2][1 + where] = 0;
        slot[2][2 + where] = 1;

        slot[3][0 + where] = 1;
        slot[3][1 + where] = 0;
        slot[3][2 + where] = 1;

        slot[4][0 + where] = 1;
        slot[4][1 + where] = 1;
        slot[4][2 + where] = 1;
        slotNum[where / 4] = 0;
    }
    else if (num == 1)
    {
        slot[0][0 + where] = 0;
        slot[0][1 + where] = 0;
        slot[0][2 + where] = 1;

        slot[1][0 + where] = 0;
        slot[1][1 + where] = 1;
        slot[1][2 + where] = 1;

        slot[2][0 + where] = 0;
        slot[2][1 + where] = 0;
        slot[2][2 + where] = 1;

        slot[3][0 + where] = 0;
        slot[3][1 + where] = 0;
        slot[3][2 + where] = 1;

        slot[4][0 + where] = 0;
        slot[4][1 + where] = 0;
        slot[4][2 + where] = 1;
        slotNum[where / 4] = 1;
    }
    else if (num == 2)
    {
        slot[0][0 + where] = 1;
        slot[0][1 + where] = 1;
        slot[0][2 + where] = 1;

        slot[1][0 + where] = 0;
        slot[1][1 + where] = 0;
        slot[1][2 + where] = 1;

        slot[2][0 + where] = 1;
        slot[2][1 + where] = 1;
        slot[2][2 + where] = 1;

        slot[3][0 + where] = 1;
        slot[3][1 + where] = 0;
        slot[3][2 + where] = 0;

        slot[4][0 + where] = 1;
        slot[4][1 + where] = 1;
        slot[4][2 + where] = 1;
        slotNum[where / 4] = 2;
    }
    else if (num == 3)
    {
        slot[0][0 + where] = 1;
        slot[0][1 + where] = 1;
        slot[0][2 + where] = 1;

        slot[1][0 + where] = 0;
        slot[1][1 + where] = 0;
        slot[1][2 + where] = 1;

        slot[2][0 + where] = 1;
        slot[2][1 + where] = 1;
        slot[2][2 + where] = 1;

        slot[3][0 + where] = 0;
        slot[3][1 + where] = 0;
        slot[3][2 + where] = 1;

        slot[4][0 + where] = 1;
        slot[4][1 + where] = 1;
        slot[4][2 + where] = 1;
        slotNum[where / 4] = 3;
    }
    else if (num == 4)
    {
        slot[0][0 + where] = 1;
        slot[0][1 + where] = 0;
        slot[0][2 + where] = 1;

        slot[1][0 + where] = 1;
        slot[1][1 + where] = 0;
        slot[1][2 + where] = 1;

        slot[2][0 + where] = 1;
        slot[2][1 + where] = 1;
        slot[2][2 + where] = 1;

        slot[3][0 + where] = 0;
        slot[3][1 + where] = 0;
        slot[3][2 + where] = 1;

        slot[4][0 + where] = 0;
        slot[4][1 + where] = 0;
        slot[4][2 + where] = 1;
        slotNum[where / 4] = 4;
    }
    else if (num == 5)
    {
        slot[0][0 + where] = 1;
        slot[0][1 + where] = 1;
        slot[0][2 + where] = 1;

        slot[1][0 + where] = 1;
        slot[1][1 + where] = 0;
        slot[1][2 + where] = 0;

        slot[2][0 + where] = 1;
        slot[2][1 + where] = 1;
        slot[2][2 + where] = 1;

        slot[3][0 + where] = 0;
        slot[3][1 + where] = 0;
        slot[3][2 + where] = 1;

        slot[4][0 + where] = 1;
        slot[4][1 + where] = 1;
        slot[4][2 + where] = 1;
        slotNum[where / 4] = 5;
    }
    else if (num == 6)
    {
        slot[0][0 + where] = 1;
        slot[0][1 + where] = 0;
        slot[0][2 + where] = 0;

        slot[1][0 + where] = 1;
        slot[1][1 + where] = 0;
        slot[1][2 + where] = 0;

        slot[2][0 + where] = 1;
        slot[2][1 + where] = 1;
        slot[2][2 + where] = 1;

        slot[3][0 + where] = 1;
        slot[3][1 + where] = 0;
        slot[3][2 + where] = 1;

        slot[4][0 + where] = 1;
        slot[4][1 + where] = 1;
        slot[4][2 + where] = 1;
        slotNum[where / 4] = 6;
    }
    else if (num == 7)
    {
        slot[0][0 + where] = 1;
        slot[0][1 + where] = 1;
        slot[0][2 + where] = 1;

        slot[1][0 + where] = 0;
        slot[1][1 + where] = 0;
        slot[1][2 + where] = 1;

        slot[2][0 + where] = 0;
        slot[2][1 + where] = 0;
        slot[2][2 + where] = 1;

        slot[3][0 + where] = 0;
        slot[3][1 + where] = 0;
        slot[3][2 + where] = 1;

        slot[4][0 + where] = 0;
        slot[4][1 + where] = 0;
        slot[4][2 + where] = 1;
        slotNum[where / 4] = 7;
    }
    else if (num == 8)
    {
        slot[0][0 + where] = 1;
        slot[0][1 + where] = 1;
        slot[0][2 + where] = 1;

        slot[1][0 + where] = 1;
        slot[1][1 + where] = 0;
        slot[1][2 + where] = 1;

        slot[2][0 + where] = 1;
        slot[2][1 + where] = 1;
        slot[2][2 + where] = 1;

        slot[3][0 + where] = 1;
        slot[3][1 + where] = 0;
        slot[3][2 + where] = 1;

        slot[4][0 + where] = 1;
        slot[4][1 + where] = 1;
        slot[4][2 + where] = 1;
        slotNum[where / 4] = 8;
    }
    else if (num == 9)
    {
        slot[0][0 + where] = 1;
        slot[0][1 + where] = 1;
        slot[0][2 + where] = 1;

        slot[1][0 + where] = 1;
        slot[1][1 + where] = 0;
        slot[1][2 + where] = 1;

        slot[2][0 + where] = 1;
        slot[2][1 + where] = 1;
        slot[2][2 + where] = 1;

        slot[3][0 + where] = 0;
        slot[3][1 + where] = 0;
        slot[3][2 + where] = 1;

        slot[4][0 + where] = 0;
        slot[4][1 + where] = 0;
        slot[4][2 + where] = 1;
        slotNum[where / 4] = 9;
    }
}

void output()
{
    system("cls");
    printf("%c%c%c  %c%c%c  %c%c%c", slot[0][0] ? '0' : ' ', slot[0][1] ? '0' : ' ', slot[0][2] ? '0' : ' ', slot[0][4] ? '0' : ' ', slot[0][5] ? '0' : ' ', slot[0][6] ? '0' : ' ', slot[0][8] ? '0' : ' ', slot[0][9] ? '0' : ' ', slot[0][10] ? '0' : ' ');
    printf("\n%c%c%c  %c%c%c  %c%c%c", slot[1][0] ? '0' : ' ', slot[1][1] ? '0' : ' ', slot[1][2] ? '0' : ' ', slot[1][4] ? '0' : ' ', slot[1][5] ? '0' : ' ', slot[1][6] ? '0' : ' ', slot[1][8] ? '0' : ' ', slot[1][9] ? '0' : ' ', slot[1][10] ? '0' : ' ');
    printf("\n%c%c%c  %c%c%c  %c%c%c", slot[2][0] ? '0' : ' ', slot[2][1] ? '0' : ' ', slot[2][2] ? '0' : ' ', slot[2][4] ? '0' : ' ', slot[2][5] ? '0' : ' ', slot[2][6] ? '0' : ' ', slot[2][8] ? '0' : ' ', slot[2][9] ? '0' : ' ', slot[2][10] ? '0' : ' ');
    printf("\n%c%c%c  %c%c%c  %c%c%c", slot[3][0] ? '0' : ' ', slot[3][1] ? '0' : ' ', slot[3][2] ? '0' : ' ', slot[3][4] ? '0' : ' ', slot[3][5] ? '0' : ' ', slot[3][6] ? '0' : ' ', slot[3][8] ? '0' : ' ', slot[3][9] ? '0' : ' ', slot[3][10] ? '0' : ' ');
    printf("\n%c%c%c  %c%c%c  %c%c%c", slot[4][0] ? '0' : ' ', slot[4][1] ? '0' : ' ', slot[4][2] ? '0' : ' ', slot[4][4] ? '0' : ' ', slot[4][5] ? '0' : ' ', slot[4][6] ? '0' : ' ', slot[4][8] ? '0' : ' ', slot[4][9] ? '0' : ' ', slot[4][10] ? '0' : ' ');
}

void spin_slot(int where)
{
    int a = 1, b = 1;

    srand(time(NULL));
    int random = 0;
    random = rand() % 9;

    while (b - random <= 30)
    {
        Sleep(b);
        if (a == 10)
        {
            a = 1;
        }
        slot_machine(where, a);
        output();
        a++;
        b++;
    }
}

//가위바위보 코드
void RPS()
{
    char choices[3][10] = { "가위", "바위", "보" };
    int PlayerChoice, DealerChoice;
    int gamecoin = 0;

    srand(time(NULL));

    system("cls");
    printf("현재코인: %d\n", coin);
    printf("(이기면 2배, 비기면 그대로, 지면 0배)\n");
    printf("몇개의 코인을 배팅 하시겠습니까? : ");
    scanf("%d", &gamecoin);
    if (gamecoin > coin)
    {
        printf("\n당신에겐 이만큼의 돈이 없는걸요\n");
        return;
    }
    if (gamecoin < 0)
    {
        printf("\n잘못된 입력입니다\n");
        return;
    }

    coin -= gamecoin;
    printf("\n가위(1), 바위(2), 보(3) 중 하나를 선택하세요.\n");
    scanf_s("%d", &PlayerChoice);

    if (PlayerChoice == 1 || PlayerChoice == 2 || PlayerChoice == 3)
    {
        srand(time(0));
        DealerChoice = rand() % 3 + 1;

        printf("\n당신: %s\n\n", choices[PlayerChoice - 1]);
        printf("딜러 : %s\n\n", choices[DealerChoice - 1]);

        if (PlayerChoice == DealerChoice)
        {
            printf("비겼습니다!");
            coin += gamecoin;
            printf(" (현재 가진 코인개수 : %d)\n", coin);
            event(gamecoin);
        }
        else if ((PlayerChoice == 1 && DealerChoice == 3) || (PlayerChoice == 2 && DealerChoice == 1) || (PlayerChoice == 3 && DealerChoice == 2))
        {
            printf("Player가 이겼습니다!");
            coin += (gamecoin * 2);
            printf(" (현재 가진 코인개수 : %d)\n", coin);
            event(gamecoin);
        }
        else
        {
            printf("Dealer가 이겼습니다... ");
            coin += (gamecoin * 0);
            printf(" (현재 가진 코인개수 : %d)\n", coin);

            if (rand() % 100 < 10)
            {
                printf("이런~~ 패배하셨군요 안타깝네요\n");
                event(gamecoin);
            }
        }
    }
    else
    {
        coin += gamecoin;
        printf("\n잘못된 입력입니다");
        return;
    }

    Sleep(1000);
    system("cls");
}

void event(int gamecoin) {
    srand(time(0));
    int eventNumber = rand() % 5;

    switch (eventNumber)
    {
        case 0:
            printf("\n이런! 범인이 도박장에서 도주하는 사건이 발생했습니다!");
            printf("현재 가진코인이 -15이 됩니다..\n");
            coin -= 15;
            break;
        case 1:
            printf("\n이런! 도박장에서 대규모 경기조작 사건이 발각되었습니다!");
            printf("현재 가진코인이 -20이 됩니다..\n");
            coin -= 20;
            break;
        case 2:
            printf("\n이런! 도박장에서 화재가 발생하여 비상 대피 절차가 진행 중입니다! ");
            printf("현재 가진코인이 -10이 됩니다..\n");
            coin -= 10;
            break;
        case 3:
            printf("\n와! 도박장에서 거액의 상금을 받은 손님이 기뻐하여 선물로 음식을 나누고 있습니다! ");
            printf("현재 가진코인에 배팅코인 두배가 지급됩니다!!\n");
            coin += gamecoin * 2;
            break;
        case 4:
            printf("\n와! 도박장에서 사람들이 열광하는 최고의 운이 닥쳤습니다! 전체적인 분위기가 환상적입니다! ");
            printf("현재 가진코인에 배팅코인 두배가 지급됩니다!!\n");
            coin += gamecoin * 2;
            break;
        default:
            printf("\n음...예기치 않은 사건이 발생하였습니다!\n");
            printf("코인개수는 변하지 않습니다");
    }

    printf("계속하실려면 엔터를 눌러 주세요..");
    getchar();
    getchar();
}

//친치로 코드
//친치로 룰북
void showChinchroRule()
{
    printf("친치로 미니게임 룰\n");
    printf("친치로는 3개의 주사위를 돌려 족보를 만들고, 족보가 더 높은 사람이 "
        "우승하는 게임입니다.\n");
    printf("플래이어는 시작전 베팅을 할수있으며, 베팅한 코인을 다음과 같이 "
        "얻거나 잃게 됩니다.\n\n");
    printf("졌을경우 : 상대방 족보에 따라 지불\n");
    printf("비겼을경우 : 얻거나 잃지 않음\n");
    printf("이겼을경우 : 플래이어 족보에 따라 지급\n\n");
    printf("게임의 족보는 다음과 같습니다.\n");
    printf("주사위에 숫자가 모두 1일경우 : 핀조로(ピンゾロ) - 배팅의 3배\n");
    printf("주사위에 숫자가 모두 같을경우 : 아라시(あらし) - 배팅의 2배\n");
    printf("주사위에 숫자가 4, 5, 6일경우 : 시고로(シゴロ) - 배팅의 2배\n");
    printf("주사위에 숫자가 1, 2, 3경우 : 히후미(ヒフミ) - 배팅의 2배\n");
    printf("주사위에 숫자중 2개가 같을경우 : 눈 있음(持ち目) - 배팅의 1배\n");
    printf(
        "위에 모든 경우에 해당하지 않는 경우 : 눈 없음(目なし) - 배팅의 1배\n\n");
    printf("족보가 같은경우 승패 처리\n");
    printf("둘다 아라시(あらし)일시 : 숫자가 높은사람이 이깁니다\n");
    printf(
        "둘다 눈 있음(持ち目)일시 : 같지 않은 한 숫자가 높은사람이 이깁니다\n");
    printf("둘다 눈 없음(目なし)일시 : 모든 숫자의 합이 같은사람이 이깁니다\n");
    printf("이 경우 이외는 (ex 둘다 핀조로) 무승부 처리됩니다.\n");
    printf("룰북을 닫을려면 엔터를 눌러주세요\n");
    getchar();
}

//족보, 승패 판별을 위한 코드 판별
int getCode(int i, int j, int k)
{
    if (i == j && j == k && j == 1)
        return 330;
    else if (i == j && j == k)
        return 230 + j;
    else if (i == j)
        return 120 + k;
    else if (j == k)
        return 120 + i;
    else if (i == 3 && j == 2 && k == 1)
        return 150;
    else if (i == 6 && j == 5 && k == 4)
        return 200;
    else
        return i + j + k;
}

//주사위 순서 내림차순으로 배열하기
int* sortDice(int* arr)
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (arr[i] > arr[j])
            {
                int save = arr[i];
                arr[i] = arr[j];
                arr[j] = save;
            }
    return arr;
}

//족보 출력, 배당 리턴 함수
int printGenealogy(int code)
{
    if (code == 330)
    {
        printf("핀조로(ピンゾロ)");
        return 3;
    }
    else if (231 < code && code < 237)
    {
        printf("아라시(あらし)");
        return 2;
    }
    else if (120 < code && code < 127)
    {
        printf("눈 있음(持ち目)");
        return 1;
    }
    else if (150 == code)
    {
        printf("히후미(ヒフミ)");
        return 2;
    }
    else if (200 == code)
    {
        printf("시고로(シゴロ)");
        return 2;
    }
    else
    {
        printf("눈 없음(目なし)");
        return 1;
    }
}

//주사위 굴리기
int rollDice(int a, int b, int c, int who, int where)
{
    int Dice[3] = { a, b, c };
    if (who == 1)
        for (int rep = 0; rep < rand() % 10 + 5; rep++)
        {
            Dice[where] = rand() % 6 + 1;
            system("cls");
        }
    if (who == 0)
        for (int rep = 0; rep < rand() % 10 + 25; rep++)
        {
            Dice[where] = rand() % 6 + 1;
            printf("플래이어 주사위 : %d %d %d\n", Dice[0], Dice[1], Dice[2]);
            Sleep(70);
            system("cls");
        }
    return Dice[where];
}


void chinchro()
{
    int beting = 0;
    int DelerDice[3] = { 0 };
    int playerDice[3] = { 0 };

start:
    system("cls");
    printf("코인 수 : %d\n", coin);
    printf("얼마나 배팅하시겠습니까?(룰북: -1) : ");
    scanf("%d", &beting);
    getchar();

    //입력 예외 처리
    if (beting == -1)
    {
        system("cls");
        showChinchroRule();
        goto start;
    }
    else if (beting < -1 || 0)
    {
        printf("양수를 입력해주세요\n");
        Sleep(1000);
        goto start;
    }
    else if (beting > coin)
    {
        printf("가진 코인보다 더 많이 걸수 없습니다\n");
        Sleep(1000);
        goto start;
    }
    printf("\n");

    //주사위 섞기
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
    {
        DelerDice[i] = rollDice(DelerDice[0], DelerDice[1], DelerDice[2], 1, i);
    }

    printf("딜러가 주사위를 섞는중입니다..\n");
    Sleep(3000);
    printf("딜러의 주사위가 결정되었습니다\n");
    printf("주사위를 돌리려면 엔터를 눌러주세요\n");
    getchar();

    for (int i = 0; i < 3; i++)
    {
        playerDice[i] =
            rollDice(playerDice[0], playerDice[1], playerDice[2], 0, i);
    }

    printf("플래이어 주사위 : ");
    for (int i = 0; i < 3; i++)
        printf("%d ", playerDice[i]);
    printf("\n");

    printf("계속할려면 엔터를 눌러주세요..\n");
    getchar();
    system("cls");

    //결과 출력
    printf("딜러 주사위 : ");
    for (int i = 0; i < 3; i++)
        printf("%d ", DelerDice[i]);
    printf("\n");
    printf("플래이어 주사위 : ");
    for (int i = 0; i < 3; i++)
        printf("%d ", playerDice[i]);
    printf("\n");

    //족보 판별
    sortDice(DelerDice);
    sortDice(playerDice);
    int delerCode = getCode(DelerDice[0], DelerDice[1], DelerDice[2]);
    int playerCode = getCode(playerDice[0], playerDice[1], playerDice[2]);

    printf("\n");
    printf("딜러 족보 : ");
    int delerMulti = printGenealogy(delerCode);
    printf("\n");
    printf("플래이어 족보 : ");
    int playerMulti = printGenealogy(playerCode);
    printf("\n");

    //승패 결정, 코인 처리
    printf("\n");
    if (delerCode > playerCode)
    {
        printf("졌습니다 배팅의 %d배인 %d가 소실됬습니다", delerMulti,
            beting * delerMulti);
        coin -= beting * delerMulti;
    }
    else if (delerCode == playerCode)
        printf("비겼습니다 원금이 지급됩니다");
    else
    {
        printf("이겼습니다 배팅의 %d배인 %d가 지급됬습니다", playerMulti,
            beting * playerMulti);
        coin += beting * playerMulti;
    }
    printf("\n");
    printf("계속할려면 엔터를 눌러주세요..\n");
    getchar();
    system("cls");
}


//야바위
void print_yaba(int n)
{

    //네모를 3줄로 출력하기 위해서
    for (int i = 1; i <= n * 3; i++)
    {
        printf("■■■■■\t");
        if (i % n == 0) printf("\n");
    }

    //야바위 번호를 지정해주기
    for (int i = 1; i <= n; i++)
    {
        printf("  %d\t", i);
    }
    printf("\n");
}
void printanswer(int n, int m)
{
    printf("정답은\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j != m) printf("■■■■■\t");
            else printf("□□□□□\t");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {//야바위 번호를 지정해주기
        printf("  %d\t", i);
    }
    printf("\n입니다\n");
}

int mix(int n)
{
    int random1;
    system("cls");
    for (int k = 1; k <= 15; k++)
    {
        random1 = rand() % n + 1;//렌덤으로 수 고르기
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j != random1) printf("■■■■■\t");
                else printf("□□□□□\t");
            }
            printf("\n");
        }
        Sleep(70);//잠시 보여주기 위해서
        system("cls");
    }
    if (n > 6) return random1;//마지막에 나온 답이 정답이게 만든다
}

int returnMoney(int n, int money)
{
    if (n <= 4) return ((money - n) * 2) + money;
    else if (4 < n && n < 9) return (money * 2 + n * 2) + money;
    else if (n >= 9) return ((money * 2 + n * 2) * 2) + money;
}

void yaba()
{
    srand(time(NULL));
    int level, random, answer;//난이도, 정답값, 정답 입력
    int money, again = 0; //걸 돈
    int success = 0, ifprint = 0;//성공을 했거나 다시했거나, 성공을 했으면 정답을 따로 출력하지 않는 역할
    int check = 0, againNum = 0;

    system("cls");

start:
    printf("coin : %d\n", coin);

    printf("야바위 난이도를 고르세요 : ");
    success = 0;

    scanf("%d", &level);

    //레벨이 너무 낮거나 높은경우 방지
    if (level <= 2 || level > 15)
    {
        printf("서비스 이용 범위가 아닙니다\n다시 고르세요\n");
        goto start;
    }

    random = mix(level);//야바위 섞고 답 정하기
    print_yaba(level);//야바위 시각화

bating:
    printf("coin : %d\n돈을 얼마나 거시겠습니까? : ", coin);
    scanf("%d", &money);

    if (money < 10)
    {
        printf("걸 돈의 최소단위는 10coin입니다\n");
        goto bating;
    }
    //지금 있는 돈보다 더 많은 돈을 걸었을 때
    if (money > coin)
    {
        printf("걸 돈이 없습니다\n다시 고르세요\n");
        goto bating;
    }

    //돈을 건 만큼 빼주기
    coin -= money;
    printf("정답을 고르세요\n");

    if (level <= 6) random = rand() % level + 1;

    getAnswer:
    ifprint = 0;//처음에 성공을 할지 말지 모르기때문에 0으로 표기한다

    scanf("%d", &answer);//정답 입력
    if (answer > level || answer < 0)
    {//야바위 개수에 벗어나는 수를 입력했을 때 다시 할 수 있는 기회를 주기
        printf("신중하게 고르시기 바랍니다\n");
        goto getAnswer;
    }
    if (answer == random)
    {
        printf("축하드립니다\n성공입니다\n");//성공했을 때 성공 출력
        coin += returnMoney(level, money);//난이도 만큼 성공했을 때의 보상을 높인다
        printf("얻은 코인 : %d\n", returnMoney(level, money) - money);//돈을 얼마나 땄는지 보여준다
        success = 1;//정답을 입력했으면 다시 하면 정답을 알고 있기 때문에 방지한다
        goto end;
    }
    else
    {
        printf("실패하셨습니다\n");//실패 했을 때 실패 출력
        printf("coin : %d\n", coin);
    }


re:
    //이미 한번 다시 했을 경우
    if (success == 1)
    {
        goto end;
    }
    else
    {
        printf("다시 시도하시겠습니까?\n아니오 : 1 or 정답 다시 고르기 : 2\n");
    }

    again = 0;
    //대답은 나중에 문자열로 입력받기
    scanf("%d", &again);

    if (again > 2 || again < 1)
    {
        printf("선택지중 한개를 선택해주세요\n");
        goto re;
    }
end:
    if (again == 2 && success != 1)
    {
        printf("보상과 코인이 줄어들겁니다\n정답을 입력해주세요\n");
        success = 1;//다시 했을 때 다시 했다고 표시를 한다
        coin -= money;//돈 깍기
        goto getAnswer;
    }
    else
    {
        if (ifprint != 1) printanswer(level, random);//정답 알려주기
        printf("최종 coin : %d\n", coin);
        printf("계속하실려면 엔터를 눌러 주세요..");
        getchar();
    }
    getchar();
}
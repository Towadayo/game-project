#include<stdio.h>
#include<conio.h>

int main(){
    char input;

    printf("ゲームスタート!\n");
    printf("プレイヤーの位置: 0\n");

    int position = 0;

    while (1) {
        input = _getch();

        if(input == 'a') {
            position--;
        } else if (input == 'd') {
            position++;
        } else if (input == 'q') {
            break;
        }

        printf("プレイヤーの位置:%d\n", position);
    }

    printf("ゲーム終了\n");
    return 0;
}
#include <stdio.h>

int main()
{
    int test;
    int x, y;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        scanf("%d %d", &x, &y);
        int mv_cnt = 0;
        int mv = 1;
        int length = y - x;
        while (length > 0)
        {
            if (length < mv)
                mv_cnt -= 1;
            length -= (mv * 2);
            mv_cnt += 2;
            if (length <= 0)
            {
                if (length == -(mv))
                    mv_cnt -= 1;
                break;
            }
            mv++;
        }
        printf("%d\n", mv_cnt);
    }
}

// 양쪽의 거리가 같으므로 이동해야하는 거리(y-x)에서 mv * 2만큼 빼고 남은 거리(length)로 체크
// 양쪽의 거리를 한 번에 이동함 -> 이동 횟수(mv_cnt) 2 증가
// 남은 거리가 0보다 클 경우, 반복해서 mv를 1씩 증가시켜서 뺌 / 남은 거리가 0보다 작거나 같으면 출력
// 남은 거리가 이동거리보다 적을 경우 이동 횟수(mv_cnt)에서 -1
// (양쪽의 이동을 한번에 하는데 남은 거리가 이동 거리보다 작으면 두 칸을 움직일 필요가 없이 한 칸만 움직이면 되기 때문)
// 남은 거리가 mv * (-1)과 같다면 mv_cnt을 -1 함
// (예를 들어, mv는 2인데 이동 후, 남은 거리가 -2일 경우, 한 번 덜 움직여도 됐기 때문이다.)
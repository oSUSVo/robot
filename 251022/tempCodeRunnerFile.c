    for (i = 0; i < N - 1; i++) {
        delta = speed[i] - speed[i - 1];
        if (delta >= 10) {
            printf("%d 번째 속도 : %d 급가속++\n", i, speed[i]);
        }
        else if (delta <= -10) {
            printf("%d 번째 속도 : %d 급제동++\n", i, speed[i]);
        }
    }
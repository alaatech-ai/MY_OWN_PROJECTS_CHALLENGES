#include<stdio.h>
#define N 3
struct time{
    int hr, min, sec;
};
struct runner{
    char name[100];
    struct time start_time;
    struct time stop_time;
};
int iscorrect(struct time t){
    if(t.hr < 0 || t.hr > 23 || t.min < 0 || t.min > 59 || t.sec < 0 || t.sec > 59){
        return 0;
    }
    return 1;
}

int comparetime(struct time t1, struct time t2){
    if(t1.hr  < t2.hr) 
     return -1;
    if(t1.hr  > t2.hr) 
     return 1;
    if(t1.min < t2.min) 
     return -1;
    if(t1.min > t2.min)
     return 1;
    if(t1.sec < t2.sec) 
     return -1;
    if(t1.sec > t2.sec) 
     return 1;

    return 0;
}

struct time *calculatetime(struct time start, struct time stop, struct time *diff){
    diff->hr  = stop.hr  - start.hr;
    diff->min = stop.min - start.min;
    diff->sec = stop.sec - start.sec;
    if(diff->sec < 0){
        diff->sec += 60;
        diff->min -= 1;
    }
    if(diff->min < 0){
        diff->min += 60;
        diff->hr  -= 1;
    }
    if(diff->hr < 0){
        diff->hr = diff->min = diff->sec = -1;
    }
    return diff;
}
int main(){

    struct runner r[N];
    struct time d[N];
    int best = -1, i;

    for (i = 0; i < N; i++) {
        printf("runner %d name:\n", i + 1);
        scanf("%s", r[i].name);
        printf("start time (hr min sec):\n ");
        scanf("%d %d %d", &r[i].start_time.hr, &r[i].start_time.min, &r[i].start_time.sec);
        printf("stop time (hr min sec): ");
        scanf("%d %d %d", &r[i].stop_time.hr, &r[i].stop_time.min, &r[i].stop_time.sec);

        if (!iscorrect(r[i].start_time) || !iscorrect(r[i].stop_time)) {
            printf("invalid time!\n");
            d[i].hr = d[i].min = d[i].sec = -1;
            continue;
        }

        calculatetime(r[i].start_time, r[i].stop_time, &d[i]);

        if (d[i].hr == -1) {
            printf("start is after stop!\n");
        } 
        else {
            printf("%d:%d:%d\n", d[i].hr, d[i].min, d[i].sec);
            if (best == -1 || comparetime(d[i], d[best]) == -1)
                best = i;
        }
    }

    if (best == -1){
        printf("no valid runner\n");}
    else{
        printf("best: %s with %d:%d:%d\n", r[best].name, d[best].hr, d[best].min, d[best].sec);}


    return 0;
}
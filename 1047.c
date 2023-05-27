 #include <stdio.h>

 main()
 {
     int shour, sminute, fhour, fminute, count;
     scanf("%d %d %d %d",&shour, &sminute, &fhour, &fminute);
     count = (fhour*60 + fminute) - (shour*60 + sminute);
     if(count<=0) count += 24*60;
     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", count/60, count%60);
     return 0;
 }

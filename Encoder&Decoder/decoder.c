#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char word[];
char word1[] = "Jxint's";
char word2[] = "Coder";

int main()
{

    /*
    Verze 1.01:
     - Pridal jsem heslo, ktere je ovlivneno casem, neboli je to random, potrebujes klic ke spravnemu reseni.
        Prolomit heslo slo jednudochym do-while cyklem, ale nez by to projelo vsechny moznosti, asi by to chvilku trvalo.
        Takze jsem to jeste opatril casovym "kouzlem" xdd.
     - Oproti verzi 1.00 je tato možnost tezsi prolomit z duvodu nahodnosti, ale je tu take problem s tim,
        ze kod ma omezenou nahodnost (císlo 255, ktere je v encoder.c), kterou muzu zvysit, ale pravdepodobnost
        chyb v kodu bude vyssi.
     = Dale oproti verzi 1.00 je pridano napsat 15 pismen, prvni slovo muze mit velky pismeno, dalsi vec je ta,
        ze dalsi slova musi byt dohromady a mali pismena bez hacku.
    
    Verze 1.00:
     - Chyby se spravnym resenim.
     - Take jednouduche prolomeni kodu.
     - Delsi slova nez 5 pismen nejde.


     Rada:
     1) Muzete zvysit ci snizit nahodnost | n = rand() % 255; | , staci zmenit cislo 255, ale radeji nemente, max. 1500.
     2) Prectete si Update 1.01, nebo aspon to co ma misto pomlcky (-) rovnitko (=), zjistite co muzete a co ne.
     3) ...

     Follow Me:
      - Instagram == https://www.instagram.com/_m_i_r_a_1_9_8_/
      - Twitter == https://twitter.com/Jxint1/
    */



    system("cls");

    int n = 0, m = 0, k = 0, i = 0, j = 0, l = 0, p = 0, q = 0, r = 0, o = 0;

    printf("Nejprve zadejte heslo: ");
    scanf("%d", &n);

    m = n + 12;
    k = m - 6;
    i = m * k / 3;
    j = i % 10;
    l = m * i / j % 10;
    p = l - k;
    q = p / m * 14;
    o = n + l;
    r = o / 8;

    printf("Zadejte sem prvnich 10 znaku, co mam odsifrovat: ");
    scanf("%s", &word);

        word[0] = word[0] + n;
        word[1] += m;
        word[2] += k;
        word[3] += i;
        word[4] += j;
        word[5] += l;
        word[6] += p;
        word[7] += q;
        word[8] += o;
        word[9] += r;
        word[10] += m;
        word[11] += p;
        word[12] += i;
        word[13] += j;
        word[14] += r;


    printf("\nOdsifrovano: %s - %s %s\n\n\n", word, word1, word2);

    printf("\n\n\n\nAllrights reserved (copyright and trademark)\n");


    getch();
    return 0;
}

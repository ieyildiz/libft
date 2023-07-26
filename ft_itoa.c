#include "libft.h"

char *ft_itoa(int n)
{
    
    /*
    n integer değerini string değerine döndürür. Örneğin 1234 int değeri olsun.
    */
    char *str;//oluşturacağımız karakter dizesi
    int  sign;//işaret
    size_t basamak;//basamak

    if (n==0) // girilen n değeri 0 ise
    {
        str = (char *)malloc(2); // malloc ile 2 index'li bir yer ayırtırız.
        str[0] = '0';
        str[1] = '\0';
    }
    if (n < 0) // n değeri negatif bir sayı ise
    {
        sign = -1; // işaret negatif olur.
        n = -n; // int n değerimizde negatif olur.
        basamak = 1; // negatif işaretin kaplayacağı index göz'e alınarak
    }
    else // n değeri pozitif bir sayı ise
    {
         sign = 0;
         basamak = 0;
    }
    
    int sayi = n; // n integer değerini geçici bir sayi değerine atadık
    while(sayi > 0) // sayımız pozitif ise, basamak değerini öğrenelim
    {
        sayi /= 10; //1234/10(1)->123/10(2)->12/10(3)->1/10(4)
        basamak++; // 1, 2, 3, 4 ....
    }

    str = (char*)malloc(basamak+1); // n = 1234 ise str 4+null uzunlukta olacak şekilde yer ayırdık.
    
    if (!str) // str null ise
    {
        return (NULL);
    }

    str[basamak] = '\0'; // en son null olsun, str[4] = ""....(4)" 

    while(basamak > 0) // basamak = 4
    {
        str[--basamak] = (char)(n % 10) + '0';//(n 10 ile bölümünden kalan ascii tablsouna göre) 4 + 48 = 4,3,2,1 Tamsayılar, bilgisayar belleğinde ikili (binary) olarak temsil edilir, ancak ekranda veya karakter dizilerinde göstermek için bunları karakterlere dönüştürmemiz gerekir.
        n /=10; // n integer 10 ile bölümü: 1234/10= 123, 123/10=12, 12/10=1
    }

    if (sign == -1)
    {
        str[0] = '-';
    }

    return(str);
}
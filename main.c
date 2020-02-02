//ex00 succas
//#include <stdio.h>
//void ft_putchar(char c)
//{
//    write(1, &c, 1);
//}
//
//
//void    ft_putstr(char *str)
//{
//      while (*str != 0)
//          ft_putchar(*str++);
//}
//
//int main(){
//    ft_putstr("TEST");
//    ft_putstr("\n");
//  return (0);
//}

//ex01 succas
// #include <unistd.h>
// void   ft_putchar(char c)
// {
//   write(1 , &c, 1);
// }
// void   ft_putnbr(int nb)
// {
//     if (nb < 0)
//     {
//         ft_putchar('-');
//         if (nb <= -10)
//             ft_putnbr(nb / -10);
//         ft_putchar(-(nb % 10) + '0');
//     }
//     else if (nb >= 10)
//     {
//         ft_putnbr(nb / 10);
//         ft_putchar((nb % 10) + '0');
//     }
//     else
//         ft_putchar(nb + '0');
// }
//
// int main()
// {
//   ft_putnbr(-2147483648);
//   return (0);
// }


//ex01 test
//#include <unistd.h>
//void ft_putchar(char c)
//{
//  write(1 , &c, 1);
//}
//void    ft_putstr(int str)
//{
//    while (str)
//    {
//        ft_putchar(str);
//        str++;
//    }
//}
//int main()
//{
//    int n=42;
//
//    ft_putnbr(n);
//  return (0);
//}

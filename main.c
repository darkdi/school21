iz dev
//#include <stdio.h>
//
//int        nmatch(char *s1, char *s2)
//{
//    if (*s1 == '\0' && *s2 == '\0')
//        return (1);
//    else if (*s2 == '*')
//    {
//        if (*s1 == '\0')
//            return (nmatch(s1, s2 + 1));
//        else
//            return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
//    }
//    else if (*s2 == *s1)
//        return (nmatch(s1 + 1, s2 + 1));
//    else
//        return (0);
//}
//NOOOOR
//int    match(char *s1, char *s2)
//{
//  if (*s1 != '\0' && *s2 == '*')
//    return (match(s1 + 1, s2) || match(s1, s2 + 1));
//  if (*s1 == '\0' && *s2 == '*')
//    return (match(s1, s2 + 1));
//  if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
//    return (match(s1 + 1, s2 + 1));
//  if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
//    return (1);
//  return (0);
//}
//
//int    nmatch(char *s1, char *s2)
//{
//  if (*s1 != '\0' && *s2 == '*')
//    return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
//  if (*s1 == '\0' && *s2 == '*')
//    return (nmatch(s1, s2 + 1));
//  if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
//    return (nmatch(s1 + 1, s2 + 1));
//  if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
//    return (1);
//  return (0);
//}

//NOOOOR2
//int    nmatch(char *s1, char *s2)
//{
//  if (*s1 != '\0' && *s2 == '*')
//    return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
//  else if (*s1 == '\0' && *s2 == '*')
//    return (nmatch(s1, s2 + 1));
//  else if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
//    return (nmatch(s1 + 1, s2 + 1));
//  else if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
//    return (1);
//  return (0);
//}
int    nmatch(char *s1, char *s2)
{
  if (*s1 && *s2 == '*')
    return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
  else if (*s1 && *s2 && *s1 == *s2)
    return (nmatch(s1 + 1, s2 + 1));
  else if (!(*s1) && *s2 == '*')
    return (nmatch(s1, s2 + 1));
  else if (!(*s1) && !(*s2))
    return (1);
  return (0);
}


//int    nmatch(char *s1, char *s2)
//{
//    if (*s1 == '\0' && *s2 == '*')
//        return (nmatch(s1, s2 + 1));
//    if (*s1 != '\0' && *s2 == '*')
//        return ((nmatch(s1 + 1, s2)) + (nmatch(s1, s2 + 1)));
//    if (*s1 == *s2 && *s2 != '\0')
//        return (nmatch(s1 + 1, s2 + 1));
//    if (*s1 == '\0' && *s2 == '\0')
//        return (1);
//    return (0);
//}
iz dev

//
//int        nmatch(char *s1, char *s2)
//{
//    if (!*s1 && !*s2)
//        return (1);
//    else if (*s2 == '*')
//    {
//        if (!*s1)
//            return (nmatch(s1, s2 + 1));
//        else
//            return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
//    }
//    else if (*s1 == *s2)
//        return (nmatch(s1 + 1, s2 + 1));
//    else
//        return (0);
//}

int        main(void)
{
    printf("%i\n", nmatch("test", "test"));
    printf("%i\n", nmatch("abcbd", "*4*"));
    printf("%i\n", nmatch("abc", "a**"));
}

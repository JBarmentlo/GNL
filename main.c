#include "dlist.h"
#include "unistd.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/*
static void    ft_putnstr(char const *str, size_t size)
{
    size_t i = 0;

    while (str && *str && i < size)
    {
        write(1, str++, 1);
        i++;
    }
}
*/
int     main(void)
{
    int     fd;
    int     fd2;
    char    *line;
   // char    buff[20];

    line = NULL;
    fd = open("text", O_RDONLY);
    fd2 = open("text2", O_RDONLY);
    /*
    buff[7] = 'A';
    read(fd, buff, 8);
    ft_putnstr(buff, 10);
    */
    while (get_next_line(fd2, &line))
    {
        printf("1 : %s\n", line);
        get_next_line(fd, &line);
        printf("2 : %s\n", line);
    }
     
    return (1);
}

/*
int     main(void)
{
    t_dlist *first;
    t_dlist *one;
    t_dlist *two;
    t_dlist *three;
    t_dlist *it;

    first = NULL;
    one = new_dlist();
    two = new_dlist();
    three =new_dlist();

    printf("init\n");
    one->str = "one\n";
    two->str = "two\n";
    three->str = "three\n";

    printf("str\n");
    pushback_dlist(&first, one);
    pushback_dlist(&first, two);
    pushback_dlist(&first, three);
    printf("haha\n");


    printf("%s",(first)->str);
    it = first;
    it = it->next;
    it = it->next;
printf("oy\n");
    pop_dlist(&it, &first);
    printf("oy\n");
    while (first)
    {
        printf("%s",(first)->str);
        first = (first)->next;
    }

    return (1);
}
*/

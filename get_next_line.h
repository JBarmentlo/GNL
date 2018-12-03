#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 8

typedef struct  s_id{
    int                 fd;
    char                *str;
}               t_id;

int get_next_line(int fd, char **out);

#endif

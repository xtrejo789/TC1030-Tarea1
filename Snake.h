#ifndef SNAKE_H
#define SNAKE_H


class Snake{
    public:
        Snake(int head, int tail);
        int getHead();
        int getTail();

    private:
        int head;
        int tail;
};

#endif // SNAKE_H

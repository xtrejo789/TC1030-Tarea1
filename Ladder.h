#ifndef LADDER_H
#define LADDER_H


class Ladder{
    public:
        Ladder(int beginning, int thend);
        int getBeginning();
        int getThend();

    private:
        int beginning;
        int thend;
};

#endif // LADDER_H

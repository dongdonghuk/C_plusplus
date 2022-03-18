const int OPEN = 1;
const int CLOSE = 2;

#ifndef _DOOR_H_
#define _DOOR_H_

class Door
{
private:
    int state;

public:

    Door() {}

    inline void Open();
    void Close();
    void ShowState();
};

//inline �Լ� ����, ������Ͽ� �ξ���Ѵ�
inline void Door::Open()
{
    state = OPEN;
}
#endif
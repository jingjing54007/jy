//ROM dating

inherit ROOM;

void create()
{
        set("short", "����");
        set("long",
             "���ǡ�������̡��µ�һ����:�����õĴ�������Ŀ��ȥ,�����ص�,\n"
         "��������һ������(vote).\n"
        );
	
        set("exits", ([
                "south" : __DIR__"grass2",
                "northdown" : __DIR__"linjxd5",
        ]));
 
        set("objects",([
		               __DIR__"npc/jiaotu" : 2,
        ]));
        set("item_desc", ([
        "vote": "�������,�ĳ����,�󱻲�����\n"
	]) );
        setup();

        
        replace_program(ROOM);
}
static char keyboard_set[]={' ',' ','1','2','3','4','5','6','7','8',
'9','0','-','=',0x0e,' ','q','w','e','r',
't','y','u','i','o','p','[',']','\n',' ',
'a','s','d','f','g','H','j','k','l',';',
'\'','`',0,'\\','z','x','c','v','b','n',
'm',',','.','/',' ',' ',' ',' ',0,' '};
static char keyboard_set_shift[]={' ',' ','!','@','#','$','%','^','&','*',
'(',')','_','+',' ',' ','Q','W','E','R',
'T','Y','U','I','O','P','{','}','\n',' ',
'A','S','D','F','G','H','J','K','L',';',
'"','`',0,'|','Z','X','C','V','B','N',
'M','<','>','?',' ',' ',' ',' ',0,' '};

void input(char*);//输入字符串
char inputchar();//单字符输入
char inputcode();//获取一个输入按键的键码
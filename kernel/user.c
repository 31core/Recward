#include <kernel/user.h>
#include <kernel/string.h>

struct user users[100];

void user_init(void)
{
	str_cpy(users[0].name, "root");
	users[0].uid = 0;

	for(int i = 1; i < 100; i++)
	{
		users[i].name[0] = '\0';
		users[i].uid = -1;
	}
}
/* 注册用户 */
int user_register(char *name, int uid)
{
	for(int i = 0; i < 100; i++)
	{
		/* 用户已经存在 */
		if(!str_cmp(users[uid].name, name))
		{
			return -1;
		}
	}
	if(users[uid].uid != -1)
	{
		return -1;
	}
	str_cpy(users[uid].name, name);
	users[uid].uid = uid;
	return 0;
}
/* 获取用户名 */
int user_get_name(char *ret, int uid)
{
	if(users[uid].uid == -1)
	{
		return -1;
	}
	str_cpy(ret, users[uid].name);
	return 0;
}
/* 获取用户UID */
int user_get_uid(char *name)
{
	for(int uid = 0; uid < 100; uid++)
	{
		if(!str_cmp(users[uid].name, name))
		{
			return users[uid].uid;
		}
	}
	return -1;
}
### 1.简介
保护模式(Protect Mode)下可以访问4GB的内存,并且CPU会对可疑指令进行屏蔽.

### 2.切换到保护模式
* 加载GDTR寄存器.
* 启用A20
* cr0寄存器的PE为置1
* far jump以刷新管道
#### 2.1 启用A20
只需将```0x92端口```的第1位置1即可.
#### 2.2 cr0寄存器的PE为置1
cr0寄存器不能直接赋值,所以先将cr0的值移到通用寄存器中,在将第0位(PE位)置1即可.
global LoadGDTR,LoadIDTR
global LoadTR
global io_out8,io_in8
global io_out16,io_in16
global io_cli,io_sti

[bits 32]
;加载GDRT寄存器
LoadGDTR:
	mov ax,[esp+4]
	mov [esp+6],ax
	lgdt [esp+6]
	ret
;加载IDRT寄存器
LoadIDTR:
	mov ax,[esp+4]
	mov [esp+6],ax
	lidt [esp+6]
	ret
LoadTR:
	ltr [esp+4]
	ret
;写8位端口
io_out8:
	mov dx,[esp+4];端口
	mov al,[esp+8];8位数据
	out dx,al
	ret
;读8位端口
io_in8:
	mov dx,[esp+4];端口
	in al,dx
	ret
;写16位端口
io_out16:
	mov dx,[esp+4];端口
	mov ax,[esp+8];16位数据
	out dx,ax
	ret
;读16位端口
io_in16:
	mov dx,[esp+4];端口
	in ax,dx
	ret
;禁用中断
io_cli:
	cli
	ret
;启用中断
io_sti:
	sti
	ret

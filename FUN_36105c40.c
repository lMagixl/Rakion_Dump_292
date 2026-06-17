
undefined4 * __thiscall
FUN_36105c40(void *this,int *param_1,ushort *param_2,undefined4 *param_3,undefined1 *param_4,
            CNetMessage *param_5,undefined4 *param_6,undefined2 *param_7,undefined4 *param_8)

{
  DWORD DVar1;
  ushort uVar2;
  
  *(undefined4 *)this = *param_8;
  *(undefined4 *)((int)this + 4) = param_8[1];
  uVar2 = *param_2;
  if (*param_1 != 0) {
    uVar2 = uVar2 | 0x8000;
  }
  *(ushort *)((int)this + 8) = uVar2;
  *(undefined4 *)((int)this + 10) = *param_3;
  *(undefined1 *)((int)this + 0xe) = *param_4;
  *(int *)((int)this + 0x3fc) = *param_1;
  uVar2 = CNetMessage::Read(param_5,(void *)((int)this + 0xf),1000);
  *(ushort *)((int)this + 0x3f8) = uVar2 + 0xf;
  *(undefined4 *)((int)this + 0x400) = *param_6;
  *(undefined2 *)((int)this + 0x404) = *param_7;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x408) = 0;
  DVar1 = timeGetTime();
  *(DWORD *)((int)this + 0x410) = DVar1 + 1000;
  return this;
}



void __cdecl FUN_36071820(uint *param_1,int param_2,int param_3)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint local_8;
  byte local_4;
  
  iVar3 = 0;
  do {
    uVar1 = *(ushort *)(param_2 + iVar3 * 2);
    *(undefined1 *)((int)param_1 + 3) = 0;
    bVar2 = (byte)uVar1 & 0xf;
    local_8 = (uint)(byte)(bVar2 | bVar2 << 4) << 0x18;
    local_4 = (byte)(uVar1 >> 4);
    *param_1 = *param_1 | local_8;
    *(undefined1 *)((int)param_1 + 7) = 0;
    local_8 = (uint)(byte)(local_4 & 0xf | (local_4 & 0xf) << 4) << 0x18;
    local_4 = (byte)(uVar1 >> 8);
    param_1[1] = param_1[1] | local_8;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    local_8 = (uint)(byte)(local_4 & 0xf | (local_4 & 0xf) << 4) << 0x18;
    param_1[2] = param_1[2] | local_8;
    *(undefined1 *)((int)param_1 + 0xf) = 0;
    local_8 = (uint)(byte)(local_4 >> 4 | (local_4 >> 4) << 4) << 0x18;
    param_1[3] = param_1[3] | local_8;
    param_1 = param_1 + param_3;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}


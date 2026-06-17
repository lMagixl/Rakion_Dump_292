
undefined1 * __cdecl
FUN_360715c0(uint *param_1,byte *param_2,byte *param_3,undefined1 *param_4,undefined1 *param_5)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  
  param_2[3] = 0xff;
  bVar3 = (byte)(*param_1 >> 0xb) & 0x1f;
  *param_2 = bVar3 >> 2 | bVar3 << 3;
  bVar3 = (byte)(*param_1 >> 5) & 0x3f;
  param_2[1] = bVar3 >> 4 | bVar3 << 2;
  bVar3 = (byte)*param_1 & 0x1f;
  param_2[2] = bVar3 >> 2 | bVar3 << 3;
  param_3[3] = 0xff;
  bVar3 = (byte)(*(uint *)((int)param_1 + 2) >> 0xb) & 0x1f;
  *param_3 = bVar3 >> 2 | bVar3 << 3;
  bVar3 = (byte)(*(uint *)((int)param_1 + 2) >> 5) & 0x3f;
  param_3[1] = bVar3 >> 4 | bVar3 << 2;
  bVar3 = *(byte *)((int)param_1 + 2) & 0x1f;
  param_3[2] = bVar3 >> 2 | bVar3 << 3;
  if (*(ushort *)((int)param_1 + 2) < (ushort)*param_1) {
    *param_4 = (char)((ulonglong)((longlong)(int)((uint)*param_3 + (uint)*param_2 * 2) * 0x55555556)
                     >> 0x20);
    param_4[1] = (char)((ulonglong)
                        ((longlong)(int)((uint)param_3[1] + (uint)param_2[1] * 2) * 0x55555556) >>
                       0x20);
    param_4[2] = (char)((ulonglong)
                        ((longlong)(int)((uint)param_3[2] + (uint)param_2[2] * 2) * 0x55555556) >>
                       0x20);
    param_4[3] = 0xff;
    *param_5 = (char)((ulonglong)((longlong)(int)((uint)*param_2 + (uint)*param_3 * 2) * 0x55555556)
                     >> 0x20);
    param_5[1] = (char)((ulonglong)
                        ((longlong)(int)((uint)param_2[1] + (uint)param_3[1] * 2) * 0x55555556) >>
                       0x20);
    lVar2 = (longlong)(int)((uint)param_2[2] + (uint)param_3[2] * 2) * 0x55555556;
    param_5[3] = 0xff;
    param_5[2] = (char)((ulonglong)lVar2 >> 0x20);
    return (undefined1 *)lVar2;
  }
  *param_4 = (char)(((uint)*param_2 + (uint)*param_3) / 2);
  param_4[1] = (char)(((uint)param_2[1] + (uint)param_3[1]) / 2);
  bVar3 = param_2[2];
  bVar1 = param_3[2];
  param_4[3] = 0xff;
  param_4[2] = (char)(((uint)bVar3 + (uint)bVar1) / 2);
  param_5[1] = 0xff;
  param_5[2] = 0xff;
  *param_5 = 0;
  param_5[3] = 0;
  return param_5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36071910(uint *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  uint uVar6;
  
  bVar1 = *param_2;
  _DAT_362c3ae8 = (ushort)bVar1;
  uVar6 = (uint)param_2[1];
  _DAT_362c3aea = (ushort)param_2[1];
  uVar3 = (uint)(ushort)bVar1;
  if (_DAT_362c3ae8 < _DAT_362c3aea || bVar1 == _DAT_362c3aea) {
    _DAT_362c3aec = (undefined2)((uVar6 + 2 + uVar3 * 4) / 5);
    _DAT_362c3aee = (undefined2)((uVar3 * 3 + 2 + uVar6 * 2) / 5);
    _DAT_362c3af0 = (undefined2)((uVar6 * 3 + 2 + uVar3 * 2) / 5);
    _DAT_362c3af2 = (undefined2)((uVar3 + 2 + uVar6 * 4) / 5);
    _DAT_362c3af4 = 0;
    _DAT_362c3af6 = 0xff;
  }
  else {
    _DAT_362c3aec = (undefined2)((uVar6 + 3 + uVar3 * 6) / 7);
    _DAT_362c3aee = (undefined2)((uVar3 * 5 + 3 + uVar6 * 2) / 7);
    _DAT_362c3af0 = (undefined2)((uVar6 * 3 + 3 + uVar3 * 4) / 7);
    _DAT_362c3af2 = (undefined2)((uVar3 * 3 + 3 + uVar6 * 4) / 7);
    _DAT_362c3af4 = (undefined2)((uVar6 * 5 + 3 + uVar3 * 2) / 7);
    _DAT_362c3af6 = (undefined2)((uVar3 + 3 + uVar6 * 6) / 7);
  }
  uVar3 = *(uint *)(param_2 + 2);
  DAT_362c3ad8 = (byte)uVar3 & 7;
  DAT_362c3ad9 = (byte)(uVar3 >> 3) & 7;
  DAT_362c3ada = (byte)(uVar3 >> 6) & 7;
  DAT_362c3adb = (byte)(uVar3 >> 9) & 7;
  DAT_362c3adc = (byte)(uVar3 >> 0xc) & 7;
  DAT_362c3add = (byte)(uVar3 >> 0xf) & 7;
  DAT_362c3adf = (byte)(uVar3 >> 0x15) & 7;
  DAT_362c3ade = (byte)(uVar3 >> 0x12) & 7;
  uVar3 = *(uint *)(param_2 + 5);
  DAT_362c3ae0 = (byte)uVar3 & 7;
  DAT_362c3ae1 = (byte)(uVar3 >> 3) & 7;
  DAT_362c3ae2 = (byte)(uVar3 >> 6) & 7;
  DAT_362c3ae3 = (byte)(uVar3 >> 9) & 7;
  DAT_362c3ae4 = (byte)(uVar3 >> 0xc) & 7;
  DAT_362c3ae6 = (byte)(uVar3 >> 0x12) & 7;
  DAT_362c3ae5 = (byte)(uVar3 >> 0xf) & 7;
  DAT_362c3ae7 = (byte)(uVar3 >> 0x15) & 7;
  pbVar4 = &DAT_362c3ad9;
  puVar2 = (undefined1 *)((int)&DAT_362c3a9c + 3);
  do {
    puVar2[-4] = (&DAT_362c3ae8)[(uint)pbVar4[-1] * 2];
    *puVar2 = (&DAT_362c3ae8)[(uint)*pbVar4 * 2];
    puVar2[4] = (&DAT_362c3ae8)[(uint)pbVar4[1] * 2];
    puVar2[8] = (&DAT_362c3ae8)[(uint)pbVar4[2] * 2];
    puVar2 = puVar2 + 0x10;
    pbVar4 = pbVar4 + 4;
  } while ((int)puVar2 < 0x362c3adf);
  puVar5 = &DAT_362c3a9c;
  do {
    *(undefined1 *)((int)param_1 + 3) = 0;
    *param_1 = *param_1 | puVar5[-1];
    *(undefined1 *)((int)param_1 + 7) = 0;
    param_1[1] = param_1[1] | *puVar5;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    param_1[2] = param_1[2] | puVar5[1];
    *(undefined1 *)((int)param_1 + 0xf) = 0;
    param_1[3] = param_1[3] | puVar5[2];
    puVar5 = puVar5 + 4;
    param_1 = param_1 + param_3;
  } while ((int)puVar5 < 0x362c3adc);
  return;
}


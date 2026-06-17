
void __cdecl
FUN_36075e00(uint param_1,uint param_2,byte param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar2 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  uVar5 = (1 << ((char)iVar2 + (char)iVar1 & 0x1fU)) - 1;
  if (iVar2 < iVar1) {
    uVar3 = (1 << ((char)iVar2 * '\x02' & 0x1fU)) - 1;
    uVar4 = ~uVar3 | 0x55555555;
    uVar3 = uVar3 & 0xaaaaaaaa;
  }
  else {
    uVar3 = (1 << ((char)iVar1 * '\x02' & 0x1fU)) - 1;
    uVar4 = uVar3 & 0x55555555;
    uVar3 = ~uVar3 | 0xaaaaaaaa;
  }
  *param_4 = uVar4;
  *param_5 = uVar3;
  *param_4 = *param_4 & uVar5;
  *param_5 = *param_5 & uVar5;
  *param_6 = *param_4 & 0xfffffff0;
  *param_7 = *param_5 & 0xfffffff8;
  *param_4 = *param_4 << (param_3 & 0x1f);
  *param_5 = *param_5 << (param_3 & 0x1f);
  *param_6 = *param_6 << (param_3 & 0x1f);
  *param_7 = *param_7 << (param_3 & 0x1f);
  return;
}


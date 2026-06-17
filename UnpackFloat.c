
/* float __cdecl UnpackFloat(unsigned char,unsigned char,unsigned char,unsigned long) */

float __cdecl UnpackFloat(uchar param_1,uchar param_2,uchar param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
                    /* 0xfe270  3886  ?UnpackFloat@@YAMEEEK@Z */
  uVar3 = (1 << (param_2 & 0x1f)) - 1;
  uVar4 = uVar3 & param_4;
  uVar1 = (1 << (param_1 & 0x1f)) - 1U & param_4 >> (param_2 & 0x1f);
  uVar5 = param_4 >> (param_1 + param_2 & 0x1f);
  if (uVar1 == 0) {
    if (uVar4 == 0) {
      return (float)(uVar5 << 0x1f);
    }
    iVar2 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    param_1 = (uchar)iVar2;
    iVar2 = -(int)(char)(param_2 - param_1);
    uVar4 = uVar4 << (param_2 - param_1 & 0x1f) & uVar3;
  }
  else {
    iVar2 = uVar1 - param_3;
  }
  return (float)((iVar2 + 0x7f) * 0x800000 | uVar5 << 0x1f | uVar4 << (0x17 - param_2 & 0x1f));
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: unsigned char * __thiscall CTextureData::Compress(long &,int) */

uchar * __thiscall CTextureData::Compress(CTextureData *this,long *param_1,int param_2)

{
  float *pfVar1;
  uint *puVar2;
  int iVar3;
  short sVar4;
  float *pfVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int local_3c;
  undefined1 local_38;
  undefined2 local_36;
  undefined2 local_32;
  undefined2 local_c;
  short local_a;
  undefined4 local_4;
  
                    /* 0x93cb0  1355  ?Compress@CTextureData@@QAEPAEAAJH@Z */
  local_4 = DAT_362abd90;
  pfVar1 = (float *)(*(int *)(this + 0x20) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f));
  pfVar5 = (float *)(*(int *)(this + 0x24) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f));
  if ((3 < (int)pfVar1) && (3 < (int)pfVar5)) {
    sVar4 = 10;
    if ((*(uint *)(this + 0x1c) & 8) == 0) {
      if ((*(uint *)(this + 0x1c) & 1) != 0) {
        sVar4 = (param_2 != 0) + 0xc;
      }
    }
    else {
      sVar4 = 0xb;
    }
    piVar7 = &local_3c;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    local_38 = 0;
    local_32 = 0x85;
    local_36 = 0x1e;
    local_c = 0x50;
    local_a = sVar4;
    DAT_362c9b24 = AllocMemory(*(int *)(this + 0x30) * *(int *)(this + 0x34));
    iVar3 = 0;
    DAT_362c9b20 = 0;
    puVar2 = AllocMemory(*(long *)(this + 0x30));
    uVar6 = (int)(*(int *)(this + 0x30) + (*(int *)(this + 0x30) >> 0x1f & 3U)) >> 2;
    if (0 < *(int *)(this + 0x34)) {
      iVar8 = 0;
      do {
        FUN_36062d20((uint *)(*(int *)(this + 0x60) + iVar8),puVar2,uVar6);
        FUN_361fc350(puVar2,pfVar1,pfVar5,(int)pfVar1 << 2,&local_3c,4,&LAB_36093c60);
        iVar8 = iVar8 + uVar6 * 4;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 0x34));
    }
    iVar3 = DAT_362c9b20;
    iVar8 = DAT_362c9b20 / *(int *)(this + 0x34);
    *param_1 = iVar8;
    if (iVar8 == 0) {
      FreeMemory(DAT_362c9b24);
      DAT_362c9b24 = (uchar *)0x0;
    }
    else {
      ShrinkMemory(&DAT_362c9b24,iVar3);
    }
    FreeMemory(puVar2);
    return DAT_362c9b24;
  }
  return (uchar *)0x0;
}


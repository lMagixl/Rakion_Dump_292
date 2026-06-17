
/* public: void __thiscall CDrawPort::DrawTexture(class CTextureObject
   *,long,long,long,long,unsigned long) */

void __thiscall
CDrawPort::DrawTexture
          (CDrawPort *this,CTextureObject *param_1,long param_2,long param_3,long param_4,
          long param_5,ulong param_6)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0x68eb0  1534  ?DrawTexture@CDrawPort@@QAEXPAVCTextureObject@@JJJJK@Z */
  if (param_1 != (CTextureObject *)0x0) {
    iVar1 = *(int *)(param_1 + 0x14);
    bVar2 = (byte)*(undefined4 *)(iVar1 + 0x28);
    iVar3 = (*(int *)(iVar1 + 0x20) >> (bVar2 & 0x1f)) + param_2;
    local_4 = (*(int *)(iVar1 + 0x24) >> (bVar2 & 0x1f)) + param_3;
    local_8 = param_2;
    local_10 = iVar3;
    if ((param_2 <= iVar3) && (local_10 = param_2, param_2 < iVar3)) {
      local_8 = iVar3;
    }
    local_c = local_4;
    if ((local_4 < param_3) || (local_c = param_3, local_4 <= param_3)) {
      local_4 = param_3;
    }
    PutTexture(this,param_1,(AABBox<long,2> *)&local_10,param_6,0xcb);
  }
  return;
}


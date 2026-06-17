
/* public: long __thiscall CTextureData::ClampMipLevel(float)const  */

long __thiscall CTextureData::ClampMipLevel(CTextureData *this,float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  ulonglong uVar6;
  
                    /* 0x946a0  1197  ?ClampMipLevel@CTextureData@@QBEJM@Z */
  uVar6 = FUN_361bfd6c();
  iVar3 = (int)uVar6;
  param_1 = (float)(*(int *)(this + 0x24) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f));
  fVar5 = (float)(*(int *)(this + 0x20) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f));
  if ((int)fVar5 <= (int)param_1) {
    param_1 = fVar5;
  }
  iVar2 = 0x1f;
  if (param_1 != 0.0) {
    for (; (uint)param_1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 <= iVar3) {
    iVar4 = iVar2 + iVar1;
    if (iVar3 <= iVar2 + iVar1) {
      iVar4 = iVar3;
    }
    return iVar4;
  }
  return iVar1;
}


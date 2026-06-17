
/* public: void __thiscall CTextureData::Create_t(class CImageInfo const *,long,long,unsigned long)
    */

void __thiscall
CTextureData::Create_t
          (CTextureData *this,CImageInfo *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  
                    /* 0x94890  1443  ?Create_t@CTextureData@@QAEXPBVCImageInfo@@JJK@Z */
  if ((*(int *)(param_1 + 8) != 0x18) && (*(int *)(param_1 + 8) != 0x20)) {
    param_4 = (ulong)Translate(s_ETRSOnly_24_bit_and_32_bit_pictu_3622e57c,4);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_4,(ThrowInfo *)&DAT_3624f688);
  }
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = *(uint *)param_1;
  if (((int)uVar2 < 0x401) && ((int)uVar1 < 0x401)) {
    iVar3 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar3 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar3 = 0x1f;
    if (param_2 / (int)uVar2 != 0) {
      for (; (uint)(param_2 / (int)uVar2) >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    *(int *)(this + 0x28) = iVar3;
    iVar4 = *(int *)(param_1 + 8);
    if (((int)uVar2 < 4) || ((int)uVar1 < 4)) {
      param_4 = param_4 & 0xfffcffff;
    }
    *(undefined4 *)(this + 0x34) = 0;
    *(uint *)(this + 0x1c) = iVar4 == 0x20 | param_4;
    *(uint *)(this + 0x20) = uVar2 << ((byte)iVar3 & 0x1f);
    *(uint *)(this + 0x24) = uVar1 << ((byte)iVar3 & 0x1f);
    param_4 = uVar1;
    if ((int)uVar2 <= (int)uVar1) {
      param_4 = uVar2;
    }
    iVar3 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar4 = iVar3 + 1;
    if (param_3 <= iVar3 + 1) {
      iVar4 = param_3;
    }
    *(int *)(this + 0x2c) = iVar4;
    lVar5 = GetMipmapOffset(0xf,uVar2,uVar1);
    *(long *)(this + 0x30) = lVar5 << 2;
    if ((*(uint *)(this + 0x1c) & 1) != 0) {
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 8;
    }
    if (1 < *(int *)(this + 0x2c)) {
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 0x10;
    }
    pvVar6 = AllocMemory(0x10);
    *(void **)(this + 0x60) = pvVar6;
    AddFrame_t(this,param_1);
    return;
  }
  param_4 = (ulong)Translate(s_ETRSAt_least_one_of_texture_dime_3622e5b4,4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&param_4,(ThrowInfo *)&DAT_3624f688);
}


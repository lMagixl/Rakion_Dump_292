
/* public: void __thiscall CTextureData::AddFrame_t(class CImageInfo const *) */

void __thiscall CTextureData::AddFrame_t(CTextureData *this,CImageInfo *param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  
                    /* 0x94700  979  ?AddFrame_t@CTextureData@@QAEXPBVCImageInfo@@@Z */
  if ((*(int *)(param_1 + 8) != 0x18) && (*(int *)(param_1 + 8) != 0x20)) {
    param_1 = (CImageInfo *)Translate(s_I_ETRSOnly_24_bit_and_32_bit_pic_3622e502 + 2,4);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_1,(ThrowInfo *)&DAT_3624f688);
  }
  iVar3 = *(int *)param_1;
  iVar4 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)(this + 0x1c);
  if (iVar3 != *(int *)(this + 0x20) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f)) {
    param_1 = (CImageInfo *)Translate(s_ETRSIncompatible_frame_width__3622e53c,4);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_1,(ThrowInfo *)&DAT_3624f688);
  }
  if (iVar4 == *(int *)(this + 0x24) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f)) {
    iVar6 = *(int *)(this + 0x34) * *(int *)(this + 0x30);
    GrowMemory((void **)(this + 0x60),*(int *)(this + 0x30) + iVar6);
    iVar5 = iVar4 * iVar3;
    puVar1 = (ulong *)((int)*(void **)(this + 0x60) + ((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) * 4
                      );
    if ((uVar2 & 1) == 0) {
      AddAlphaChannel(*(uchar **)(param_1 + 0xc),puVar1,iVar5,(uchar *)0x0);
    }
    else {
      puVar7 = *(ulong **)(param_1 + 0xc);
      puVar8 = puVar1;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    MakeMipmaps(puVar1,iVar3,iVar4,0);
    if ((((byte)this[0x1c] & 8) != 0) &&
       (iVar5 = FUN_36093620(extraout_ECX,(int)puVar1), iVar5 == 0)) {
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) & 0xfffffff7;
    }
    if (((byte)this[0x1c] & 0x10) != 0) {
      iVar5 = iVar4;
      if ((iVar3 < iVar4) || (iVar5 = iVar3, iVar3 <= iVar4)) {
        iVar4 = iVar3;
      }
      iVar3 = FUN_36093580((void *)(iVar5 / iVar4),
                           (int)(puVar1 + (((int)(*(int *)(this + 0x30) +
                                                 (*(int *)(this + 0x30) >> 0x1f & 3U)) >> 2) -
                                          iVar5 / iVar4)));
      if (iVar3 == 0) {
        *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) & 0xffffffef;
      }
    }
    *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
    return;
  }
  param_1 = (CImageInfo *)Translate(s_ETRSIncompatible_frame_height__3622e55c,4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&param_1,(ThrowInfo *)&DAT_3624f688);
}


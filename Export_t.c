
/* public: void __thiscall CTextureData::Export_t(class CImageInfo &,long) */

void __thiscall CTextureData::Export_t(CTextureData *this,CImageInfo *param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  CImageInfo *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
                    /* 0x94c90  1593  ?Export_t@CTextureData@@QAEXAAVCImageInfo@@J@Z */
  if (param_2 < *(int *)(this + 0x34)) {
    uVar1 = *(undefined4 *)(this + 0x1c);
    Force(this,0x300);
    uVar2 = *(uint *)(this + 0x1c);
    iVar6 = *(int *)(this + 0x20) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f);
    iVar4 = *(int *)(this + 0x24) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f);
    CImageInfo::Clear(param_1);
    *(int *)(param_1 + 4) = iVar4;
    iVar4 = iVar4 * iVar6;
    *(int *)param_1 = iVar6;
    iVar6 = (uint)((uVar2 & 1) != 0) * 8 + 0x18;
    *(int *)(param_1 + 8) = iVar6;
    param_2 = *(int *)(this + 0x60) +
              ((int)(*(int *)(this + 0x30) * param_2 +
                    (*(int *)(this + 0x30) * param_2 >> 0x1f & 3U)) >> 2) * 4;
    iVar6 = iVar6 * iVar4;
    pCVar3 = AllocMemory((int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3);
    *(CImageInfo **)(param_1 + 0xc) = pCVar3;
    if ((uVar2 & 1) == 0) {
      RemoveAlphaChannel((ulong *)param_2,(uchar *)pCVar3,iVar4);
    }
    else {
      puVar5 = (undefined4 *)param_2;
      param_1 = pCVar3;
      if (iVar4 != 0) {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pCVar3 = *puVar5;
          puVar5 = puVar5 + 1;
          pCVar3 = pCVar3 + 4;
        }
      }
    }
    *(undefined4 *)(this + 0x1c) = uVar1;
    CSerial::Reload((CSerial *)this);
    return;
  }
  param_1 = (CImageInfo *)Translate(s_ETRSTexture_frame_that_is_to_be_e_3622e7d0,4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&param_1,(ThrowInfo *)&DAT_3624f688);
}


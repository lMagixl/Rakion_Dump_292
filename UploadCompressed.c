
/* public: int __thiscall CTextureData::UploadCompressed(void) */

int __thiscall CTextureData::UploadCompressed(CTextureData *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  CTextureData *pCVar6;
  
                    /* 0x93e50  3932  ?UploadCompressed@CTextureData@@QAEHXZ */
  iVar3 = CGfxLibrary::HasCompression(_pGfx);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(this + 0x1c);
    iVar3 = DAT_362c9b70;
    if ((((uVar1 & 8) == 0) && ((uVar1 & 1) != 0)) && (iVar3 = DAT_362c9b78, (uVar1 & 0x20) == 0)) {
      iVar3 = DAT_362c9b74;
    }
    *(int *)(this + 0x4c) = iVar3;
    if (((uVar1 & 0x20) == 0) || (DAT_362c9b74 != DAT_362c9b78)) {
      pCVar6 = this + 0x5c;
      if (*(int *)(this + 0x5c) == 0) {
        if (*(int *)(this + 0x34) < 2) {
          (*DAT_362c4688)(pCVar6);
        }
        else {
          pvVar4 = AllocMemory(*(int *)(this + 0x34) * 4);
          *(void **)pCVar6 = pvVar4;
          iVar3 = 0;
          if (0 < *(int *)(this + 0x34)) {
            do {
              (*DAT_362c4688)(*(int *)pCVar6 + iVar3 * 4);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(this + 0x34));
          }
        }
      }
      *(uint *)(this + 0x40) = (uint)(*(int *)(this + 0x2c) < 2);
      if (1 < *(int *)(this + 0x34)) {
        pCVar6 = *(CTextureData **)pCVar6;
      }
      iVar3 = 0;
      if (0 < *(int *)(this + 0x34)) {
        do {
          iVar5 = *(int *)(this + 0x30);
          iVar2 = *(int *)(this + 0x60);
          FUN_3607b9d0((undefined4 *)pCVar6,(int *)(this + 0x38));
          iVar5 = FUN_3607bcf0((int *)(iVar5 * iVar3 + iVar2),
                               *(int *)(this + 0x20) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f),
                               *(int *)(this + 0x24) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f),
                               *(int *)(this + 0x30),*(int *)(this + 0x4c));
          if (iVar5 == 0) {
            return 0;
          }
          iVar3 = iVar3 + 1;
          pCVar6 = pCVar6 + 4;
        } while (iVar3 < *(int *)(this + 0x34));
      }
      FreeMemory(*(void **)(this + 0x60));
      *(undefined4 *)(this + 0x60) = 0;
      return 1;
    }
  }
  return 0;
}


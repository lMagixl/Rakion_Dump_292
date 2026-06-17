
/* private: void __thiscall CGfxLibrary::StopDisplayMode(void) */

void __thiscall CGfxLibrary::StopDisplayMode(CGfxLibrary *this)

{
  CStock_CMesh *this_00;
  CStock_CTextureData *this_01;
  int iVar1;
  CTextureData *pCVar2;
  CMesh *this_02;
  int *piVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x89690  3684  ?StopDisplayMode@CGfxLibrary@@AAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212693;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_360c2aa0();
  FUN_36085520();
  for (piVar3 = *(int **)(_pGfx + 0xb24); this_01 = _pTextureStock, *piVar3 != 0;
      piVar3 = (int *)*piVar3) {
    TR_UnbindTerrainTextures((CTerrain *)(piVar3 + -8));
  }
  if (_pTextureStock != (CStock_CTextureData *)0x0) {
    iVar4 = 0;
    local_4 = 0;
    iVar1 = FUN_3608a5a0((int)_pTextureStock);
    if (0 < iVar1) {
      do {
        pCVar2 = (CTextureData *)FUN_3608a4e0(this_01,iVar4);
        *(undefined4 *)(pCVar2 + 0x38) = 0;
        *(undefined4 *)(pCVar2 + 0x3c) = 0;
        *(undefined4 *)(pCVar2 + 0x48) = 0;
        *(undefined4 *)(pCVar2 + 0x44) = 0;
        CTextureData::Unbind(pCVar2);
        iVar4 = iVar4 + 1;
        iVar1 = FUN_3608a5a0((int)this_01);
      } while (iVar4 < iVar1);
    }
    local_4 = 0xffffffff;
  }
  (*DAT_362c468c)(&DAT_362c3b2c);
  (*DAT_362c468c)(&DAT_362c3b64);
  pCVar2 = _ptdFlat;
  *(undefined4 *)(_ptdFlat + 0x38) = 0;
  *(undefined4 *)(pCVar2 + 0x3c) = 0;
  *(undefined4 *)(pCVar2 + 0x48) = 0;
  *(undefined4 *)(pCVar2 + 0x44) = 0;
  CTextureData::Unbind(_ptdFlat);
  this_00 = _pMeshStock;
  if (_pMeshStock != (CStock_CMesh *)0x0) {
    iVar4 = 0;
    local_4 = 1;
    iVar1 = FUN_3608a5b0((int)_pMeshStock);
    if (0 < iVar1) {
      do {
        this_02 = (CMesh *)FUN_3608a4f0(this_00,iVar4);
        CMesh::Unbind(this_02);
        iVar4 = iVar4 + 1;
        iVar1 = FUN_3608a5b0((int)this_00);
      } while (iVar4 < iVar1);
    }
    local_4 = 0xffffffff;
  }
  FUN_36162e60();
  if (*(int *)(this + 0xa38) == 0) {
    EndDriver_OGL(this);
    FUN_3608d5c0();
    FUN_36060580();
  }
  else if (*(int *)(this + 0xa38) == 1) {
    EndDriver_D3D(this);
    FUN_3608d5c0();
  }
  if (DAT_362c4d74 != (void *)0x0) {
    FreeMemory(DAT_362c4d74);
    DAT_362c4d74 = (void *)0x0;
    DAT_362c4d78 = 0;
    DAT_362c4d7c = 0;
  }
  if (*(HMODULE *)(this + 0xa34) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(this + 0xa34));
  }
  *(undefined4 *)(this + 0xa34) = 0;
  DAT_362a1590 = 0xffffffff;
  *(undefined4 *)(this + 0xa38) = 0xffffffff;
  *(undefined4 *)(this + 0xae0) = 0;
  *(undefined4 *)(this + 0xa30) = 0;
  *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) & 4;
  FUN_360837d0(-1);
  ExceptionList = pvStack_c;
  return;
}


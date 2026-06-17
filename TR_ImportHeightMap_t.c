
/* void __cdecl TR_ImportHeightMap_t(class CTerrain *,class CTFileName const &,int) */

void __cdecl TR_ImportHeightMap_t(CTerrain *param_1,CTFileName *param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  ulonglong uVar6;
  int local_1c;
  int local_18;
  int local_14;
  byte *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x178f60  3774  ?TR_ImportHeightMap_t@@YAXPAVCTerrain@@ABVCTFileName@@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a899;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CImageInfo::CImageInfo((CImageInfo *)&local_1c);
  local_4 = 0;
  CImageInfo::LoadAnyGfxFormat_t((CImageInfo *)&local_1c,param_2);
  iVar3 = local_18 * local_1c;
  iVar5 = (int)(local_14 + (local_14 >> 0x1f & 7U)) >> 3;
  uVar6 = FUN_361bfd6c();
  if ((float)(local_1c + -1) * 1.0 != (float)(int)uVar6) {
    ThrowF_t(s_I_Height_map_from___s__has_inval_3623d08a + 2,*(undefined4 *)param_2);
  }
  uVar6 = FUN_361bfd6c();
  if ((float)(local_18 + -1) * 1.0 != (float)(int)uVar6) {
    ThrowF_t(s_Height_map_from___s__has_invalid_3623d0b4,*(undefined4 *)param_2);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x2c);
  FUN_36177740(param_1,local_1c,local_18);
  psVar4 = (short *)*puVar2;
  if (param_3 == 0) {
    if (0 < iVar3) {
      do {
        bVar1 = *local_10;
        local_10 = local_10 + iVar5;
        iVar3 = iVar3 + -1;
        *psVar4 = (ushort)bVar1 << 8;
        psVar4 = psVar4 + 1;
      } while (iVar3 != 0);
    }
  }
  else if (0 < iVar3) {
    do {
      *psVar4 = *(short *)local_10;
      psVar4 = psVar4 + 1;
      local_10 = local_10 + iVar5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  TR_RegenerateAll(param_1);
  local_4 = 0xffffffff;
  CImageInfo::~CImageInfo((CImageInfo *)&local_1c);
  ExceptionList = local_c;
  return;
}


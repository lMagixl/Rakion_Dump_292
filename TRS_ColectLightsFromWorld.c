
/* void __cdecl TRS_ColectLightsFromWorld(class CTerrain *) */

void __cdecl TRS_ColectLightsFromWorld(CTerrain *param_1)

{
  void *this;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  CLightSource *this_00;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x184d50  3737  ?TRS_ColectLightsFromWorld@@YAXPAVCTerrain@@@Z */
  puStack_8 = &LAB_3621ab38;
  local_c = ExceptionList;
  this = (void *)(*(int *)(*(int *)(param_1 + 0x28) + 0xa8) + 0x15c);
  iVar7 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar3 = FUN_360caf20((int)this);
  if (0 < iVar3) {
    do {
      piVar4 = (int *)FUN_360cafb0(this,iVar7);
      this_00 = (CLightSource *)(**(code **)(*piVar4 + 0xa4))();
      if ((this_00 != (CLightSource *)0x0) && ((*(uint *)(this_00 + 0x1c) & 0xc0) == 0)) {
        if ((*(uint *)(this_00 + 0x1c) & 1) == 0) {
          uVar1 = *(undefined4 *)(this_00 + 0x24);
          uVar2 = *(undefined4 *)(this_00 + 0x20);
          uVar5 = CLightSource::GetLightColor(this_00);
          iVar3 = FUN_360cafb0(this,iVar7);
          TRS_AddPointLight(uVar1,uVar2,uVar5,*(undefined4 *)(iVar3 + 0x3c),
                            *(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(iVar3 + 0x44),
                            *(undefined4 *)(iVar3 + 0x48),*(undefined4 *)(iVar3 + 0x4c),
                            *(undefined4 *)(iVar3 + 0x50));
        }
        else {
          uVar5 = CLightSource::GetLightColor(this_00);
          uVar6 = CLightSource::GetLightAmbient(this_00);
          iVar3 = FUN_360cafb0(this,iVar7);
          TRS_AddDirectionalLight
                    (uVar5,uVar6,*(undefined4 *)(iVar3 + 0x3c),*(undefined4 *)(iVar3 + 0x40),
                     *(undefined4 *)(iVar3 + 0x44),*(undefined4 *)(iVar3 + 0x48),
                     *(undefined4 *)(iVar3 + 0x4c),*(undefined4 *)(iVar3 + 0x50));
        }
      }
      iVar7 = iVar7 + 1;
      iVar3 = FUN_360caf20((int)this);
    } while (iVar7 < iVar3);
  }
  ExceptionList = local_c;
  return;
}


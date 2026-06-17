
/* void __cdecl ChangeSurfaceShader_t(struct MeshSurface &,class CTString) */

void __cdecl ChangeSurfaceShader_t(int param_1,char *param_2)

{
  CShader *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *local_54;
  undefined4 local_50;
  int local_4c [2];
  undefined4 auStack_44 [2];
  undefined4 auStack_3c [2];
  undefined4 auStack_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x1569e0  1160  ?ChangeSurfaceShader_t@@YAXAAUMeshSurface@@VCTString@@@Z */
  puStack_8 = &LAB_36219db4;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_54 = StringDuplicate(param_2);
  local_50 = 0;
  local_4._0_1_ = 1;
  pCVar1 = CStock_CShader::Obtain_t(_pShaderStock,(CTFileName *)&local_54);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_54);
  if (*(CShader **)(param_1 + 0xc) != (CShader *)0x0) {
    CStock_CShader::Release(_pShaderStock,*(CShader **)(param_1 + 0xc));
  }
  *(CShader **)(param_1 + 0xc) = pCVar1;
  FUN_36091b10(local_4c);
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*(int *)(param_1 + 0xc) + 0x18))(local_4c);
  iVar2 = FUN_3600bef0((undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_36026b60(local_4c);
  iVar4 = FUN_3600bef0((undefined4 *)(param_1 + 0x18));
  iVar5 = FUN_36026b60(auStack_44);
  iVar6 = FUN_360637d0((undefined4 *)(param_1 + 0x20));
  iVar7 = FUN_36026b60(auStack_3c);
  iVar8 = FUN_3600cba0((undefined4 *)(param_1 + 0x28));
  iVar9 = FUN_36026b60(auStack_34);
  if (iVar2 < iVar3) {
    FUN_36026aa0((undefined4 *)(param_1 + 0x10),iVar3);
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  if (iVar4 < iVar5) {
    FUN_36026aa0((void *)(param_1 + 0x18),iVar5);
    iVar2 = iVar4;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar5);
  }
  if (iVar6 < iVar7) {
    FUN_36063ab0((void *)(param_1 + 0x20),iVar7);
    for (; iVar4 < iVar7; iVar4 = iVar4 + 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar4 * 4) = 0xffffffff;
    }
  }
  if (iVar8 < iVar9) {
    FUN_360c5ce0((void *)(param_1 + 0x28),iVar9);
    if (3 < iVar9 - iVar8) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar8 * 4) = 0x3f800000;
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + 4 + iVar8 * 4) = 0x3f800000;
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8 + iVar8 * 4) = 0x3f800000;
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xc + iVar8 * 4) = 0x3f800000;
        iVar8 = iVar8 + 4;
      } while (iVar8 < iVar9 + -3);
    }
    for (; iVar8 < iVar9; iVar8 = iVar8 + 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar8 * 4) = 0x3f800000;
    }
  }
  local_4 = local_4 & 0xffffff00;
  FUN_36091b80(local_4c);
  local_4 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = pvStack_c;
  return;
}


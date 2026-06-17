
void __thiscall FUN_361473a0(void *this,int param_1,int param_2)

{
  Vector<float,3> *pVVar1;
  Vector<float,3> *pVVar2;
  Vector<float,3> *pVVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 *puVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  byte bVar19;
  int iVar20;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1 + -0xd0;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  iVar16 = param_2 - *(int *)((int)this + 0x14);
  *(int *)((int)this + 0x18) = param_2;
  *(int *)((int)this + 0x1c) = iVar16;
  *(int *)((int)this + 0x20) = *(int *)(param_1 + 0x28) >> ((byte)param_2 & 0x1f);
  iVar18 = *(int *)((int)this + 0x20);
  *(int *)((int)this + 0x24) = *(int *)(param_1 + 0x2c) >> ((byte)param_2 & 0x1f);
  bVar19 = (byte)iVar16;
  iVar16 = (*(int *)(param_1 + 0x50) >> (bVar19 & 0x1f)) + 1;
  if (iVar18 <= iVar16) {
    iVar16 = iVar18;
  }
  *(int *)((int)this + 0x28) = iVar16;
  iVar16 = *(int *)((int)this + 0x24);
  iVar20 = (*(int *)(param_1 + 0x54) >> (bVar19 & 0x1f)) + 1;
  if (iVar16 <= iVar20) {
    iVar20 = iVar16;
  }
  *(int *)((int)this + 0x2c) = iVar20;
  lVar17 = GetMipmapOffset(0xf,iVar18,iVar16);
  iVar18 = ((int)(*(int *)(param_1 + 0x38) + (*(int *)(param_1 + 0x38) >> 0x1f & 3U)) >> 2) - lVar17
  ;
  if (*(int *)((int)this + 8) == 0) {
    *(int *)((int)this + 0x30) = *(int *)(param_1 + 0x30) + iVar18 * 4;
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  else {
    iVar18 = iVar18 * 4;
    *(int *)((int)this + 0x30) = *(int *)(param_1 + 0x34) + iVar18;
    *(int *)((int)this + 0x34) = *(int *)(param_1 + 0x30) + iVar18;
  }
  puVar15 = *(undefined4 **)((int)this + 4);
  iVar18 = *(int *)(*(int *)(*(int *)(puVar15[0x6b] + 0x38) + 0x14) + 0x668);
  local_2c = 1 << ((char)*(undefined4 *)((int)this + 0x18) - 1U & 0x1f);
  local_30 = local_2c - *(int *)((int)this + 0xc);
  local_2c = local_2c - *(int *)((int)this + 0x10);
  pVVar1 = (Vector<float,3> *)((int)this + 0x38);
  CMappingDefinition::GetSpaceCoordinates
            ((CMappingDefinition *)(puVar15 + 0x5c),(CMappingVectors *)(*(int *)*puVar15 + 0x10),
             (Vector<long,2> *)&local_30,pVVar1);
  local_c = *(float *)(iVar18 + 0x5c) * *(float *)((int)this + 0x40) +
            *(float *)(iVar18 + 0x54) * *(float *)pVVar1 +
            *(float *)((int)this + 0x3c) * *(float *)(iVar18 + 0x58);
  local_8 = *(float *)((int)this + 0x3c) * *(float *)(iVar18 + 100) +
            *(float *)(iVar18 + 0x68) * *(float *)((int)this + 0x40) +
            *(float *)(iVar18 + 0x60) * *(float *)pVVar1;
  local_4 = *(float *)(iVar18 + 0x6c) * *(float *)pVVar1 +
            *(float *)((int)this + 0x3c) * *(float *)(iVar18 + 0x70) +
            *(float *)(iVar18 + 0x74) * *(float *)((int)this + 0x40);
  local_18 = local_c + *(float *)(iVar18 + 0x3c);
  local_14 = local_8 + *(float *)(iVar18 + 0x40);
  local_10 = local_4 + *(float *)(iVar18 + 0x44);
  *(float *)pVVar1 = local_18;
  *(float *)((int)this + 0x3c) = local_14;
  *(float *)((int)this + 0x40) = local_10;
  bVar19 = (byte)*(undefined4 *)((int)this + 0x18);
  local_20 = 1 << (bVar19 - 1 & 0x1f);
  local_1c = local_20 + (1 << (bVar19 & 0x1f));
  local_28 = local_1c - *(int *)((int)this + 0xc);
  local_1c = local_1c - *(int *)((int)this + 0x10);
  local_20 = local_20 + (0 << (bVar19 & 0x1f));
  local_24 = local_20 - *(int *)((int)this + 0x10);
  local_20 = local_20 - *(int *)((int)this + 0xc);
  pVVar2 = (Vector<float,3> *)((int)this + 0x44);
  CMappingDefinition::GetSpaceCoordinates
            ((CMappingDefinition *)(*(undefined4 **)((int)this + 4) + 0x5c),
             (CMappingVectors *)(*(int *)**(undefined4 **)((int)this + 4) + 0x10),
             (Vector<long,2> *)&local_28,pVVar2);
  local_c = *(float *)(iVar18 + 0x54) * *(float *)pVVar2 +
            *(float *)((int)this + 0x48) * *(float *)(iVar18 + 0x58) +
            *(float *)((int)this + 0x4c) * *(float *)(iVar18 + 0x5c);
  local_8 = *(float *)(iVar18 + 0x60) * *(float *)pVVar2 +
            *(float *)((int)this + 0x48) * *(float *)(iVar18 + 100) +
            *(float *)((int)this + 0x4c) * *(float *)(iVar18 + 0x68);
  local_4 = *(float *)pVVar2 * *(float *)(iVar18 + 0x6c) +
            *(float *)(iVar18 + 0x70) * *(float *)((int)this + 0x48) +
            *(float *)(iVar18 + 0x74) * *(float *)((int)this + 0x4c);
  local_18 = local_c + *(float *)(iVar18 + 0x3c);
  local_14 = local_8 + *(float *)(iVar18 + 0x40);
  local_10 = local_4 + *(float *)(iVar18 + 0x44);
  *(float *)pVVar2 = local_18;
  *(float *)((int)this + 0x48) = local_14;
  *(float *)((int)this + 0x4c) = local_10;
  pVVar3 = (Vector<float,3> *)((int)this + 0x50);
  CMappingDefinition::GetSpaceCoordinates
            ((CMappingDefinition *)(*(undefined4 **)((int)this + 4) + 0x5c),
             (CMappingVectors *)(*(int *)**(undefined4 **)((int)this + 4) + 0x10),
             (Vector<long,2> *)&local_20,pVVar3);
  fVar4 = *(float *)(iVar18 + 0x60);
  fVar5 = *(float *)pVVar3;
  fVar6 = *(float *)(iVar18 + 0x68);
  fVar7 = *(float *)(iVar18 + 100);
  fVar8 = *(float *)(iVar18 + 0x74);
  fVar9 = *(float *)(iVar18 + 0x70);
  fVar10 = *(float *)((int)this + 0x54);
  fVar11 = *(float *)pVVar3;
  fVar12 = *(float *)(iVar18 + 0x6c);
  fVar13 = *(float *)(iVar18 + 0x40);
  fVar14 = *(float *)(iVar18 + 0x44);
  *(float *)pVVar3 =
       *(float *)(iVar18 + 0x54) * *(float *)pVVar3 +
       *(float *)((int)this + 0x54) * *(float *)(iVar18 + 0x58) +
       *(float *)(iVar18 + 0x5c) * *(float *)((int)this + 0x58) + *(float *)(iVar18 + 0x3c);
  *(float *)((int)this + 0x54) =
       fVar7 * *(float *)((int)this + 0x54) + fVar6 * *(float *)((int)this + 0x58) + fVar4 * fVar5 +
       fVar13;
  *(float *)((int)this + 0x58) =
       fVar11 * fVar12 + fVar9 * fVar10 + fVar8 * *(float *)((int)this + 0x58) + fVar14;
  *(float *)pVVar2 = *(float *)pVVar2 - *(float *)pVVar1;
  *(float *)((int)this + 0x48) = *(float *)((int)this + 0x48) - *(float *)((int)this + 0x3c);
  *(float *)((int)this + 0x4c) = *(float *)((int)this + 0x4c) - *(float *)((int)this + 0x40);
  *(float *)pVVar3 = *(float *)pVVar3 - *(float *)pVVar1;
  *(float *)((int)this + 0x54) = *(float *)((int)this + 0x54) - *(float *)((int)this + 0x3c);
  *(float *)((int)this + 0x58) = *(float *)((int)this + 0x58) - *(float *)((int)this + 0x40);
  return;
}


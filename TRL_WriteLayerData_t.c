
/* void __cdecl TRL_WriteLayerData_t(class CTerrain *,long,class CTStream *) */

void __cdecl TRL_WriteLayerData_t(CTerrain *param_1,long param_2,CTStream *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_5;
  undefined1 local_1;
  
                    /* 0x17a7d0  3733  ?TRL_WriteLayerData_t@@YAXPAVCTerrain@@JPAVCTStream@@@Z */
  iVar1 = *(int *)(param_1 + 0x2c);
  puVar4 = *(undefined4 **)(*(int *)(param_2 * 0x94 + *(int *)(iVar1 + 0x10c)) + 0x30);
  iVar5 = param_2 * 0x94 + *(int *)(iVar1 + 0x10c);
  uVar3 = (*(int *)(iVar1 + 0x1c) + -1) * (*(int *)(iVar1 + 0x18) + -1);
  local_5 = DAT_3623d280;
  local_1 = DAT_3623d284;
  CTStream::WriteID_t(param_3,(CChunkID *)&local_5);
  **(undefined4 **)(param_3 + 0x14) = 0xc;
  *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 4;
  local_5 = DAT_3623d288;
  local_1 = DAT_3623d28c;
  CTStream::WriteID_t(param_3,(CChunkID *)&local_5);
  operator<<(param_3,(CTString *)(iVar5 + 8));
  **(undefined4 **)(param_3 + 0x14) = *(undefined4 *)(iVar5 + 0xc);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x10);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x14);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x18);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x1c);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x20);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x24);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x28);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x2c);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x30);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x34);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x38);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x3c);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x40);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x44);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x48);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x4c);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x50);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x54);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x58);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x5c);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x60);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 100);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x68);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x6c);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x70);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x74);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x78);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x7c);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x80);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x84);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x88);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x8c);
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined4 **)(param_3 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0x90);
  *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 4;
  local_5 = DAT_3623d290;
  local_1 = DAT_3623d294;
  CTStream::WriteID_t(param_3,(CChunkID *)&local_5);
  puVar6 = *(undefined4 **)(param_3 + 0x14);
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(uint *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + uVar3;
  return;
}


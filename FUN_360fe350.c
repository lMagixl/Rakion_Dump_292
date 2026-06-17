
void __thiscall FUN_360fe350(void *this,long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  CTStream *unaff_EBP;
  uint unaff_ESI;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  plVar1 = *(long **)(param_1 + 0x14);
  lVar2 = *plVar1;
  *(long **)(param_1 + 0x14) = plVar1 + 1;
  lVar3 = plVar1[1];
  *(long **)(param_1 + 0x14) = plVar1 + 2;
  param_1 = lVar2;
  puVar4 = AllocMemory(lVar2);
  iVar5 = (**(code **)(*(int *)this + 8))(plVar1 + 2,lVar3,puVar4,&param_1);
  if (iVar5 == 0) {
    FreeMemory(puVar4);
    pcVar6 = Translate(s_I_ETRSError_while_unpacking_a_st_36235aca + 2,4);
    ThrowF_t(pcVar6);
  }
  puVar8 = puVar4;
  puVar9 = *(undefined4 **)(unaff_EBP + 0x14);
  for (uVar7 = unaff_ESI >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar7 = unaff_ESI & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  *(uint *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + unaff_ESI;
  CTStream::SetPos_t(unaff_EBP,0);
  FreeMemory(puVar4);
  return;
}


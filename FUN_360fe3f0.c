
void __thiscall FUN_360fe3f0(void *this,CTStream *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  int unaff_ESI;
  undefined4 *puVar10;
  uint unaff_EDI;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  lVar2 = CTStream::GetStreamSize(param_1);
  lVar3 = (*(code *)**(undefined4 **)this)(lVar2);
  puVar4 = AllocMemory(lVar3);
  iVar5 = (**(code **)(*(int *)this + 4))(uVar1,lVar2,puVar4,&stack0x00000000);
  if (iVar5 == 0) {
    FreeMemory(puVar4);
    pcVar6 = Translate(s_ETRSError_while_packing_a_stream_36235af0,4);
    ThrowF_t(pcVar6);
  }
  **(long **)(unaff_ESI + 0x14) = lVar2;
  puVar9 = (uint *)(*(int *)(unaff_ESI + 0x14) + 4);
  *(uint **)(unaff_ESI + 0x14) = puVar9;
  *puVar9 = unaff_EDI;
  puVar7 = (undefined4 *)(*(int *)(unaff_ESI + 0x14) + 4);
  *(undefined4 **)(unaff_ESI + 0x14) = puVar7;
  puVar10 = puVar4;
  for (uVar8 = unaff_EDI >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar7 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar8 = unaff_EDI & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar10;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  *(uint *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + unaff_EDI;
  FreeMemory(puVar4);
  return;
}


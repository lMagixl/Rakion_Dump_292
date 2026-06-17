
/* public: void __thiscall CNetworkLibrary::FinishCRCGather(void) */

void __thiscall CNetworkLibrary::FinishCRCGather(CNetworkLibrary *this)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  CTMemoryStream local_74 [20];
  undefined4 *local_60;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf3c50  1651  ?FinishCRCGather@CNetworkLibrary@@QAEXXZ */
  puStack_c = &LAB_3621663c;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff80;
  local_8 = 0;
  ExceptionList = &local_10;
  CTMemoryStream::CTMemoryStream(local_74);
  local_8._0_1_ = 1;
  FUN_36022b80((CTStream *)local_74);
  CTStream::SetPos_t((CTStream *)local_74,0);
  lVar1 = CTStream::GetStreamSize((CTStream *)local_74);
  *(long *)(this + 0x864) = lVar1;
  puVar2 = AllocMemory(lVar1);
  uVar3 = *(uint *)(this + 0x864);
  *(undefined4 **)(this + 0x860) = puVar2;
  puVar5 = local_60;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  local_60 = (undefined4 *)((int)local_60 + uVar3);
  CTStream::SetPos_t((CTStream *)local_74,0);
  uVar3 = FUN_36022cf0((CTStream *)local_74);
  *(uint *)(this + 0x868) = uVar3;
  local_8 = (uint)local_8._1_3_ << 8;
  CTMemoryStream::~CTMemoryStream(local_74);
  ExceptionList = local_10;
  return;
}

